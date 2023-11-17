#pragma once

#include <QMainWindow>

class QWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const std::size_t  width, const std::size_t  height);
    ~MainWindow() = default;
};
