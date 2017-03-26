#ifndef BATTERY_H
#define BATTERY_H 2017

class Battery {
	private:
		double power_available;
		double max_energy;
	
	public:
		Battery(double power_available, double max_energy);
};
#endif
