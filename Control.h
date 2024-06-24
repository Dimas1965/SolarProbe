#pragma once
#include <array>
#include <cstdlib>

using namespace std;

class Control
{
public:
	array<double, 3> newPos() { return { (double)rand(), (double)rand(), (double)rand() }; };
};

