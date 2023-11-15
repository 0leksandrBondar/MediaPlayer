#pragma once

#include <QMainWindow>

// forward declaration:
class QWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const std::uint32_t  width, const std::uint32_t  height);
    ~MainWindow() = default;
};
