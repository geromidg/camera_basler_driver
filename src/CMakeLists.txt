rock_library(camera_basler
    SOURCES CamGigEBasler.cpp
    HEADERS CamGigEBasler.hpp
    LIBS pylonbase
         pylonutility
         GCBase_gcc_v3_0_Basler_pylon_v5_0
         GenApi_gcc_v3_0_Basler_pylon_v5_0
    DEPS_PKGCONFIG camera_interface)

