#ifndef ARM_H
#define ARM_H 2017
#include "robot_part.h"

class Arm {
	private:
		double max_power;

	public:
		Arm(string _name, int _model_number, double _cost, string _description, string _image_filename)
			: Robot_part(_name, _model_number, _cost, _description, _image_filename) {}

			void set_max_power(double _max_power);
			double get_max_power();
};
#endif
