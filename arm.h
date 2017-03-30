#ifndef ARM_H
#define ARM_H 2017
#include "robot_part.h"

class Arm : public Robot_part {
	private:
		double max_power;

	public:
		Arm(string _name, int _model_number, double _cost, string _description, string _image_filename, double _max_power)
			: Robot_part(_name, _model_number, _cost, _description, _image_filename), max_power {_max_power} {}

};
#endif
