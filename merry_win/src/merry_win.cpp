#include "merry_win/merry_win.h"
#include "merry_win/ros_task.h"
#include "ui_merry_win.h"

#include <ros/ros.h>
#include <std_msgs/Int32.h>

#include <iostream>
#include <QMessageBox>
#include <sstream>
#include <math.h>
#include <stdlib.h>
#include <QtGui>
#include <QCoreApplication>

using namespace std;

namespace merry_win{

	merry_win::merry_win(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::merry_win)
	{
        if(qnode.init()) isConnected = true;
        QObject::connect(&qnode, SIGNAL(window_state1()),this,SLOT(close_w1()));
        QObject::connect(&qnode, SIGNAL(admin_ui()),this,SLOT(open_w1()));
        ui->setupUi(this);
        //QMainWindow::show();
        //QMainWindow::showFullScreen();
	}

	merry_win::~merry_win()
	{
	    delete ui;
	}
	void merry_win::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }
}
void merry_win::merry_win::on_pushButton_clicked()
{
	merry_win::pushed = 1;
    //cout << "pushed :"<< merry_win::pushed << endl;
    qnode.button_msg_.pushcheck = merry_win::pushed;
    qnode.send_pushed();
    this->hide();
} 
void merry_win::merry_win::close_w1()
{
    cout<< "in close_w1" << endl;
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
    this->showFullScreen();
} 
void merry_win::merry_win::open_w1()
{
    cout<< "in open_w1" << endl;
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
    this->showFullScreen();
} 
///////////////////////////////////////////////////////////

