#include "Equipment.h"
#include "Interface.h"
#include "Transmitter.h"
#include "Control.h"
#include "Engine.h"
#include <iostream>
#include <array>

using namespace std;

int main() {

	double critTemp, critRad;
	array<double, 3> critPos;

	double startTemp, startRad;
	array<double, 3> startPos, staartRot, startSpeed;

	cout << "Print the start temperature, radiation, position, rotation, speed" << endl;
	cin >> startTemp >> startRad >> startPos[0] >> startPos[1] >> startPos[2] >> staartRot[0] >> staartRot[1] >> staartRot[2] >> startSpeed[0] >> startSpeed[1] >> startSpeed[2];

	Equipment eq;
	Interface inter;
	Transmitter tran;
	Control calc;
	Engine eng;
	Pack pack;

	while (true) {
		cout << "Print the crit temperature, radiation, position" << endl;
		cin >> critTemp >> critRad >> critPos[0] >> critPos[1] >> critPos[2];

		if (eq.getTemp() > critTemp) { 
			inter.cool(eq.getTemp() - critTemp); 
		}
		if (eq.getRad() > critRad) {
//			eq.setShieldPos();
		}
		if (eq.getPos() != critPos) {
			eng.move(calc.newPos());
		}
		pack.img = eq.makeImage();
		pack.position = eq.getPos();
		pack.rad = eq.getRad();
		pack.rotation = eq.getRot();
		pack.temp = eq.getTemp();
		pack.speed = eq.getSpeed();
		tran.transmit(pack);
	}
	return 0;
}