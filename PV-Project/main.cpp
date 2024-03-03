#include "mainwindow.h"
#include "databasemanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    // w.showFullScreen();
    QObject::connect(&a, &QApplication::aboutToQuit, [&]() {
        QSqlDatabase db = DatabaseManager::instance().database();
        if (db.isOpen()) {
            db.close();
            qDebug() << "Database connection closed";
        } else {
            qDebug() << "Database connection already closed";
        }
    });
    return a.exec();
}
