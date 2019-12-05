 
//task_node
#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/Int32.h>
#include "merry_wtwo/ros_task.h"
#include <iostream>
using namespace std;

namespace merry_wtwo{
    void sub_callback(const merry_wtwo::TaskCommand::ConstPtr& msg)
    {
      ROS_INFO("show w2");
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
      cout <<"init is here" <<endl;
      ros::init(init_argc,init_argv,"merry_wtwo");
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
        nh = new ros::NodeHandle("merry_wtwo");

        w2_button_pub = nh->advertise<merry_wtwo::TaskCommand>("/merry_wtwo/button_msg_2", 10);
        //w1_start_sub =nh->subscribe("/merry_win/button_msg_", 10, sub_callback); 
        cout<<"init nh"<<endl;
        isConnected = true; //use this to check subscirbe
      }

    void ros_task::run()
    {
      w1_start_sub =nh->subscribe("/merry_win/button_msg_1", 10, sub_callback); 
      //ros::Rate loop_rate(100);
      //while ( ros::ok() ) 
      //{
        //std::cout << "here"<< std::endl;
        ros::spin();
        //loop_rate.sleep();
      //}
    std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    }

    void ros_task::send_pushed()
    {
      w2_button_pub.publish(button_msg_);
    }
}// namespace 