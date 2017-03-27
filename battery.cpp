#include "battery.h"

void Battery::set_power_available(double _power_available) {
	power_available = _power_available;
}

double Battery::get_power_available() {
	return power_available;
}

void Battery::set_max_energy(double _max_energy) {
	max_energy = _max_energy;
}
