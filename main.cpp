#include <iostream>
#include "robot_part.h"
#include "locomotor.h"
#include "locomotor.cpp"
#include "head.h"
#include "head.cpp"
#include "torso.h"
#include "torso.cpp"
#include "arm.h"
#include "arm.cpp"
#include "battery.h"
#include "battery.cpp"

using namespace std;

int main() {

	/* Example of creating a robot part*/
	string name = "Locomotor";
	int model = 123123;
	double cost = 5000.99;
	string description = "The first locomotor of this program";
	string image_filename = "locomotor.png";
	double max_power = 7.8;

	Locomotor loco (name, model, cost, description, image_filename, max_power);

	return 0;
}
