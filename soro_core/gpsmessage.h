#ifndef GPSMESSAGE_H
#define GPSMESSAGE_H

#include <QByteArray>

#include "abstractmessage.h"
#include "latlng.h"
#include "soro_core_global.h"

namespace Soro {

struct SORO_CORE_EXPORT GpsMessage : public AbstractMessage
{
    GpsMessage();
    GpsMessage(const QByteArray& payload);
    operator QByteArray() const override;

    LatLng location;
    double elevation;
    quint8 satellites;
};

} // namespace Soro

#endif // GPSMESSAGE_H
