#include "merry_b/merry_bot.h"
#include "ui_merry_bot.h"
#include "ui_show_bank.h"
#include <QApplication>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    merry_bot::merry_bot w(argc,argv);

    w.showFullScreen();
    w.show();
    cout << "pushed :"<< endl;
    return a.exec();
}
