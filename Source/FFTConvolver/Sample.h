// ==================================================================================
// Copyright (c) 2012 HiFi-LoFi
//
// This is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// ==================================================================================

#ifndef _FFTCONVOLVER_SAMPLE_H
#define _FFTCONVOLVER_SAMPLE_H

#include "Buffer.h"
#include "Configuration.h"

#include <cstddef>


namespace fftconvolver
{

typedef float Sample;


typedef Buffer<Sample> SampleBuffer;
  
} // End of namespace

#endif // Header guard