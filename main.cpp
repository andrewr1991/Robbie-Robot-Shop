#include "shop.h"
#include "robot_model.h"
#include "robot_part.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	Shop shop;
	shop.create_new_robot_part();
/*
	string name = "Locomotor";
	int model = 123123;
	double cost = 5000.99;
	string description = "The first locomotor of this program";
	string image_filename = "locomotor.png";
	double max_power = 7.8;

	Locomotor loco (name, model, cost, description, image_filename, max_power);
*/
	cout << "working" << endl;
	return 0;
}
