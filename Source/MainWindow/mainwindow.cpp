#include "mainwindow.h"

#include <QVBoxLayout>

MainWindow::MainWindow(const int width, const int height) :
        QMainWindow(),
        playerWidget(std::make_shared<PlayerWidget>(this)),
        controlVideoWidget(std::make_shared<ControlVideoWidget>(this))
{
    resize(width, height);

    setupUI();
    setupConnections();
}

void MainWindow::setupUI()
{
    setMinimumSize(400, 400);
}

void MainWindow::setupConnections()
{
    connect(controlVideoWidget.get(), &ControlVideoWidget::onPlayVideoButtonClicked, playerWidget.get(), &PlayerWidget::PlayVideo);
    connect(controlVideoWidget.get(), &ControlVideoWidget::onStopVideoButtonClicked, playerWidget.get(),&PlayerWidget::PauseVideo);
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    auto newSize = event->size();

    playerWidget->resize(newSize);
    controlVideoWidget->resize(newSize);
}