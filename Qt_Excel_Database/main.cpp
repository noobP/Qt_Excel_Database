#include "stdafx.h"
#include "Qt_Excel_Database.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qt_Excel_Database w;
    w.show();
    return a.exec();
}
