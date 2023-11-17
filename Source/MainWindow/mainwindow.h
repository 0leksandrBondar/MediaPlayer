#pragma once

#include <QMainWindow>

class QWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const int  width, const int  height);
    ~MainWindow() = default;
};
