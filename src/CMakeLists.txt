rock_library(camera_basler
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(camera_basler_bin Main.cpp
    DEPS camera_basler)

