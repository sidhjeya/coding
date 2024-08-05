#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class MySubscriber : public rclcpp::Node {
public:
    MySubscriber() : Node("my_subscriber") {
        // Subscribe to the "chatter" topic
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "chatter", 10, std::bind(&MySubscriber::topic_callback, this, std::placeholders::_1));
    }

private:
    void topic_callback(const std_msgs::msg::String::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MySubscriber>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
