#include "rclcpp/rclcpp.hpp"
#include "pd_position_controller_simple.h"

int main(int argc, char** argv)
{
    // ros::init(argc, argv, "pid_position_controller_simple_node");
    // ros::NodeHandle nh;
    rclcpp::init(argc, argv);
    rclcpp::Node nh = rclcpp::Node("pid_position_controller_simple_node");
    rclcpp::Node nh_private = nh.create_sub_node("~");
    // ros::NodeHandle nh_private("~");

    PIDPositionController controller(nh, nh_private);

    // int num_threads = 1;
    // ros::MultiThreadedSpinner multi_thread(num_threads);
    // multi_thread.spin();

    // ros::AsyncSpinner async_spinner(num_threads);
    // async_spinner.start();

    // single threaded spinner
    ros::spin();
    return 0;
}