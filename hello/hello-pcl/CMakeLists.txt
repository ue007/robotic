# 指定cmake最小版本
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# 给自己的程序工程命名
project(pcd_write)

# 找PCL库，指定最小版本 /usr/local/Cellar/pcl/1.13.1_2: 1,255 files, 159.6MB
find_package(PCL 1.9 REQUIRED)

# 引入相关PCL库
include_directories(${PCL_INCLUDE_DIRS})

# 链接PCL库
link_directories(${PCL_LIBRARY_DIRS})

# 加入PCL使用的宏定义
add_definitions(${PCL_DEFINITIONS})

# 从单个文件pcd_write.cpp编译生成名为pcd_write的可执行文件
add_executable(pcd_write pcd_write.cpp)

# 链接PCL库
target_link_libraries(pcd_write ${PCL_LIBRARIES})
