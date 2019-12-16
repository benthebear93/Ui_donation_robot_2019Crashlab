 
//task_node
#include <ros/ros.h>
#include <ros/network.h>
#include <std_msgs/Int32.h>
#include "admin_ui/ros_task.h"
#include <iostream>
using namespace std;

namespace admin_ui{
  int psb_l_val =0;
  int psb_m_val =0;
  int psb_r_val =0;

    void callback_psdl(const std_msgs::Int32::ConstPtr& msg)
    {
      psb_l_val = msg->data;
    }
    void callback_psdm(const std_msgs::Int32::ConstPtr& msg)
    {
      psb_m_val = msg->data;
    }
    void callback_psdr(const std_msgs::Int32::ConstPtr& msg)
    {
      psb_r_val = msg->data;
    }

    ros_task::ros_task(int argc, char** argv) :
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
      ros::init(init_argc,init_argv,"admin_ui");
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
        nh = new ros::NodeHandle("admin_ui");

        pub_ML = nh->advertise<std_msgs::Int32>("/admin_ui/test_ml", 10);
        pub_M_both = nh->advertise<std_msgs::Int32>("/admin_ui/test_mboth", 10);
        pub_MR = nh->advertise<std_msgs::Int32>("/admin_ui/test_mr", 10);
        pub_M_stop = nh->advertise<std_msgs::Int32>("/admin_ui/test_stop", 10);
        pub_Sound = nh->advertise<std_msgs::Int32>("/admin_ui/test_sound", 10);
        end_w1_open = nh->advertise<std_msgs::Int32>("/admin_ui/test_end", 10);

        psd_l =nh->subscribe("/psd_l", 10, callback_psdl);  
        psd_m =nh->subscribe("/psd_m", 10, callback_psdm);  
        psd_r =nh->subscribe("/psd_r", 10, callback_psdr);  
        
        //cout<<"init nh"<<endl;
        isConnected = true;
      }

    void ros_task::run()
    {
      ros::Rate loop_rate(10);
      while(ros::ok())
      {
        Q_EMIT sub_psd_l();
        Q_EMIT sub_psd_m();
        Q_EMIT sub_psd_r();
        ros::spinOnce();
        loop_rate.sleep();
      }
      std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    }

    void ros_task::send_Test_ML()
    {
      pub_ML.publish(Test_ML);
    }
    void ros_task::send_Test_M_both()
    {
      pub_M_both.publish(Test_M_both);
    }
    void ros_task::send_Test_MR()
    {
      pub_MR.publish(Test_MR);
    }
    void ros_task::send_Test_M_stop()
    {
      pub_M_stop.publish(Test_M_stop);
    }
    void ros_task::send_Test_Sound()
    {
      pub_Sound.publish(Test_Sound);
    }
    void ros_task::send_Test_end()
    {
      end_w1_open.publish(Test_End);
    }
}// namespace 
