#include "mainwindow.h"

MainWindow::MainWindow(const std::uint32_t width, const std::uint32_t height) : QMainWindow()
{
    setFixedSize(width, height);
}