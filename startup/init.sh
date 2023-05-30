#!/bin/bash

echo "[Initializing ROS 2 Environment] 1. Setting LANG ENV variable - Starting"
sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8
echo "[Initializing ROS 2 Environment] 1. Setting LANG ENV variable - Complete\nLANG=$LANG"

echo "[Initializing ROS 2 Environment] 2. Add ROS 2 apt repository - Starting"
echo "[Initializing ROS 2 Environment] 2.1 Enabling the Ubuntu Universe repository - Starting"
sudo apt install software-properties-common
sudo add-apt-repository universe
echo "[Initializing ROS 2 Environment] 2.1 Enabling the Ubuntu Universe repository - Complete"

echo "[Initializing ROS 2 Environment] 2.2 Adding ROS 2 GPG Key with apt - Starting" 
sudo apt update && sudo apt install curl -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "[Initializing ROS 2 Environment] 2.2 Adding ROS 2 GPG Key with apt - Complete"

echo "[Initializing ROS 2 Environment] 2.3 Adding repository to source list - Starting"
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
echo "[Initializing ROS 2 Environment] 2.3 Adding repository to source list - Complete"

echo "[Initializing ROS 2 Environment] 2. Add ROS 2 apt repository - Complete"

echo "[Initializing ROS 2 Environment] 3. Installing development tools - Starting"
sudo apt update && sudo apt install ros-dev-tools
echo "[Initializing ROS 2 Environment] 3. Installing development tools - Complete"

echo "[Initializing ROS 2 Environment] 4. Installing ROS 2 - Starting"
sudo apt update
sudo apt upgrade
sudo apt install ros-iron-desktop
sudo apt install ros-iron-ros-base
echo "[Initializing ROS 2 Environment] 4. Installing ROS 2 - Complete"

echo "[Initializing ROS 2 Environment] 5. Sourcing the Shell - Starting"
# Replace ".bash" with your shell if you're not using bash
# Possible values are: setup.bash, setup.sh, setup.zsh
source /opt/ros/iron/setup.bash
echo "source /opt/ros/iron/setup.bash" >> ~/.bashrc
echo "[Initializing ROS 2 Environment] 5. Sourcing the Shell - Complete"

