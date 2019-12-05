#include "merry_win/merry_win.h"
#include "merry_win/ros_task.h"
#include "ui_merry_win.h"

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

namespace merry_win{

	merry_win::merry_win(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::merry_win)
	{
        if(qnode.init()) isConnected = true;
        //if(window_open == 0){
        cout<<"setup ui"<<endl;
        //cout<<"window_open :" << window_open << endl;
        ui->setupUi(this);
        //QMainWindow::show();
        //}
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
    cout << "pushed :"<< merry_win::pushed << endl;
    qnode.button_msg_.pushcheck = merry_win::pushed;
    qnode.send_pushed();
    //this->hide();

} 