#ifndef SUBTRACT_H
#define SUBTRACT_H

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

/*
if you use this with transform it will subtract each
element of b from each element of a
*/

namespace TA{
namespace functors{
template <class T>
class SUBTRACT
{
public:
	SUBTRACT () {;};
	T operator()( T a, T b ) const    
    {    
        return a - b;    
    }  
};
}//namespace TA::functors
}//namespace TA
#endif