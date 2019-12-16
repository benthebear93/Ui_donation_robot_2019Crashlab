#ifndef ADMIN_UI_H
#define ADMIN_UI_H
#ifndef Q_MOC_RUN

#include <QMainWindow>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <iostream>
#include <sstream>
#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include "admin_ui/ros_task.h"
#include "admin_ui/ui_admin_ui.h"
using namespace std;

#endif

namespace admin_ui {

    class admin_ui : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit admin_ui(int argc, char** argv, QWidget *parent = 0);
        ~admin_ui();
        void shownoROSmaster();

    private Q_SLOTS:
        void on_checkBox_2_toggled(bool checked);
        void on_checkBox_3_toggled(bool checked);
        void on_checkBox_toggled(bool checked);

        void on_end_button_clicked();
        void on_sound_putton_clicked();
        void on_Motor_left_clicked();
        void on_Motor_Right_clicked();
        void on_Motor_Both_clicked();
        void on_pushButton_clicked();
        void change_label_psd_l();
        void change_label_psd_r();
        void change_label_psd_m();

    private:
        Ui::admin_ui *ui;
        ros_task qnode;
        bool isConnected;   
    public:
        int sound;
        int end;
        int motor_r;
        int motor_both;
        int motor_l;
        int motor_stop;
    };
}
#endif // ADMIN_UI_H

