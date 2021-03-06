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

import QtQuick 2.0
import QtGraphicalEffects 1.0
import Soro 1.0

import "Theme.js" as Theme

Rectangle {
    property bool selected: true;
    property alias gstreamerSurface: gstreamerSurface
    property string text;

    id: cameraThumbnailView
    border.color: selected ? Theme.blue : Theme.foreground
    border.width: 4

    GStreamerSurface {
        id: gstreamerSurface
        anchors.fill: parent
        anchors.margins: parent.border.width
    }

    DropShadow {
        source: label
        anchors.fill: label
        radius: 10
        samples: 20
        color: Theme.shadow
    }

    Text {
        id: label
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.margins: 12
        font.pixelSize: 24
        font.bold: true
        color: Theme.foreground
        text: parent.text
    }
}
