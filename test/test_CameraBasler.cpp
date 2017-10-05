#include <boost/test/unit_test.hpp>
#include <camera_basler/CamGigEBasler.hpp>

namespace camera
{

    BOOST_AUTO_TEST_CASE(grab_one_image)
    {
        CamGigEBasler camGigEBasler;

        camGigEBasler.grabOneFrame();
    }

}  // namespace camera

