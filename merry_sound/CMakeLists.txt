cmake_minimum_required(VERSION 2.8.3)
project(merry_sound)

find_package(catkin REQUIRED COMPONENTS 
	message_generation 
	rospy 
	roscpp
	std_msgs
	geometry_msgs
)

add_message_files(
  FILES
  TaskCommand.msg
)

## Generate services in the 'srv' folder
# add_service_files(
#  FILES  # e.g. Floats.srv HeaderString.srv
#)

## Generate added messages and services with any dependencies
generate_messages(
  DEPENDENCIES std_msgs geometry_msgs
)

catkin_package(
  CATKIN_DEPENDS message_runtime std_msgs geometry_msgs
)
