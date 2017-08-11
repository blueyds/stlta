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
	{
	TA::dvector SMAs10;
	hTA::dvector hSMAs10;
	TA::SMA(10,closes,SMAs10);
	hTA::SMA(10,closes,hSMAs10);
	BOOST_CHECK(SMAs10==hSMAs10);
	}
	{
	TA::dvector EMAs10;
	hTA::dvector hEMAs10;
	TA::EMA(10,closes,EMAs10);
	hTA::EMA(10,closes,hEMAs10);
	BOOST_CHECK(EMAs10==hEMAs10);
	}
	{
	TA::dvector MINs10;
	hTA::dvector hMINs10;
	TA::MIN(10,closes,MINs10);
	hTA::MIN(10,closes,hMINs10);
	BOOST_CHECK(MINs10==hMINs10);
	}
	{
	TA::dvector MAXs10;
	hTA::dvector hMAXs10;
	TA::MAX(10,closes,MAXs10);
	hTA::MAX(10,closes,hMAXs10);
	BOOST_CHECK(MAXs10==hMAXs10);
	}
	{
	TA::dvector ROCs10;
	hTA::dvector hROCs10;
	TA::ROC(10,closes,ROCs10);
	hTA::ROC(10,closes,hROCs10);
	BOOST_CHECK(ROCs10==hROCs10);
	}
	{
	TA::dvector MACDs;
	TA::dvector signals;
	TA::dvector hists;
	hTA::dvector hMACDs;
	hTA::dvector hsignals;
	hTA::dvector hhists;
	TA::MACD(12,26,9,closes,MACDs,signals,hists);
	hTA::MACD(12,26,9,closes,hMACDs,hsignals,hhists);
	BOOST_CHECK(MACDs==hMACDs);
	BOOST_CHECK(signals==hsignals);
	BOOST_CHECK(hists==hhists);
	}
};