#include "../stlta/functions.h"
#include "../stlta/stlta.hpp"
// implement boost test
#define BOOST_TEST_MODULE TAtest
#include <boost/test/included/unit_test.hpp>


BOOST_AUTO_TEST_CASE(TA_test)
{
	TA::dvector closes; 
	
	closes.push_back(10.0);
	closes.push_back(11.0);
	closes.push_back(12.0);
	closes.push_back(13.0);
	closes.push_back(14.0);
	closes.push_back(15.0);
	closes.push_back(14.5);
	closes.push_back(13.0);
	closes.push_back(12.0);
	closes.push_back(10.0);
	closes.push_back(9.0);
	closes.push_back(8.0);
	closes.push_back(7.0);
	closes.push_back(8.0);
	closes.push_back(9.0);
	closes.push_back(11.0);
	closes.push_back(13.0);
	closes.push_back(14.0);
	closes.push_back(16.0);
	closes.push_back(18.0);
	closes.push_back(20.0);
	closes.push_back(18.0);
	closes.push_back(16.0);
	closes.push_back(15.0);
	closes.push_back(14.0);
	closes.push_back(12.0);
	closes.push_back(10.0);
	closes.push_back(14.0);
	closes.push_back(16.0);
	closes.push_back(19.0);
	closes.push_back(20.0);
	closes.push_back(20.5);
	closes.push_back(18.0);
	closes.push_back(19.0);
	
	TA::dvector SMAs10;
	TA::dvector hSMAs10;
	TA::SMA(10,closes,SMAs10);
	TA::xSMA(10,closes,hSMAs10);
	BOOST_CHECK(SMAs10==hSMAs10);
};