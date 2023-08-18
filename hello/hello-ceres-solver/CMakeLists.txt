cmake_minimum_required(VERSION 3.1)

project(helloceres)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "-O3")
find_package(Ceres REQUIRED)

# 检查操作系统类型
# if(WIN32)
# # Windows操作系统的设置
# add_definitions(-DWINDOWS)

# # 添加ceres头文件
# elseif(APPLE)
# # macOS操作系统的设置
# add_definitions(-DMACOS)

# # 添加ceres头文件
# include_directories("/usr/local/include/ceres")
# endif()
add_executable(helloceres main.cpp)

target_link_libraries(helloceres PRIVATE Ceres::ceres)
