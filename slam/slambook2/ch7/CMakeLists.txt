cmake_minimum_required(VERSION 2.8)
project(vo1)

set(CMAKE_BUILD_TYPE "Release")
add_definitions("-DENABLE_SSE")
set(CMAKE_CXX_FLAGS "-std=c++11 -O2 ${SSE_FLAGS} -msse4")
set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

find_package(OpenCV REQUIRED)
find_package(Sophus REQUIRED)
find_package(G2O REQUIRED)

IF(G2O_FOUND)
        include_directories(${G2O_INCLUDE_DIR})
        message("G2O lib is found:" ${G2O_INCLUDE_DIR})
ENDIF(G2O_FOUND)

include_directories(
        ${OpenCV_INCLUDE_DIRS}
        ${G2O_INCLUDE_DIRS}
        ${Sophus_INCLUDE_DIRS}
        "/usr/local/include/eigen3/"
)

add_executable(orb_cv orb_cv.cpp)
target_link_libraries(orb_cv ${OpenCV_LIBS})

add_executable(orb_self orb_self.cpp)
target_link_libraries(orb_self ${OpenCV_LIBS})

# add_executable( pose_estimation_2d2d pose_estimation_2d2d.cpp extra.cpp ) # use this if in OpenCV2
add_executable(pose_estimation_2d2d pose_estimation_2d2d.cpp)
target_link_libraries(pose_estimation_2d2d ${OpenCV_LIBS})

# # # add_executable( triangulation triangulation.cpp extra.cpp) # use this if in opencv2
# add_executable(triangulation triangulation.cpp)
# target_link_libraries(triangulation ${OpenCV_LIBS})

# add_executable(pose_estimation_3d2d pose_estimation_3d2d.cpp)
# target_link_libraries(pose_estimation_3d2d
# g2o_core g2o_stuff
# ${OpenCV_LIBS})

# add_executable(pose_estimation_3d3d pose_estimation_3d3d.cpp)
# target_link_libraries(pose_estimation_3d3d
# g2o_core g2o_stuff
# ${OpenCV_LIBS})
