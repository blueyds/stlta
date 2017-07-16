#include <iostream>
#include <vector>
#include "../stlta/functions.h"

void printVector(TA::dvector v)
{
	std::copy(v.begin(), v.end(), std::ostream_iterator<double>(std::cout, "\t"));
}


int main (int argc, char *argv[])
{
	using std;
	using TA;
	cout << "\n\n*****************************\n\n";
	cout << "Now testing stl_ta package\n\n";
	
	dvector closes = {10,11,12,13,14,15,14.5,13,12,10,9,8,7,8,9,11,13,14,16,18,20,18,16,15,14,12,10,14,16,19,20.1};
	cout << "using the following vector to test\n";
	printVector(closes);
	cout << "\n\nTesting SMA function : \t";
	dvector SMAs10;
	SMA(10,closes,SMAs10);
	printVector(SMAs10);
	cout << "\n\nFinished testing STL_TA\n";
}