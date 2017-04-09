#include "shop.h"

using namespace std;

void Shop::create_new_robot_model_1() {
	string model_name = "Robot 9000";
	int model_model = 1;
	double model_cost = 16000;
	double model_max_speed = 100;
	double model_max_battery = 100;

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

	Robot_model model_1 (model_name, model_model, model_cost, model_max_speed, model_max_battery, model_torso, model_head, model_arm, model_locomotor, model_battery);
	robot_models.push_back(model_1);
}

void Shop::create_new_robot_model_2() {
  string model_name = "Robot 5000";
  int model_model = 2;
  double model_cost = 8000;
  double model_max_speed = 50;
  double model_max_battery = 50;

  string part_name;
	int part_model;
	double part_cost;
	string part_description;
	string part_image_filename;

	//Torso
	part_name = "Torso";
	part_model = 1;
	part_cost = 2500;
	part_description = "The torso is the main component of a robot";
	part_image_filename = "torso.png";

	int torso_battery_compartments = 2;
	int torso_max_arms = 2;

	Torso model_torso (part_name, part_model, part_cost, part_description, part_image_filename, torso_battery_compartments, torso_max_arms);

	//Head
	part_name = "Head";
	part_model = 2;
	part_cost = 1250;
	part_description = "The head houses the logic components of a robot";
	part_image_filename = "head.png";

	double head_head_power = 50;

	Head model_head (part_name, part_model, part_cost, part_description, part_image_filename, head_head_power);

	//Arm
	part_name = "Arm";
	part_model = 3;
	part_cost = 750;
	part_description = "The arm is the way a robot physically interacts with its environment";
	part_image_filename = "arm.png";

	double arm_max_power = 50;

    Arm model_arm (part_name, part_model, part_cost, part_description, part_image_filename, arm_max_power);

    //Locomotor
	part_name = "Locomotor";
	part_model = 4;
	part_cost = 1000;
	part_description = "The locomotor houses the components that allow the robot to move about its environment";
	part_image_filename = "locomotor.png";

	double locomotor_max_power = 50;

    Locomotor model_locomotor (part_name, part_model, part_cost, part_description, part_image_filename, locomotor_max_power);

    //Battery
	part_name = "Battery";
	part_model = 5;
	part_cost = 2500;
	part_description = "The battery houses components that give the robot electrical power";
	part_image_filename = "torso.png";

	double battery_power_available = 50;
	double battery_max_energy = 50;

    Battery model_battery (part_name, part_model, part_cost, part_description, part_image_filename, battery_power_available, battery_max_energy);

	Robot_model model_2 (model_name, model_model, model_cost, model_max_speed, model_max_battery, model_torso, model_head, model_arm, model_locomotor, model_battery);
	robot_models.push_back(model_2);
}

void Shop::create_new_robot_model_3() {
    string model_name = "Robot 2000";
    int model_model = 3;
    double model_cost = 4250;
    double model_max_speed = 25;
    double model_max_battery = 25;

    string part_name;
	int part_model;
	double part_cost;
	string part_description;
	string part_image_filename;

	//Torso
	part_name = "Torso";
	part_model = 1;
	part_cost = 1500;
	part_description = "The torso is the main component of a robot";
	part_image_filename = "torso.png";

	int torso_battery_compartments = 1;
	int torso_max_arms = 1;

	Torso model_torso (part_name, part_model, part_cost, part_description, part_image_filename, torso_battery_compartments, torso_max_arms);

	//Head
	part_name = "Head";
	part_model = 2;
	part_cost = 750;
	part_description = "The head houses the logic components of a robot";
	part_image_filename = "head.png";

	double head_head_power = 25;

	Head model_head (part_name, part_model, part_cost, part_description, part_image_filename, head_head_power);

	//Arm
	part_name = "Arm";
	part_model = 3;
	part_cost = 300;
	part_description = "The arm is the way a robot physically interacts with its environment";
	part_image_filename = "arm.png";

	double arm_max_power = 25;

    Arm model_arm (part_name, part_model, part_cost, part_description, part_image_filename, arm_max_power);

    //Locomotor
	part_name = "Locomotor";
	part_model = 4;
	part_cost = 500;
	part_description = "The locomotor houses the components that allow the robot to move about its environment";
	part_image_filename = "locomotor.png";

	double locomotor_max_power = 25;

    Locomotor model_locomotor (part_name, part_model, part_cost, part_description, part_image_filename, locomotor_max_power);

    //Battery
	part_name = "Battery";
	part_model = 5;
	part_cost = 1200;
	part_description = "The battery houses components that give the robot electrical power";
	part_image_filename = "torso.png";

	double battery_power_available = 25;
	double battery_max_energy = 25;

    Battery model_battery (part_name, part_model, part_cost, part_description, part_image_filename, battery_power_available, battery_max_energy);

	Robot_model model_3 (model_name, model_model, model_cost, model_max_speed, model_max_battery, model_torso, model_head, model_arm, model_locomotor, model_battery);
	robot_models.push_back(model_3);
}

void Shop::create_new_robot_torso() {

	string name;
	int model;
	double cost;
	string description;
	string image_filename;
	
	string file_data;

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
	}

	Torso torso (name, model, cost, description, image_filename, battery_compartments, max_arms);
	robot_parts.push_back(torso);
}

void Shop::create_new_robot_head() {
	string name;
	int model;
	double cost;
	string description;
	string image_filename;
	
	string file_data;

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
	
	string file_data;

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
	
	string file_data;

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
	
	string file_data;

      name = "Battery";
      model = 5;
      cost = 5000;
      description = "The battery houses components that give the robot electrical power";
      image_filename = "battery.png";

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
       }
       
	std::ofstream ofs("file.txt");

	const Battery battery (name, model, cost, description, image_filename, power_available, max_energy);
	robot_parts.push_back(battery);
	
    {
        boost::archive::text_oarchive oa(ofs);
        // write class instance to archive
        oa << battery;
    	// archive and stream closed when destructors are called
	}
	
	Robot_part newbattery;
	
    {
        // create and open an archive for input
        std::ifstream ifs("file2.txt");
        boost::archive::text_iarchive ia(ifs);
        // read class state from archive
        ia >> newbattery;
        // archive and stream closed when destructors are called
    }
}

void Shop::create_new_customer() {
	string name;
	int customer_number;
	string phone_number;
	string email_address;
	
	string file_data;
	
	getchar();
	cout << "Enter the name of the customer: ";
	getline(cin, name);
	cout << "Enter the customer number: ";
	cin >> customer_number;
	getchar();
	cout << "Enter the customer phone number: ";
	getline(cin, phone_number);
	cout << "Enter the customer email address: ";
	getline(cin, email_address);
	
	Customer customer(name, customer_number, phone_number, email_address);
	customers.push_back(customer);
	cout << "Customer created successfully\n\n";
}

void Shop::create_new_sales_associate() {
	string name;
	int employee_number;
	
	string file_data;
	
	getchar();
	cout << "Enter the name of the sales associate: ";
	getline(cin, name);
	cout << "Enter the employee number: ";
	cin >> employee_number;
	
	Sales_associate sales_associate(name, employee_number);
	sales_associates.push_back(sales_associate);
	cout << "Sales associate created successfully\n\n";
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
