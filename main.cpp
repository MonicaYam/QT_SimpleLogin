#include "simplelogin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleLogin w;
    w.show();
    return a.exec();
}
