#ifndef SMA_H
#define SMA_H
#include <vector> //std::vector
#include <numeric> //std::accumulate
/* example usage adj_closes is a vector of double closing prices
	SMA<double> sma10(10);
	SMAs10.reserve(adj_closes.size());
	std::transform( adj_closes.begin(), adj_closes.end(), SMAs10.begin(), sma10);
*/
namespace TA{
namespace functors{
template <typename T>
class SMA 
{
	std::vector<T> window_values;
	int window;
	int curSize;
public:
	SMA(int win) //window is the size of SMA lookback
	{
		window=win;
		curSize=0;
		window_values.reserve(window+1);
	};
	T operator()(T& value)
	{
		window_values.push_back(value);
		curSize = curSize +1;
		T val = 0;
		if (curSize == window) 
		{
			curSize=curSize -1;
			//T new_value;
			T sum_value;
			sum_value = std::accumulate(window_values.begin(),window_values.end(),0);
			val= sum_value / window;
			window_values.erase(window_values.begin());
		}
//		std::cout << "return curSize = " <<curSize << "\t window ="<< window << "\tclosing = "<< value << "\tSMA ="<< val <<"\n";
		return val;
	}
};
}//namespace TA::functors
}//namespace TA
#endif
