#pragma once

#include <QWidget>
#include <memory>

class QPushButton;
class QResizeEvent;

class ControlVideoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ControlVideoWidget(QWidget* parent = nullptr);

private:
    void setupUI();
    void setupConnections();

    void resizeEvent(QResizeEvent* event);

    void playVideoButtonClicked();
    void stopVideoButtonClicked();

signals:
    void onPlayVideoButtonClicked();
    void onStopVideoButtonClicked();

private:
    std::shared_ptr<QPushButton> playVideoButton;
    std::shared_ptr<QPushButton> stopVideoButton;
};

