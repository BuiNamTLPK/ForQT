#include <QtWidgets>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Q_INIT_RESOURCE(qml);

    MainWindow w;
    w.show();

    return app.exec();
}

/*
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QWidget>
#include <mainwindow.h>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);
    Q_INIT_RESOURCE(qml);
    */
   /* QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);
    */
/*
    MainWindow w;
    w.show();
    return app.exec();
}
*/
