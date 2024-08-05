#include"rclcpp/rclcpp.h"
#include<sstream>
#include<std_msgs/msgs/String>
#include<chrono>
using namespace std::chrono_literals;

class Talker : public Node
 {

public:
    Talker () : Node ("chatter"),count_
    {
        publisher_= this->publisher("publish",10);
        timer_= create_wall_timer(500ms,std::bind(&Talker callback,this);)
    }
    void callback()
    {
        std::stringstream ss;
        
        ss<<"hi"<<count_;
        messages.data=ss.c_str();
        publisher_.publish(message);
    }



private:

std_msgs::msgs::String messages;
rclcpp::Publisher<std_msg/msgs/String>::SharedPtr publisher_;
rclcpp::Timebase::SharedPtr timer_;
_size_t count_;

};