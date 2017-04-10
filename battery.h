#ifndef BATTERY_H
#define BATTERY_H 2017
#include "robot_part.h"

class Battery : public Robot_part {
	private:
		double power_available;
		double max_energy;

	public:
		Battery(string _name, int _model_number, double _cost, string _description, string _image_filename, double _power_available, double _max_energy)
			: Robot_part(_name, _model_number, _cost, _description, _image_filename), power_available {_power_available}, max_energy {_max_energy} {}

};
#endif
