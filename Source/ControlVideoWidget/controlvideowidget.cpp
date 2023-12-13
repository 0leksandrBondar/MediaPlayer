#include "controlvideowidget.h"

#include <QPushButton>
#include <QVBoxLayout>
#include <QResizeEvent>

ControlVideoWidget::ControlVideoWidget(QWidget *parent) :
        QWidget(parent),
        playVideoButton(std::make_shared<QPushButton>("Play Video", this)),
        stopVideoButton(std::make_shared<QPushButton>("Pause Video", this))
{
    setupUI();
    setupConnections();
}

void ControlVideoWidget::setupUI()
{
    playVideoButton->resize(100, 40);
    stopVideoButton->resize(100, 40);
}

void ControlVideoWidget::setupConnections()
{
    connect(playVideoButton.get(), &QPushButton::clicked, this, &ControlVideoWidget::playVideoButtonClicked);
    connect(stopVideoButton.get(), &QPushButton::clicked, this, &ControlVideoWidget::stopVideoButtonClicked);
}

void ControlVideoWidget::resizeEvent(QResizeEvent* event)
{
    auto newSize = event->size();

    playVideoButton->move(newSize.width() / 2 - 100 - 30, newSize.height() - 80);
    stopVideoButton->move(newSize.width() / 2, newSize.height() - 80);
}

void ControlVideoWidget::playVideoButtonClicked()
{
    emit onPlayVideoButtonClicked();
}

void ControlVideoWidget::stopVideoButtonClicked()
{
    emit onStopVideoButtonClicked();
}