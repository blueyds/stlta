#ifndef EMA_H
#define EMA_H
/*
    STL_TA
    Copyright (C) {2016}  {Craig Nunemaker}

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <vector> //std::vector
#include <iostream> //std::cout
#include <numeric> //std::accumulate
namespace TA{
namespace functors{
template <class T>
class EMA
{
	std::vector<T> window_values;
	int window;
	T K;
	int counter;
	T prior_ema;
public:
	EMA(int win) //window is the size of EMA lookback
	{
		window=win;
		counter=0;
		prior_ema = 0;
		K = 2 / (window+1);
		window_values.reserve(window+1);
	};
	T operator()(T& value)
	{
		window_values.push_back(value);
		counter = counter +1;
		T val = 0;
		if (counter==window)  
		{	
			if (prior_ema==0)
			{
				T sum_value;
				val = std::accumulate( window_values.begin(), window_values.end(), 0) / window;
				prior_ema=val;
				window_values.erase(window_values.begin());
			}
			else
			{
				T closingK = value * K;
				T priorK = prior_ema * (1-K);
				val = closingK + prior_ema;
				prior_ema = val;
			}
		}
		return val;
	}
};
}//namespace TA::functors
}//namespace TA
#endif