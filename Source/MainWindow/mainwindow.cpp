#include "mainwindow.h"

#include <QtMultimedia>
#include <QVideoWidget>

MainWindow::MainWindow(const int width, const int height) : QMainWindow()
{
    resize(width, height);
}

void MainWindow::PlayVideo(const QString& path)
{
    QMediaPlayer* player = new QMediaPlayer();
    QVideoWidget* video = new QVideoWidget();

    video->setGeometry(20, 20, 640, 480);

    player->setVideoOutput(video);
    player->setSource(QUrl::fromLocalFile(path));

    video->show();
    player->play();
}