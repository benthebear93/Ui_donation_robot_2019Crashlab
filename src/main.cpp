#include "merry_bot/merry_bot.h"
#include "ui_merry_bot.h"
#include "ui_show_bank.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    merry_bot::merry_bot w(argc, argv);

    w.show();

    return a.exec();
}
