#include "../stlta/functions.h"
#include "../stlta/stlta.hpp"
// implement boost test
#define BOOST_TEST_MODULE TAtest
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_CASE(TA_test)
{
	TA::dvector closes[31] = {10.0,11.0,12.0,13.0,14.0,15.0,14.5,13.0,12.0,10.0,9.0,8.0,7.0,8.0,9.0,11.0,13.0,14.0,16.0,18.0,20.0,18.0,16.0,15.0,14.0,12.0,10.0,14.0,16.0,19.0,20.1};
	TA::dvector SMAs10;
	TA::dvector hSMAs10;
	TA::SMA(10,closes,SMAs10);
	TA::xSMA(10,closes,hSMAs10);
	BOOST_CHECK(SMAs10==hSMAs10);
};