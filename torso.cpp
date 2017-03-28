#include "torso.h"

void Torso::set_battery_compartments(int _battery_compartments) {
  battery_compartments = _battery_compartments;
}

int Torso::get_battery_compartments() {
  return battery_compartments;
}

void Torso::set_max_arms(int _max_arms) {
  max_arms = _max_arms;
}

int Torso::get_max_arms() {
	return max_arms;
}
