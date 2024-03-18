/**
 * @file   allan_variance.cpp
 * @brief  Tool to compute Allan Variance and Deviation from rosbag.
 * @author Russell Buchanan
 */

// std, eigen and boost
#include <boost/filesystem.hpp>
#include <ctime>
#include <fstream>
#include <set>

// ROS
#include "rclcpp/rclcpp.hpp"

// allan_variance_ros
#include "allan_variance_ros2/AllanVarianceComputor.hpp"

class AllanVarianceRos2 : public rclcpp::Node 
{
  public:
    AllanVarianceRos2(std::string bag_path, std::string config_file)
    : Node("allan_variance_ros2")
    {
      std::clock_t start = std::clock();
      
      allan_variance_ros::AllanVarianceComputor computor(this, config_file, "data/output");
      RCLCPP_INFO_STREAM(rclcpp::get_logger("rclcpp"), "Computor constructed");
      RCLCPP_INFO_STREAM(rclcpp::get_logger("rclcpp"), "Processing rosbag " << bag_path);
      computor.run(bag_path);
      
      double durationTime = (std::clock() - start) / (double)CLOCKS_PER_SEC;
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Total computation time: %f s", durationTime);
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Data written to allan_variance.csv");
    }
  private:
    std::string bag_path_;
    std::string config_file_;
};

int main(int argc, char** argv) {

  std::string bag_path;
  std::string config_file;

  if (argc >= 2) {
    bag_path = argv[1];
    config_file = argv[2];
    RCLCPP_INFO_STREAM(rclcpp::get_logger("rclcpp"), "Bag Path = " << bag_path);
    RCLCPP_INFO_STREAM(rclcpp::get_logger("rclcpp"), "Config File = " << config_file);
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Rosbag folder and/or config file not provided!");
    return 0;
  }

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AllanVarianceRos2>(bag_path, config_file));
  rclcpp::shutdown();
  return 0;
}
// int main(int argc, char** argv) {
//   ros::init(argc, argv, "allan_variance_ros");


//   namespace fs = boost::filesystem;
//   fs::path path = fs::absolute(fs::path(bags_folder));

//   std::set<std::string> bag_filenames_sorted;
//   for (const auto& entry : fs::directory_iterator(path)) {
//     if (entry.path().extension() == ".bag") {
//       bag_filenames_sorted.insert(entry.path().string());
//     }
//   }
//   RCLCPP_INFO_STREAM(rclcpp::get_logger("rclcpp"), "Bag filenames count: " << bag_filenames_sorted.size());

//   std::clock_t start = std::clock();

//   allan_variance_ros::AllanVarianceComputor computor(n, config_file, bags_folder);
//   RCLCPP_INFO_STREAM(rclcpp::get_logger("rclcpp"), "Batch computor constructed");
//   for (const auto& it : bag_filenames_sorted) {
//     RCLCPP_INFO_STREAM(rclcpp::get_logger("rclcpp"), "Processing rosbag " << it);
//     computor.run(it);
//     if (!n.ok()) {
//       break;
//     }
//     // For now just do one rosbag
//     break;
//   }

//   double durationTime = (std::clock() - start) / (double)CLOCKS_PER_SEC;
//   RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Total computation time: %f s", durationTime);
//   RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Data written to allan_variance.csv");
//   return 0;
// }
