#ifndef _CAMGIGEBASLER_H
#define _CAMGIGEBASLER_H

#include "camera_interface/CamInterface.h"
#include <pylon/PylonIncludes.h>

namespace camera
{

    class CamGigEBasler : public CamInterface
    {
    public:
        CamGigEBasler(void);
        virtual ~CamGigEBasler(void);

        // Grabs one frame and prints its size
        // Used for testing purposes
        void grabOneFrame(const int timeout_ms = 1000);

        void setCameraSize(const int width, const int height);

        int listCameras(std::vector<CamInfo>& cam_infos) const;
        bool open(void);
        bool open(const CamInfo& cam, const AccessMode mode = Master);
        bool isOpen(void) const;
        bool close(void);
        bool grab(const GrabMode mode = SingleFrame, const int buffer_len = 1);
        bool retrieveFrame(base::samples::frame::Frame& frame, const int timeout = 1000);
        bool isFrameAvailable(void);
        int skipFrames(void);
        bool setIpSettings(const CamInfo& cam, const IPSettings& ip_settings) const;
        bool setAttrib(const int_attrib::CamAttrib attrib, const int value);
        bool setAttrib(const double_attrib::CamAttrib attrib, const double value);
        bool setAttrib(const str_attrib::CamAttrib attrib, const std::string value);
        bool setAttrib(const enum_attrib::CamAttrib attrib);
        bool isAttribAvail(const int_attrib::CamAttrib attrib);
        bool isAttribAvail(const double_attrib::CamAttrib attrib);
        bool isAttribAvail(const str_attrib::CamAttrib attrib);
        bool isAttribAvail(const enum_attrib::CamAttrib attrib);
        int getAttrib(const int_attrib::CamAttrib attrib);
        double getAttrib(const double_attrib::CamAttrib attrib);
        std::string getAttrib(const str_attrib::CamAttrib attrib);
        bool isAttribSet(const enum_attrib::CamAttrib attrib);
        bool getFrameSettings(base::samples::frame::frame_size_t& size,
            base::samples::frame::frame_mode_t& mode,
            uint8_t& color_depth);
        bool triggerFrame(void);
        bool setToDefault(void);

    private:
        std::unique_ptr<Pylon::CInstantCamera> camera_handle_;
    };

}  // namespace camera

#endif  // _CAMGIGEBASLER_H

