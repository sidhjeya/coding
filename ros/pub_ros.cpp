#include<ros/ros.h>
#include<std_msgs/String.h>
#include<sstream>

int main(int argc,char **argv)
{
ros::init(argc,argv,"talker");
ros::NodeHandle nh;
ros::Publisher pub = nh.advertise<std_msgs::String>("chatter",1000);
ros::Rate loop_rate(10);
count = 0
 while(ros::ok())
 {
    std_msgs::String msg;
    std::sstream ss;
    ss << "hi"<<count;
    msg.data= ss.str();
    ROS_INFO("HI HI %s",msg.data.c_str());
    pub.publish(msg);
    
    ros::spinOnce();
    loop_rate.sleep();
    ++count;

 }
return 0;
}