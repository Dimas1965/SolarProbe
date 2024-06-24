#pragma once
#include "Image.h"
#include <array>
#include <cstdlib>

using namespace std;

class Equipment
{
	double temp, rad;
	array<double, 3> pos, rot, speed;
	Image img;

public:
	Equipment() : 
		temp{ (double)rand() / (double)rand() }, rad{ (double)rand() / (double)rand() }, pos{ (double)rand() / (double)rand() }, rot{ (double)rand() / (double)rand() }, speed{ (double)rand() / (double)rand() } {}

	double getTemp() const { return temp; }
	double getRad() const { return rad; }
	array<double, 3> getPos() const { return pos; }
	array<double, 3> getRot() const  { return rot; }
	array<double, 3> getSpeed() const { return speed; }

	void setShieldPos(array<double, 3> s_pos) {}

	Image makeImage() const { return img; }
};

