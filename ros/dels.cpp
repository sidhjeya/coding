#include<std_msgs/Int32>
#include<ros/ros.h>
void callback(std_msgs::Int32::ConstPtr& msg)
{
    ROS_INFO(msg.data);
}
int main(int argc, char **argc)
{
ros::init(argc,argv,"sub");
ros::NodeHandle nh;
ros::Subsciber sub = nh.Subscribe("chatter",1000,callback);
ros::spin();
return 0;

}