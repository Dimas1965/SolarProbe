#pragma once
#include "Image.h"
#include <array>

using namespace std;

struct Pack {

	Image img;
	array <double, 3> position, rotation, speed;
	double temp, rad;
	
};

