#pragma once

#include <QMainWindow>

#include <settingswidget.h>
#include <playerwidget.h>
#include <controlvideowidget.h>

class QPushButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const int  width, const int  height);
    ~MainWindow() = default;

private:
    void setupUI();
    void setupConnections();

private:
    void resizeEvent(QResizeEvent* event);

private:
    std::shared_ptr<PlayerWidget> playerWidget;
    std::shared_ptr<ControlVideoWidget> controlVideoWidget;
};
