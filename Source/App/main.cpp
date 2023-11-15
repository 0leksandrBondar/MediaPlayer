#include "mainwindow.h"
#include <QApplication>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    MainWindow mainWindow(400, 400);
    mainWindow.show();

    return QApplication::exec();
}