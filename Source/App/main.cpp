#include "mainwindow.h"
#include <QApplication>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    MainWindow mainWindow(1200, 800);
    mainWindow.show();

    return QApplication::exec();
}