#include<ros/ros.h>
#include<std_msgs/String.h>

void callback(std_msgs::String::ConstPtr& msg):
{
    ROS_INFO("I CAN HEAR %S",msg->data.c_str());
}
int main(int argc,char **argv)
{
ros::init(argv,argc,"subb"):
ros::NodeHandle nh;
ros::Subscriber sub= nh.Subscribe("listener",1000,callback);
ros::spin();
return 0;
}