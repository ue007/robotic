#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
int main(int argc, char **argv)
{
    // 初始化定义一个点云对象，PointXYZ
    pcl::PointCloud<pcl::PointXYZ> cloud;
    // 设置pcd文件字段，将想要填的内容填进去
    // Fill in the cloud data
    cloud.width = 100;
    cloud.height = 100;
    cloud.is_dense = false;
    cloud.points.resize(cloud.width * cloud.height);

    for (size_t i = 0; i < cloud.points.size(); ++i)
    {
        cloud.points[i].x = 1024 * rand() / (RAND_MAX + 1.0f);
        cloud.points[i].y = 1024 * rand() / (RAND_MAX + 1.0f);
        cloud.points[i].z = 1024 * rand() / (RAND_MAX + 1.0f);
    }
    // 写入文件
    pcl::io::savePCDFileASCII("test_pcd.pcd", cloud);
    std::cerr << "Saved " << cloud.points.size() << " data points to test_pcd.pcd." << std::endl;

    for (size_t i = 0; i < cloud.points.size(); ++i)
        std::cerr << "    " << cloud.points[i].x << " " << cloud.points[i].y << " " << cloud.points[i].z << std::endl;

    return 0;
}
