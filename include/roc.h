#ifndef ROC_H
#define ROC_H

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
#include <numeric> //std::accumulate


namespace TA{
namespace functors{
template <typename T>
class ROC 
{
	std::vector<T> window_values;
	int window;
	int curSize;
public:
	ROC(int win) //window is the size of SMA lookback
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
			val= value / *(window_values.begin());
			window_values.erase(window_values.begin());
		}
//		std::cout << "return curSize = " <<curSize << "\t window ="<< window << "\tclosing = "<< value << "\tSMA ="<< val <<"\n";
		return val;
	}
};
}//namespace TA::functors
}//namespace TA
#endif
