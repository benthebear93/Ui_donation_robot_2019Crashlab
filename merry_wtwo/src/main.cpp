#include "merry_wtwo/merry_wtwo.h"
#include "merry_wtwo/ui_merry_wtwo.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    merry_wtwo::merry_wtwo w(argc,argv);
    
    //w.show();

    return a.exec();
}
