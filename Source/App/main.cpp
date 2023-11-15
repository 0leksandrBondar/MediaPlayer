#include <QApplication>
#include <QWidget>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget mainWindow;

    mainWindow.resize(300, 300);
    mainWindow.setWindowTitle("Media Player");

    mainWindow.show();

    return QApplication::exec();
}