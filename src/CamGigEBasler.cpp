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
        Pylon::PylonTerminate();
    }

    void CamGigEBasler::grab(void)
    {
        try
        {
            Pylon::CGrabResultPtr ptrGrabResult;

            if (camera_handle_->GrabOne(1000, ptrGrabResult))
            {
                printf("\nSize: %d x %d\n", ptrGrabResult->GetWidth(), ptrGrabResult->GetHeight());
            }
        }
        catch (const GenericException &e)
        {
            printf("\nCould not grab image:\n%s\n", e.GetDescription());
        }
    }

}  // namespace camera

