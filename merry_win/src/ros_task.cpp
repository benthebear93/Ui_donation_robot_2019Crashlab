 
//task_node
#include <ros/ros.h>
#include <ros/network.h>
#include <std_msgs/Int32.h>
#include "merry_win/ros_task.h"
#include <iostream>
using namespace std;

namespace merry_win{
  bool window2_open = 0;
  bool admin_close = 0;
    void sub_callback(const merry_win::TaskCommand::ConstPtr& msg)
    {
      ROS_INFO("show w1");
      window2_open = 1; 
    }
    void sub_admin_callback(const std_msgs::Int32::ConstPtr& msg)
    {
      ROS_INFO("admin_close");
      admin_close = 1; 
    }
    ros_task::ros_task(int argc, char** argv ) :
      init_argc(argc),
      init_argv(argv),
      isConnected(false)
    {
      //need space
    }
    ros_task::~ros_task() 
    {
      if(ros::isStarted()) 
      {
        ros::shutdown(); // explicitly needed since we use ros::start();
        ros::waitForShutdown();
      }
      delete nh;  // deallocate ndoe handle
      wait();
    }

    bool ros_task::init() 
    {
      //cout <<"init is here" <<endl;
      ros::init(init_argc,init_argv,"merry_win");
      if ( ! ros::master::check() ) 
      {
        return false;
      }
      init_nh();
      ros::start(); // explicitly needed since our nodehandle is going out of scope.
      start();
      return true;
    }

    void ros_task::init_nh()
      {
        nh = new ros::NodeHandle("merry_win");

        w1_button_pub = nh->advertise<merry_win::TaskCommand>("/merry_win/button_msg_1", 10);
        w2_start_sub =nh->subscribe("/merry_wtwo/button_msg_2", 10, sub_callback);  
        admin_end_sub =nh->subscribe("/admin_ui/test_end", 10, sub_admin_callback);
        //cout<<"init nh"<<endl;
        isConnected = true;
      }

    void ros_task::run()
    {
      ros::Rate loop_rate(10);
      while(ros::ok())
      {
        if(window2_open == 1)
        {
          Q_EMIT window_state1();
          cout<<"wo"<<window2_open<<endl;
          window2_open = 0;
        }
        if(admin_close == 1)
        {
          Q_EMIT admin_ui();
          cout<<"admin to w1"<<endl;
          admin_close = 0;
        }

        ros::spinOnce();
        loop_rate.sleep();
      }
      std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    }

    void ros_task::send_pushed()
    {
      w1_button_pub.publish(button_msg_);
    }
}// namespace 
