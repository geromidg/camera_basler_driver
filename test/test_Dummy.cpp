#include <boost/test/unit_test.hpp>
#include <camera_basler/Dummy.hpp>

using namespace camera_basler;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    camera_basler::DummyClass dummy;
    dummy.welcome();
}
