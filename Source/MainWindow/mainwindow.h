#pragma once

#include <QMainWindow>
#include <QtMultimedia>
#include <QtCore>
#include <QtWidgets>
#include <QString>
#include <QVideoWidget>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const int  width, const int  height);
    ~MainWindow() = default;

    void PlayVideo(const QString& path);
};
