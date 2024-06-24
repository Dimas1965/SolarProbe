#pragma once
#include "Pack.h"

class Transmitter
{
	Pack received;
public:
	void transmit(Pack information) {};
	Pack receive() { return received; };
};

