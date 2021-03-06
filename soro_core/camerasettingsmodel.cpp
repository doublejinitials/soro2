/*
 * Copyright 2017 Jacob Jordan <doublejinitials@ou.edu>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "camerasettingsmodel.h"
#include "constants.h"
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QFile>

#define FILE_PATH SORO_MC_SETTINGS_DIR + "/cameras.json"

namespace Soro {

void CameraSettingsModel::load()
{
    QByteArray rawJson;
    QJsonDocument jsonDocument;
    QJsonArray jsonCamerasArray;
    QJsonArray jsonStereoGroupsArray;
    QJsonParseError jsonError;
    QFile file(FILE_PATH);

    _cameras.clear();

    if (!file.exists())
    {
        throw QString("The camera settings file \"%1\" does not exist.").arg(FILE_PATH);
    }
    if (!file.open(QIODevice::ReadOnly))
    {
        throw QString("Error opening camera settings file \"%1\".").arg(FILE_PATH);
    }

    rawJson = file.readAll();
    jsonDocument = QJsonDocument::fromJson(rawJson, &jsonError);
    if (jsonError.error != QJsonParseError::NoError)
    {
        throw QString("Error parsing camera settings file \"%1\": %2").arg(FILE_PATH, jsonError.errorString());
    }

    if (!jsonDocument.object().contains("cameras"))
    {
        throw QString("Error parsing video profiles settings file \"%1\": Item \"cameras\" not found.").arg(FILE_PATH);
    }

    // Cameras will be inserted into this map by the 'index' value so that they will be sorted
    QMap<int, Camera> cameraMap;

    jsonCamerasArray = jsonDocument.object()["cameras"].toArray();
    for (QJsonValue jsonObject : jsonCamerasArray)
    {
        Camera camera;
        int index = jsonObject.toObject()["index"].toInt(-1);
        camera.computerIndex = jsonObject.toObject()["computerIndex"].toInt(0); // Computer index defaults to zero
        camera.name = jsonObject.toObject()["name"].toString("");

        if (jsonObject.toObject().contains("mono"))
        {
            camera.isStereo = false;
            camera.offset = jsonObject.toObject()["mono"].toObject()["offset"].toInt(0); // Offset defaults to zero
            camera.serial = jsonObject.toObject()["mono"].toObject()["matchSerial"].toString();
            camera.productId = jsonObject.toObject()["mono"].toObject()["matchProductId"].toString();
            camera.vendorId = jsonObject.toObject()["mono"].toObject()["matchVendorId"].toString();
        }
        else if (jsonObject.toObject().contains("left") && jsonObject.toObject().contains("right"))
        {
            camera.isStereo = true;
            camera.offset = jsonObject.toObject()["left"].toObject()["offset"].toInt(0); // Offset defaults to zero
            camera.serial = jsonObject.toObject()["left"].toObject()["matchSerial"].toString();
            camera.productId = jsonObject.toObject()["left"].toObject()["matchProductId"].toString();
            camera.vendorId = jsonObject.toObject()["left"].toObject()["matchVendorId"].toString();
            camera.offset2 = jsonObject.toObject()["right"].toObject()["offset"].toInt(0); // Offset defaults to zero
            camera.serial2 = jsonObject.toObject()["right"].toObject()["matchSerial"].toString();
            camera.productId2 = jsonObject.toObject()["right"].toObject()["matchProductId"].toString();
            camera.vendorId2 = jsonObject.toObject()["right"].toObject()["matchVendorId"].toString();
        }
        else
        {
            throw QString("Error parsing camera settings file '%1': Camera entry must either specify a mono camera description, or left and right stereo camera descriptions.").arg(FILE_PATH);
        }

        if (index < 0)
        {
            throw QString("Error parsing camera settings file '%1': Camera entry has an invalid index.").arg(FILE_PATH);
        }
        if (camera.name.isEmpty())
        {
            throw QString("Error parsing camera settings file '%1': Camera entry is missing a name.").arg(FILE_PATH);
        }
        if (cameraMap.contains(index))
        {
            throw QString("Error parsing camera settings file '%1': Two cameras have a duplicate index entry. This is not allowed.").arg(FILE_PATH);
        }
        cameraMap.insert(index, camera);
    }

    // Transfer sorted map values to array
    _cameras = cameraMap.values();
}

CameraSettingsModel::Camera CameraSettingsModel::getCamera(int index) const
{
    return _cameras.value(index);
}

int CameraSettingsModel::getCameraCount() const
{
    return _cameras.count();
}

} // namespace Soro
