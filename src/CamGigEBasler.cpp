#include "CamGigEBasler.hpp"

namespace camera
{

    CamGigEBasler::CamGigEBasler(void) :
        camera_handle_(NULL)
    {
        Pylon::PylonInitialize();

        camera_handle_ = new Pylon::CInstantCamera(Pylon::CTlFactory::GetInstance().CreateFirstDevice());
    }

    CamGigEBasler::~CamGigEBasler(void)
    {
        delete camera_handle_;

        Pylon::PylonTerminate();
    }

    void CamGigEBasler::grabOneFrame(const int timeout_ms)
    {
        try
        {
            Pylon::CGrabResultPtr ptrGrabResult;

            if (camera_handle_->GrabOne(timeout_ms, ptrGrabResult))
            {
                std::cout << "\nSize: " << ptrGrabResult->GetWidth() << "x" <<  ptrGrabResult->GetHeight();
            }
        }
        catch (std::runtime_error e)
        {
            std::cerr << "\nCould not grab image: " << e.what();
        }
    }

    int CamGigEBasler::listCameras(std::vector<CamInfo>& cam_infos) const
    {
        return 0;
    }

    bool CamGigEBasler::open(const CamInfo& cam, const AccessMode mode)
    {
        return true;
    }

    bool CamGigEBasler::isOpen(void) const
    {
        return true;
    }

    bool CamGigEBasler::close(void)
    {
        return true;
    }

    bool CamGigEBasler::grab(const GrabMode mode, const int buffer_len)
    {
        return true;
    }

    bool CamGigEBasler::retrieveFrame(base::samples::frame::Frame& frame, const int timeout)
    {
        return true;
    }

    bool CamGigEBasler::isFrameAvailable(void)
    {
        return true;
    }

    int CamGigEBasler::skipFrames(void)
    {
        return 0;
    }

    bool CamGigEBasler::setIpSettings(const CamInfo& cam, const IPSettings& ip_settings) const
    {
        return true;
    }

    bool CamGigEBasler::setAttrib(const int_attrib::CamAttrib attrib, const int value)
    {
        return true;
    }

    bool CamGigEBasler::setAttrib(const double_attrib::CamAttrib attrib, const double value)
    {
        return true;
    }

    bool CamGigEBasler::setAttrib(const str_attrib::CamAttrib attrib, const std::string value)
    {
        return true;
    }

    bool CamGigEBasler::setAttrib(const enum_attrib::CamAttrib attrib)
    {
        return true;
    }

    bool CamGigEBasler::isAttribAvail(const int_attrib::CamAttrib attrib)
    {
        return true;
    }

    bool CamGigEBasler::isAttribAvail(const double_attrib::CamAttrib attrib)
    {
        return true;
    }

    bool CamGigEBasler::isAttribAvail(const str_attrib::CamAttrib attrib)
    {
        return true;
    }

    bool CamGigEBasler::isAttribAvail(const enum_attrib::CamAttrib attrib)
    {
        return true;
    }

    int CamGigEBasler::getAttrib(const int_attrib::CamAttrib attrib)
    {
        return 0;
    }

    double CamGigEBasler::getAttrib(const double_attrib::CamAttrib attrib)
    {
        return 0;
    }

    std::string CamGigEBasler::getAttrib(const str_attrib::CamAttrib attrib)
    {
        return "";
    }

    bool CamGigEBasler::isAttribSet(const enum_attrib::CamAttrib attrib)
    {
        return true;
    }

    bool CamGigEBasler::getFrameSettings(base::samples::frame::frame_size_t& size,
            base::samples::frame::frame_mode_t& mode,
            uint8_t& color_depth)
    {
        return true;
    }

    bool CamGigEBasler::triggerFrame(void)
    {
        return true;
    }

    bool CamGigEBasler::setToDefault(void)
    {
        return true;
    }

}  // namespace camera

