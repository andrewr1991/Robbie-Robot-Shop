#ifndef HEAD_H
#define HEAD_H 2017
#include "robot_part.h"
#include <string>

class Head : public Robot_part {
	private:
		double power;

	public:
		Head(string _name, int _model_number, double _cost, string _description, string _image_filename)
			: Robot_part(_name, _model_number, _cost, _description, _image_filename);

};
#endif
