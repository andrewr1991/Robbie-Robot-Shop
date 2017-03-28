#ifndef TORSO_H
#define TORSO_H 2017
#include "robot_part.h"

class Torso {
	private:
		int battery_compartments;
		int max_arms;

	public:
		Torso(string _name, int _model_number, double _cost, string _description, string _image_filename)
			: Robot_part(_name, _model_number, _cost, _description, _image_filename) {}

			void set_battery_compartments(int _battery_components);
			int get_battery_components();
			void set_max_arms(int _max_arms);
			int get_max_arms();
};
#endif
