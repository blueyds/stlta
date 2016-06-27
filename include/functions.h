#ifndef FUNCTIONS_H
#define FUNCTIONS_H

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

#include <vector>
#include "sma.h"
#include "ema.h"
#include "subtract.h"
#include "max.h"
#include "min.h"
#include "momentum.h"
#include "roc.h"

namespace TA
{
typedef std::vector<double> dvector;
void SMA(int window,dvector &input, dvector &output);
void EMA(int window,dvector &input, dvector &output);
void SUBTRACT(dvector &input1, dvector &input2, dvector &output);
void MACD(int short_window, int long_window, int smooth_window, dvector &input, dvector &macd, dvector &macd_signal, dvector &macd_hist);
void MIN(int window, dvector &input, dvector &output);
void MAX(int window,dvector &input, dvector &output);
void MOMENTUM(int window,dvector &input,dvector &output);
void ROC(int window,dvector &input,dvector &output);
void TEST();
}//namespace TA

#endif
