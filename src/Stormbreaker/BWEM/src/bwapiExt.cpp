//////////////////////////////////////////////////////////////////////////
//
// This file is part of the BWEM Library.
// BWEM is free software, licensed under the MIT/X11 License.
// A copy of the license is provided with the library in the LICENSE file.
// Copyright (c) 2015, 2017, Igor Dimitrijevic
//
//////////////////////////////////////////////////////////////////////////


#include "bwapiExt.h"


using namespace BWAPI;
using namespace BWAPI::UnitTypes::Enum;
namespace {
	auto &bw = Broodwar;
}

using namespace std;


namespace BWEM {

	using namespace utils;
	using namespace detail;

	namespace BWAPI_ext {


		void drawDiagonalCrossMap(BWAPI::Position topLeft, BWAPI::Position bottomRight, BWAPI::Color col)
		{
			drawLineMap(topLeft, bottomRight, col);
			drawLineMap(Position(bottomRight.x, topLeft.y), Position(topLeft.x, bottomRight.y), col);
		}

		void drawLineMap(BWAPI::Position point1, BWAPI::Position point2, BWAPI::Color col)
		{
			bw->drawLineMap(point1, point2, col);
		}

	}
} // namespace BWEM::BWAPI_ext



