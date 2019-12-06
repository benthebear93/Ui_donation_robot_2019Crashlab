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
#include <merry_win/TaskCommand.h> //custom msg header
#endif

namespace merry_win{
extern bool window2_open;

class ros_task : public QThread{
    Q_OBJECT

public:
    ros_task(int argc, char **argv);
    virtual ~ros_task();
    bool init();
    void init_nh();
    void run();

    void send_pushed();

    merry_win::TaskCommand button_msg_;

Q_SIGNALS:
    void window_state1();

private:
    int init_argc;
    char** init_argv;

    int m_value;
    ros::Publisher w1_button_pub;
    ros::Subscriber w2_start_sub;

    ros::NodeHandle *nh;
    bool isConnected;

	};
}

#endif 
