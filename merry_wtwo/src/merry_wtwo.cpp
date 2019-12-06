#include "merry_wtwo/merry_wtwo.h"
#include "merry_wtwo/ros_task.h"
#include "merry_wtwo/ui_merry_wtwo.h"

#include <ros/ros.h>
#include <std_msgs/Int32.h>

#include <iostream>
#include <QMessageBox>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <QtGui>
#include <QCoreApplication>

using namespace std;

namespace merry_wtwo{

	merry_wtwo::merry_wtwo(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::merry_wtwo)
	{
        if(qnode.init()) isConnected = true;
        QObject::connect(&qnode, SIGNAL(window_state2()),this,SLOT(close_w2()));
        //cout << "setup ui " << endl;
        ui->setupUi(this);
        //this->hide();
        //QMainWindow::showFullScreen();
	}

	merry_wtwo::~merry_wtwo()
	{
	    delete ui;
	}
	void merry_wtwo::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }
}
void merry_wtwo::merry_wtwo::on_pushButton_clicked()
{
	merry_wtwo::pushed = 1;
    //cout << "pushed :"<< merry_wtwo::pushed << endl;
    qnode.button_msg_.pushcheck = merry_wtwo::pushed;
    qnode.send_pushed();
    this->hide();
}
void merry_wtwo::merry_wtwo::close_w2()
{
    cout<< "in close_w2" << endl;
    this->show();
}