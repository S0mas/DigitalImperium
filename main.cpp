#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "backend/include/mainGame.hpp"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);
    MainGame mainGame;

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/qml/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
