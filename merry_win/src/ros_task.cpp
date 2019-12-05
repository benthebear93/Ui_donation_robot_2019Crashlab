 
//task_node
#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/Int32.h>
#include "merry_win/ros_task.h"
#include <iostream>
using namespace std;

namespace merry_win{
  bool window_open = 0;

      void sub_callback(const merry_win::TaskCommand::ConstPtr& msg)
    {
      ROS_INFO("show donation start window ");
      window_open = 1; 
      ROS_INFO("window change %d", window_open );
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
        //w1_start_sub =nh->subscribe("/merry_wtwo/button_msg_", 10, sub_callback); 
        cout<<"init nh"<<endl;
        isConnected = true;
      }

    void ros_task::run()
    {
      //ros::Rate loop_rate(100);
      // while(ros::ok())
      // {
      w2_start_sub =nh->subscribe("/merry_wtwo/button_msg_2", 10, sub_callback); 
      ros::spin();
      //loop_rate.sleep();
      //cout<<window_open<<endl;
      //cout<<"here"<< endl;
      // if(window_open == 1)
      // {
      //   cout<<"wo"<<window_open<<endl;
      // }
      //}
      //std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    }

    void ros_task::send_pushed()
    {
      w1_button_pub.publish(button_msg_);
    }
}// namespace 
