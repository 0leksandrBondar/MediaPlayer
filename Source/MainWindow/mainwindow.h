#pragma once

#include <QMainWindow>
#include <QtMultimedia>
#include <QVideoWidget>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const int  width, const int  height);
    ~MainWindow() = default;

    void PlayVideo(const QString& path);
};
