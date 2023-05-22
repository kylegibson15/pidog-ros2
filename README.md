# pidog-ros2

## Links
[:green_book: rclpy docs](https://docs.ros2.org/latest/api/rclpy/index.html)
[:blue_book: rclcpp docs](https://docs.ros2.org/latest/api/rclcpp/index.html)

cd <path to fusion2urdf>
cp -r ./URDF_Exporter "$HOME/Library/Application Support/Autodesk/Autodesk Fusion 360/API/Scripts/"

Gazebo (and most likely other sims) supports SDF, which supports closed kinematic loops.

in 'pure' URDF model the joints as a tree without connection the lower part of the kinematic loop. (omit the long tibia link unless wanting to fully reflect the actual hardware.)

in `<gazebo>` tags add the additional joints (omitted in the 'pure' URDF)(the long tibia link) this should close the loop. When loading the URDF into Gazebo that should allow those linkages to be preserved in the URDF->SDF conversion, the linkage should simulate so the should move as expected.

if adding the linkage to the 'pure' URDF and want things to visualize correctly in RViz
- for the simulated robot you can add a `JointStateBroadcaster` plugin to your simulator that publishes the joint state of the upper long tibia link. (shoulder - long tibia link connection).
- in hardware, will need to either have an encoder or to write a node that solves the kinematics and publishes the joint state.

## Running the model in RViz
> [RViz User Guide](http://wiki.ros.org/rviz/UserGuide) 
### From pidog-ros2 directory
1. build the model pkg
```shell
$ colcon build --symlink-install --packages-select model
```
2. source the install
```shell
$ source install/setup.bash
```
3. launch the model in rviz
```shell
$ ros2 launch model demo.launch.py
```

### From a separate terminal run rviz
1. launch rviz
```shell
$ rviz2 -d ~/pidog-ros2/install/model/share/model/quadruped.rviz
```


