cmake_minimum_required(VERSION 3.0)
project(useSophus)

# 为使用 sophus，需要使用find_package命令找到它
find_package(Sophus REQUIRED)

# 检查操作系统类型
if(WIN32)
    # Windows操作系统的设置
    add_definitions(-DWINDOWS)

    # 添加Eigen头文件
    include_directories("/usr/include/eigen3")
elseif(APPLE)
    # macOS操作系统的设置
    add_definitions(-DMACOS)

    # 添加Eigen头文件
    include_directories("/usr/local/include/eigen3")
endif()

add_executable(useSophus useSophus.cpp)
target_link_libraries(useSophus Sophus::Sophus)

# add_subdirectory(example)
