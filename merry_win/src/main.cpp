#include "merry_win/merry_win.h"
#include "ui_merry_win.h"
#include "merry_win/ros_task.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    merry_win::merry_win w(argc,argv);

    //w.show();


    return a.exec();
}
