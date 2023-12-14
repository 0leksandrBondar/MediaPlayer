#include "playerwidget.h"

#include <QVBoxLayout>

PlayerWidget::PlayerWidget(QWidget* parent) :
    QWidget(parent),
    mediaPlayer(std::make_shared<QMediaPlayer>()),
    videoWidget(std::make_shared<QVideoWidget>(parent))
{
    setupUI();
}

void PlayerWidget::setupUI()
{
    mediaPlayer->setVideoOutput(videoWidget.get());
    // for test
    mediaPlayer->setSource(QUrl::fromLocalFile("C:\\qt_projects\\MediaPlayer\\videos\\video_1.mp4"));
}

void PlayerWidget::resizeEvent(QResizeEvent* event)
{
    auto newSize = event->size();
    videoWidget->resize(newSize.width(), newSize.height() - 100);
}

void PlayerWidget::PlayVideo()
{
    mediaPlayer->play();
}

void PlayerWidget::PauseVideo()
{
    mediaPlayer->pause();
}
