//task_node.h

#ifndef ROS_TASK
#define ROS_TASK
#ifndef Q_MOC_RUN
// ROS_TASK

#include <ros/ros.h>
#include <ros/node_handle.h>

#include <QThread>
#include <QStringListModel>
#include <string>
#include <vector>

#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include <std_msgs/Bool.h>
#include "admin_ui/TaskCommand.h"//custom msg header
#endif

namespace admin_ui{
    extern int psb_l_val;
    extern int psb_m_val;
    extern int psb_r_val;

class ros_task : public QThread{
    Q_OBJECT

public:
    ros_task(int argc, char **argv);
    virtual ~ros_task();
    bool init();
    void init_nh();
    void run();

    void send_Test_ML();
    void send_Test_M_both();
    void send_Test_MR();
    void send_Test_M_stop();
    void send_Test_Sound();
    void send_Test_end();

    std_msgs::Int32 Test_ML;
    std_msgs::Int32 Test_M_both;
    std_msgs::Int32 Test_MR;
    std_msgs::Int32 Test_M_stop;
    std_msgs::Int32 Test_Sound;
    std_msgs::Int32 Test_End;


Q_SIGNALS:
    void sub_psd_l();
    void sub_psd_m();
    void sub_psd_r();

private:
    int init_argc;
    char** init_argv;

    ros::Publisher pub_ML;
    ros::Publisher pub_M_both;
    ros::Publisher pub_MR;
    ros::Publisher pub_M_stop;
    ros::Publisher pub_Sound;
    ros::Publisher end_w1_open;

    ros::Subscriber psd_l;
    ros::Subscriber psd_m;
    ros::Subscriber psd_r;

    ros::NodeHandle *nh;
    bool isConnected;

	};
}

#endif 
