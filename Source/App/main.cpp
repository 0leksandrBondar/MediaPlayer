#include "mainwindow.h"
#include <QApplication>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    const QString videoPath = "C:\\qt_projects\\MediaPlayer\\videos\\video_1.mp4";

    MainWindow mainWindow(400, 400);
    mainWindow.PlayVideo(videoPath);

    return QApplication::exec();
}