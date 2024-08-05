#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main( int argc ,char **argv)
{

ros::init(argc,argv,"talker");
ros::nodehandle n;
ros::Publisher pub= n.advertise<std_msgs::String>("chatter",1000);
ros::Rate loop_rate(10);

while (ros::ok())
{

std_msgs::String str;
str="hi";
pub.Publish(str)
ros::spinOnce();
 loop_rate.sleep();



}



}