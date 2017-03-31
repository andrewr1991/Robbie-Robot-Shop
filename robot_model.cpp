#include "robot_model.h"

void Robot_model::create_model_1() {
	string name;
	int model;
	double cost;
	string description;
	string image_filename;

	//Torso
	name = "Torso";
	model = 1;
	cost = 5000;
	description = "The torso is the main component of a robot";
	image_filename = "torso.png";

	int torso_battery_compartments = 3;
	int torso_max_arms = 4;
	
	Torso model_torso (name, model, cost, description, image_filename, torso_battery_compartments, torso_max_arms);
	
	torso = model_torso;
	
	//Head
	name = "Head";
	model = 2;
	cost = 2500;
	description = "The head houses the logic components of a robot";
	image_filename = "head.png";

	double head_power = 100;
	
	Head model_head (name, model, cost, description, image_filename, head_power);
	
	head = model_head;
	
	//Arm
	name = "Arm";
	model = 3;
	cost = 1500;
	description = "The arm is the way a robot physically interacts with its environment";
	image_filename = "arm.png";

	double arm_max_power = 100;
	
    Arm model_arm (name, model, cost, description, image_filename, arm_max_power);
    
    arm = model_arm;
    
    //Locomotor
	name = "Locomotor";
	model = 4;
	cost = 2000;
	description = "The locomotor houses the components that allow the robot to move about its environment";
	image_filename = "locomotor.png";

	double locomotor_max_power = 100;
	
    Locomotor model_locomotor (name, model, cost, description, image_filename, locomotor_max_power);
    
    locomotor = model_locomotor;
    
    //Battery
	name = "Battery";
	model = 5;
	cost = 5000;
	description = "The battery houses components that give the robot electrical power";
	image_filename = "torso.png";

	double battery_power_available = 100;
	double battery_max_energy = 100;
	
    Battery model_battery (name, model, cost, description, image_filename, battery_power_available, battery_max_energy);	
    
    battery = model_battery;
}
