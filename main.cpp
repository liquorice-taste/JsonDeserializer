#include "mainwindow.h"
#include "http.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    http h;
    h.getData();
    return a.exec();
}
