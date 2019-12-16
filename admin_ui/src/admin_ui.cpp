#include "admin_ui/admin_ui.h"
#include "admin_ui/ros_task.h"
#include "ui_admin_ui.h"

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
namespace admin_ui{

	extern int psb_l_val;
	extern int psb_m_val;
	extern int psb_r_val;

	admin_ui::admin_ui(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::admin_ui)
	{
		if(qnode.init()) isConnected = true;
		QObject::connect(&qnode, SIGNAL(sub_psd_l()),this,SLOT(change_label_psd_l()));
		QObject::connect(&qnode, SIGNAL(sub_psd_m()),this,SLOT(change_label_psd_m()));
		QObject::connect(&qnode, SIGNAL(sub_psd_r()),this,SLOT(change_label_psd_r()));
		//connect(ui->sound_putton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
	    ui->setupUi(this);
        QMainWindow::showFullScreen();
   	}

	admin_ui::~admin_ui()
	{
	    delete ui;
	}
	void admin_ui::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }
}
void admin_ui::admin_ui::change_label_psd_l()
{
	ui->psd_l->setAlignment(Qt::AlignCenter);
	QFont font = ui->psd_l->font();
	font.setPointSize(20);
	ui->psd_l->setFont(font);
	ui->psd_l->setText(QString(("%1")).arg(psb_l_val));
}
void admin_ui::admin_ui::change_label_psd_m()
{
	ui->psd_m->setAlignment(Qt::AlignCenter);
	QFont font = ui->psd_m->font();
	font.setPointSize(20);
	ui->psd_m->setFont(font);
	ui->psd_m->setText(QString(("%1")).arg(psb_m_val));
}
void admin_ui::admin_ui::change_label_psd_r()
{
	ui->psd_r->setAlignment(Qt::AlignCenter);
	QFont font = ui->psd_r->font();
	font.setPointSize(20);
	ui->psd_r->setFont(font);
	ui->psd_r->setText(QString(("%1")).arg(psb_r_val));
}

void admin_ui::admin_ui::on_end_button_clicked()
{
	admin_ui::end = 1;
	qnode.Test_End.data = admin_ui::end;
	qnode.send_Test_end();
	this->close();
}

void admin_ui::admin_ui::on_sound_putton_clicked()
{
	admin_ui::sound = 1;
	qnode.Test_Sound.data = admin_ui::sound;
	qnode.send_Test_Sound();
}

void admin_ui::admin_ui::on_Motor_left_clicked()
{
	admin_ui::motor_l = 1;
	qnode.Test_ML.data = admin_ui::motor_l;
	qnode.send_Test_ML();
}

void admin_ui::admin_ui::on_Motor_Right_clicked()
{
	admin_ui::motor_r = 1;
	qnode.Test_MR.data = admin_ui::motor_r;
	qnode.send_Test_MR();
}

void admin_ui::admin_ui::on_Motor_Both_clicked()
{
	admin_ui::motor_both = 1;
	qnode.Test_M_both.data = admin_ui::motor_both;
	qnode.send_Test_M_both();
}

void admin_ui::admin_ui::on_pushButton_clicked()
{
	admin_ui::motor_stop = 1;
	qnode.Test_M_stop.data = admin_ui::motor_stop;
	qnode.send_Test_M_stop();
}


///////////////////////////////////////////////
void admin_ui::admin_ui::on_checkBox_2_toggled(bool checked)
{

}

void admin_ui::admin_ui::on_checkBox_3_toggled(bool checked)
{

}

void admin_ui::admin_ui::on_checkBox_toggled(bool checked)
{

}
