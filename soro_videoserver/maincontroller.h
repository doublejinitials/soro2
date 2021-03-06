#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <QObject>
#include <QCoreApplication>
#include <QTimerEvent>

#include "videoserver.h"
#include "settingsmodel.h"

namespace Soro {

/* Class to forward audio/video streams to all mission control computers.
 */
class MainController : public QObject
{
    Q_OBJECT
public:
    static void init(QCoreApplication *app);
    static void panic(QString tag, QString message);

    static QString getId();

private:
    explicit MainController(QObject *parent=0);
    static MainController *_self;

    QString _id;

    VideoServer *_videoServer = nullptr;
    SettingsModel *_settingsModel = nullptr;
};

} // namespace Soro

#endif // MAINCONTROLLER_H
