#include "szukajka.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Szukajka w;
    w.show();
    return a.exec();
}
