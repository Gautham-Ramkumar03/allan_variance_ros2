# Check if ROS gpg key exists
ROS2_GPG=/usr/share/keyrings/ros-archive-keyring.gpg
if [ ! -f "$ROS2_GPG" ]; then
	echo "Getting the ROS2 gpg key"
	sudo -E apt install curl -y
	sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
	echo "Getting the ROS2 gpg key, done."
fi

rm /etc/apt/sources.list.d/ros2-latest.list
ROS2_APT=/etc/apt/sources.list.d/ros2.list
if [ ! -f "$ROS2_APT" ]; then
	echo "Adding the ROS2 apt source"
	echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
	echo "Adding the ROS2 apt source, done."
fi