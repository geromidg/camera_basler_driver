# CMakeLists.txt has to be located in the project folder and cmake has to be
# executed from 'project/build' with 'cmake ../'.
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{PYLON_ROOT}/include)
link_directories($ENV{PYLON_ROOT}/lib64)

find_package(Rock)
rock_init(camera_basler 0.1)
rock_standard_layout()
