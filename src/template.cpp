/*
    %ProjectName%, %Summary%
*/


#ifdef QT_QML_DEBUG
#include <QtQuick>
#endif

#include <sailfishapp.h>
#include <QtQml>
#include <QScopedPointer>
#include <QQuickView>
#include <QQmlEngine>
#include <QGuiApplication>
#include <QQmlContext>
#include <QCoreApplication>
#include "%cClassName:l%.h"


int main(int argc, char *argv[])
{
    qmlRegisterType<%cClassName:c%>("%ProjectName%.%cClassName:c%", 1, 0, "%cClassName:c%");

    QScopedPointer<QGuiApplication> app(SailfishApp::application(argc, argv));
    QScopedPointer<QQuickView> view(SailfishApp::createView());
    view->setSource(SailfishApp::pathTo("qml/%ProjectName%.qml"));
    view->show();

    return app->exec();
}
