#include "admin_ui/admin_ui.h"
#include "ui_admin_ui.h"
#include "admin_ui/ros_task.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    admin_ui::admin_ui w(argc,argv);
    w.show();

    return a.exec();
}
