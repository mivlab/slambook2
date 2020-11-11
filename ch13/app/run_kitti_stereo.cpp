//
// Created by gaoxiang on 19-5-4.
//

//#include <gflags/gflags.h>
#include "myslam/visual_odometry.h"

//DEFINE_string(config_file, "./config/default.yaml", "config file path");

int main(int argc, char **argv) {
    //google::ParseCommandLineFlags(&argc, &argv, true);

    myslam::VisualOdometry::Ptr vo(
        new myslam::VisualOdometry(std::string("../../../../config/default.yaml")));
    assert(vo->Init() == true);
    vo->Run();

    return 0;
}
