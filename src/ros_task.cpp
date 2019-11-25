 
//task_node
#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/Int32.h>
#include "merry_bot/ros_task.h"
#include <iostream>
using namespace std;

namespace merry_bot{

    ros_task::ros_task(int argc, char** argv ) :
      init_argc(argc),
      init_argv(argv),
      isConnected(false)

    {
      //start_msg_.pushcheck.resize(1);
    }

    ros_task::~ros_task() {
      if(ros::isStarted()) {
        ros::shutdown(); // explicitly needed since we use ros::start();
        ros::waitForShutdown();
      }
      delete nh;  // deallocate ndoe handle
      wait();
    }

    bool ros_task::init() {
      std::cout <<"init is here" <<std::endl;
      ros::init(init_argc,init_argv,"ui_merry");
      if ( ! ros::master::check() ) {
        return false;
      }
      init_nh();
      ros::start(); // explicitly needed since our nodehandle is going out of scope.
      start();
      return true;
    }

    void ros_task::init_nh()
      {
        nh = new ros::NodeHandle("ui_merry");

        start_pub = nh->advertise<merry_bot::TaskCommand>("/ui_merry/start_msg_", 10);

        isConnected = true;

      }

    void ros_task::run()
    {
      ros::Rate loop_rate(100);
      while ( ros::ok() ) {

        ros::spinOnce();
        loop_rate.sleep();
      }
    std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    }
    void ros_task::send_pushed()
    {
      start_pub.publish(start_msg_);
    }
}// namespace ui_merry
