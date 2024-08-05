#include<std_msgs/Int32.h>
#include<ros/ros.h>

int main (int argc, char **argv)
{
ros::init (argc,argv,"chatter");
ros::NodeHandle nh;
ros::Publisher pub = nh.advertise<std_msgs::Int32>("publish",1000);

ros::Rate loop_rate(10);
std_msgs::Int32 msg;
int count;
while(ros::ok())
{

msg.data = count;
pub.publish()
loop_rate.sleep();
ros::spin();
count++;

}

return 0;

}