#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <QObject>
#include <QQmlEngine>
#include <QApplication>
#include <QUdpSocket>

#include "mastersettingsmodel.h"
#include "mainwindowcontroller.h"
#include "masterconnectionstatuscontroller.h"
#include "roscorecontroller.h"
#include "broadcaster.h"

namespace Soro {

class MainController : public QObject
{
    Q_OBJECT
public:
    static void init(QApplication *app);
    static void panic(QString tag, QString message);

    static QString getId();

Q_SIGNALS:
    void initialized();

private:

    explicit MainController(QObject *parent=0);
    static MainController *_self;

    MasterSettingsModel *_masterSettings = nullptr;
    QQmlEngine *_qmlEngine = nullptr;
    MainWindowController *_mainWindowController = nullptr;
    MasterConnectionStatusController *_masterConnectionStatusController = nullptr;
    Broadcaster *_broadcaster = nullptr;
    RosCoreController *_roscoreController = nullptr;

private Q_SLOTS:
    void initInternal();
};

} // namespace Soro

#endif // MAINCONTROLLER_H