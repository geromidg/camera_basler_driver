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

        void grab(void);

    private:
        Pylon::CInstantCamera* camera_handle_;
    };

}  // namespace camera

#endif  // _CAMGIGEBASLER_H

