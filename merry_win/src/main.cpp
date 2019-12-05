#include "merry_win/merry_win.h"
#include "ui_merry_win.h"
#include "merry_win/ros_task.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cout << "main window_open val: "<< merry_win::window_open<< endl;
    merry_win::merry_win w(argc,argv);
    if(merry_win::window_open==1)
    {
    	merry_win::merry_win w(argc,argv);
    	cout<< "main if " << endl;
    }

    //merry_win w;
    w.show();

    return a.exec();
}
