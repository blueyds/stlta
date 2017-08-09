#include "../stlta/functions.h"
// implement boost test
#define BOOST_TEST_MODULE stlta_test
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_MODULE(stlta_test)
{
	using std;
	using TA;
	dvector closes = {10,11,12,13,14,15,14.5,13,12,10,9,8,7,8,9,11,13,14,16,18,20,18,16,15,14,12,10,14,16,19,20.1};
	dvector SMAs10;
	dvector hSMAs10;
	SMA(10,closes,SMAs10);
	hSMA(10,closes,hSMAs10);
	BOOST_CHECK(SMAs10==hSMAs10);
};