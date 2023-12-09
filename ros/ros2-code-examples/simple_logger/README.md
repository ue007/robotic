
# Simple Logger


This package allows to see how it is possible to use the ROS2 C++ logger API and its features.

## Usage

You can run the example with:

    ros2 run simple_logger logger_main


The example will create a node, which is automatically associated to a logger with the same name.

The logger is used to log messages with different levels. The default verbosity level is `INFO` for all loggers.

It is possible to change the verbosity level of each logger at runtime.

Moreover, we show how to create a logger that is not connected to any node.


#### rosout Topic

A new feature introduced in January 2019, is the possibility of publishing all the logs to a `rosout` topic.
You can try it by buildin the master branch of ROS2 or any distribution successive to Crystal.

The interface for `Log` messages is defined [here](https://github.com/ros2/rcl_interfaces/blob/master/rcl_interfaces/msg/Log.msg).

In order to see all the published log messages, you can open a new terminal and run

    ros2 topic echo /rosout


This feature is automatically enabled.
You can disable it through a command line argument

    ros2 run simple_logger logger_main __log_disable_rosout:=true




**NOTE:** This feature will only work for loggers associated with a node. According to the ROS documentation:

>Because of the way ROS 2 associates DDS concepts with ROS Nodes, there didn’t seem to be a clean way to setup a general topic on a process that wasn’t associated with an existing Node.
>Since a process can also contain multiple ROS Nodes, we didn’t think it would be good design to just pick one to have everything published to.
