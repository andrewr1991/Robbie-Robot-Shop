#ifndef BATTERY_H
#define BATTERY_H 2017
#include "robot_part.h"

class Battery : public Robot_part {
	private:
		double power_available;
		double max_energy;

	public:
		Battery(string _name, int _model_number, double _cost, string _description, string _image_filename)
			: Robot_part(_name, _model_number, _cost, _description, _image_filename) {}

			void set_power_available(double _power_available);
			double get_power_available();
			void set_max_energy(double _max_energy);
			double get_max_energy();
};
#endif
