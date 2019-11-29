#include "merry_b/merry_bot.h"
#include "ui_merry_bot.h"

#include <ros/ros.h>
#include <string>
#include <std_msgs/Int32.h>

#include <iostream>
#include <QMessageBox>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <QtGui>
#include <QCoreApplication>

using namespace std;

namespace merry_bot{
    bool pushed = 0;

    merry_bot::merry_bot(int argc, char** argv, QWidget *parent) :
        QMainWindow(parent),
        qnode(argc, argv),
        ui(new Ui::merry_bot)
    {
        if(qnode.init()) isConnected = true;
        ui->setupUi(this);
    //    m_button = new QPushButton("My Button", this);
    //    m_button->setGeometry(QRect(QPoint(100, 100),
    //    QSize(200, 50)));
        QMainWindow::showFullScreen();

    }

    merry_bot::~merry_bot()
    {
        delete ui;
    }
        void merry_bot::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }

}

void merry_bot::merry_bot::on_pushButton_clicked()
{
    merry_bot::pushed = 1;
    cout << "pushed :"<< merry_bot::pushed << endl;
    qnode.start_msg_.pushcheck = merry_bot::pushed;
    qnode.send_pushed();

    this->hide();
    s_b = new show_bank(this);// this = MainWindow or in this code = merry_bot
    s_b->setWindowFlags(Qt::Window);
    s_b->showFullScreen();
    //s_b->showFullScreen();
}