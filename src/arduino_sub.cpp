#include <ros/ros.h>
#include "std_msgs/Float64.h"



void arduino_sub(const std_msgs::Float64 &msg)
{
  
  ROS_INFO("Distance : %f ", msg.data);
  

}

int main(int argc, char **argv)
{

	ros::init(argc, argv, "arduino_sub");

 
  	ros::NodeHandle nh;

  
  	ros::Subscriber sub = nh.subscribe("/chatter", 10, arduino_sub);

 
  	ros::spin();

  	return 0;
}