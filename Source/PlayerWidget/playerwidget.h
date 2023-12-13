#pragma once

#include <QtMultimedia>
#include <QVideoWidget>

#include <memory>

class PlayerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PlayerWidget(QWidget* parent = nullptr);

public slots:
    void PlayVideo();
    void PauseVideo();

private:
    void setupUI();
    void resizeEvent(QResizeEvent* event);

private:
    std::shared_ptr<QMediaPlayer> mediaPlayer;
    std::shared_ptr<QVideoWidget> videoWidget;
};