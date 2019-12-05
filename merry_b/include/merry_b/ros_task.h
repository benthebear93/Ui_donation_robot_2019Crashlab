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
#include <merry_b/TaskCommand.h> //custom msg header
#endif

namespace merry_bot{

class ros_task : public QThread{
    Q_OBJECT

public:
    ros_task(int argc, char **argv);
    virtual ~ros_task();
    bool init();
    void init_nh();
    void run();

    void send_pushed();
    void send_start();

    merry_b::TaskCommand button_msg_;
    merry_b::TaskCommand start_msg_;

private:
    int init_argc;
    char** init_argv;
    
    ros::Publisher button_pub;
    ros::Publisher start_pub;
    ros::NodeHandle *nh;
    bool isConnected;

	};
}

#endif 
