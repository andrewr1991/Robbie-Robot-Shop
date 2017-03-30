#ifndef TORSO_H
#define TORSO_H 2017
#include "robot_part.h"

class Torso : public Robot_part {
	private:
		int battery_compartments;
		int max_arms;

	public:
		Torso(string _name, int _model_number, double _cost, string _description, string _image_filename, int _battery_compartments, int _max_arms)
			: Robot_part(_name, _model_number, _cost, _description, _image_filename), battery_compartments {_battery_compartments}, max_arms {_max_arms} {}

};
#endif
