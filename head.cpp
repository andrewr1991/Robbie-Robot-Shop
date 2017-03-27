#include "head.h"

Head::Robot_part(string _name, int _model_number, double _cost, string _description, string _image_filename) {
	name = _name;
	model_number = _model_number;
	cost = _cost;
	description = _description;
	image_filename = _image_filename;
}
