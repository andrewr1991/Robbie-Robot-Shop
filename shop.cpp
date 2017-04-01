#include "shop.h"

void Shop::create_new_robot_model() {
    string name = "Model 1";
    int model = 1;
    double cost = 9500;
    double max_speed = 100;
    double max_battery = 100;
    
    string part_name;
	int part_model;
	double part_cost;
	string part_description;
	string part_image_filename;

	//Torso
	part_name = "Torso";
	part_model = 1;
	part_cost = 5000;
	part_description = "The torso is the main component of a robot";
	part_image_filename = "torso.png";

	int torso_battery_compartments = 3;
	int torso_max_arms = 4;
	
	Torso model_torso (part_name, part_model, part_cost, part_description, part_image_filename, torso_battery_compartments, torso_max_arms);
	
	//Head
	part_name = "Head";
	part_model = 2;
	part_cost = 2500;
	part_description = "The head houses the logic components of a robot";
	part_image_filename = "head.png";

	double head_head_power = 100;
	
	Head model_head (part_name, part_model, part_cost, part_description, part_image_filename, head_head_power);
	
	//Arm
	part_name = "Arm";
	part_model = 3;
	part_cost = 1500;
	part_description = "The arm is the way a robot physically interacts with its environment";
	part_image_filename = "arm.png";

	double arm_max_power = 100;
	
    Arm model_arm (part_name, part_model, part_cost, part_description, part_image_filename, arm_max_power);
    
    //Locomotor
	part_name = "Locomotor";
	part_model = 4;
	part_cost = 2000;
	part_description = "The locomotor houses the components that allow the robot to move about its environment";
	part_image_filename = "locomotor.png";

	double locomotor_max_power = 100;
	
    Locomotor model_locomotor (part_name, part_model, part_cost, part_description, part_image_filename, locomotor_max_power);
    
    //Battery
	part_name = "Battery";
	part_model = 5;
	part_cost = 5000;
	part_description = "The battery houses components that give the robot electrical power";
	part_image_filename = "torso.png";

	double battery_power_available = 100;
	double battery_max_energy = 100;
	
    Battery model_battery (part_name, part_model, part_cost, part_description, part_image_filename, battery_power_available, battery_max_energy);	
    
	Robot_model test (name, model, cost, max_speed, max_battery, model_torso, model_head, model_arm, model_locomotor, model_battery);
	Robot_models.push_back(test);
}
	

void Shop::create_new_robot_torso() {

	string name;
	int model;
	double cost;
	string description;
	string image_filename;

	name = "Torso";
	model = 1;
	cost = 5000;
	description = "The torso is the main component of a robot";
	image_filename = "torso.png";

	int battery_compartments;
	int max_arms;

	while(true) {
	cout << "Select how many battery compartments you would like between (1 - 3): ";
	cin >> battery_compartments;

	if (battery_compartments < 1 || battery_compartments > 3) {
	  cout << "Please enter a valid selection!\n\n";
	}
	else {
	  break;
	}
	}

	while(true) {
	cout << "Select how many arms you would like between (1 - 4): ";
	cin >> max_arms;

	if (max_arms < 1 || max_arms > 4) {
	  cout << "Please enter a valid selection!\n\n";
	}
	else {
	  break;
	}

	Torso torso (name, model, cost, description, image_filename, battery_compartments, max_arms);
	robot_parts.push_back(torso);
	}
}

void Shop::create_new_robot_head() {
	string name;
	int model;
	double cost;
	string description;
	string image_filename;
	
	name = "Head";
	model = 2;
	cost = 2500;
	description = "The head houses the logic components of a robot";
	image_filename = "head.png";

	double power;

	while(true) {
		cout << "Select the amount of power you would like between (25 - 100): ";
		cin >> power;

		if (power < 25 || power > 100) {
		  cout << "Please enter a valid selection!\n\n";
		}
		else {
		  break;
		}
	}

	Head head (name, model, cost, description, image_filename, power);
	robot_parts.push_back(head);
}

void Shop::create_new_robot_arm() {
	string name;
	int model;
	double cost;
	string description;
	string image_filename;
	
      name = "Arm";
      model = 3;
      cost = 1500;
      description = "The arm is the way a robot physically interacts with its environment";
      image_filename = "arm.png";

      double max_power;

      while(true) {
        cout << "Select the amount of power you would like between (25 - 100): ";
        cin >> max_power;

        if (max_power < 25 || max_power > 100) {
          cout << "Please enter a valid selection!\n\n";
        }
        else {
          break;
        }
      }

      Arm arm (name, model, cost, description, image_filename, max_power);
      robot_parts.push_back(arm);
    }

void Shop::create_new_robot_locomotor() {
	string name;
	int model;
	double cost;
	string description;
	string image_filename;
	
      name = "Locomotor";
      model = 4;
      cost = 2000;
      description = "The locomotor houses the components that allow the robot to move about its environment";
      image_filename = "locomotor.png";

      double max_power;

      while(true) {
        cout << "Select the amount of power you would like between (25 - 100): ";
        cin >> max_power;

        if (max_power < 25 || max_power > 100) {
          cout << "Please enter a valid selection!\n\n";
        }
        else {
          break;
        }
      }

      Locomotor locomotor (name, model, cost, description, image_filename, max_power);
      robot_parts.push_back(locomotor);
    }

void Shop::create_new_robot_battery() {
	string name;
	int model;
	double cost;
	string description;
	string image_filename;
	
      name = "Battery";
      model = 5;
      cost = 5000;
      description = "The battery houses components that give the robot electrical power";
      image_filename = "torso.png";

      double power_available;
      double max_energy;

      while(true) {
        cout << "Select the amount of power you would like between (25 - 100): ";
        cin >> power_available;

        if (power_available < 25 || power_available > 100) {
          cout << "Please enter a valid selection!\n\n";
        }
        else {
          break;
        }
      }

      while(true) {
        cout << "Select the amount of energy you would like between (25 - 100): ";
        cin >> max_energy;

        if (max_energy < 25 || max_energy > 100) {
          cout << "Please enter a valid selection!\n\n";
        }
        else {
          break;
        }

      Battery battery (name, model, cost, description, image_filename, power_available, max_energy);
      robot_parts.push_back(battery);
    }
  
  
}
