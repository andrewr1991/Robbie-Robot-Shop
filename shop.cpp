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

void Shop::create_new_robot_torso(string name, int battery_compartments, int max_arms) {

	int model;
	double cost;
	string description;
	string image_filename;

	string file_data;

	model = 1;
	cost = 5000;
	description = "The torso is the main component of a robot";
	image_filename = "torso.png";

	Torso torso (name, model, cost, description, image_filename, battery_compartments, max_arms);
	robot_parts.push_back(torso);

	file_data = name + "," + to_string(model) + "," + to_string(cost) + "," + description + "," + image_filename + "," + to_string(battery_compartments) + "," + to_string(max_arms) + "\n";

	torso_output_file.open("torsos.txt", fstream::app);
	torso_output_file << file_data;
	torso_output_file.close();
}

void Shop::create_new_robot_head(string name, double power) {
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

	Head head (name, model, cost, description, image_filename, power);
	robot_parts.push_back(head);

	file_data = name + "," + to_string(model) + "," + to_string(cost) + "," + description + "," + image_filename + "," + to_string(power) + "\n";

	head_output_file.open("heads.txt", fstream::app);
	head_output_file << file_data;
	head_output_file.close();
}

void Shop::create_new_robot_arm(string name, double max_power) {
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

	Arm arm (name, model, cost, description, image_filename, max_power);
	robot_parts.push_back(arm);

	file_data = name + "," + to_string(model) + "," + to_string(cost) + "," + description + "," + image_filename + "," + to_string(max_power) + "\n";

	arm_output_file.open("arms.txt", fstream::app);
	arm_output_file << file_data;
	arm_output_file.close();
}

void Shop::create_new_robot_locomotor(string name, double max_power) {
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

	Locomotor locomotor (name, model, cost, description, image_filename, max_power);
	robot_parts.push_back(locomotor);

	file_data = name + "," + to_string(model) + "," + to_string(cost) + "," + description + "," + image_filename + "," + to_string(max_power) + "\n";

	locomotor_output_file.open("locomotors.txt", fstream::app);
	locomotor_output_file << file_data;
	locomotor_output_file.close();
}

void Shop::create_new_robot_battery(string name, double power_available, double max_energy) {
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

	Battery battery (name, model, cost, description, image_filename, power_available, max_energy);
	robot_parts.push_back(battery);

	file_data = name + "," + to_string(model) + "," + to_string(cost) + "," + description + "," + image_filename + "," + to_string(power_available) + "," + to_string(max_energy) + "\n";

	battery_output_file.open("batterys.txt", fstream::app);
	battery_output_file << file_data;
	battery_output_file.close();
}

void Shop::create_new_customer(string name, int number, string phone_number, string email_address) {

	string file_data;

	file_data = name + "," + to_string(number) + "," + phone_number + "," + email_address + "\n";

	customer_output_file.open("customers.txt", fstream::app);
	customer_output_file << file_data;
	customer_output_file.close();

	Customer customer(name, number, phone_number, email_address);
	customers.push_back(customer);
}

void Shop::create_new_sales_associate(string name, int sales_associate_number) {
	string file_data;

	file_data = name + "," + to_string(sales_associate_number) + "\n";

	sales_associate_output_file.open("sales_associates.txt", fstream::app);
	sales_associate_output_file << file_data;
	sales_associate_output_file.close();

	Sales_associate sales_associate(name, sales_associate_number);
	sales_associates.push_back(sales_associate);
	cout << "Sales associate created successfully\n\n";
}

void Shop::create_new_order(string name, int number, string phone_number, string email_address, int model, string to_string_order) {

	int order_number = 10;
	string date = "05022017";

	Customer customer (name, number, phone_number, email_address);
	customers.push_back(customer);

	if (model == 1) {
		create_new_robot_model_1();
	}
	else if (model == 2) {
		create_new_robot_model_2();
	}
	else if (model == 3) {
		create_new_robot_model_3();
	}
	
	Sales_associate sales_associate("John", 19);
	
	Order order(order_number, date, customer, sales_associate, robot_models.back());
	orders.push_back(order);
	
	orders_to_string.push_back(to_string_order);
}

string Shop::order_string() {
	string total_orders;
	for (int i = 0; i < orders_to_string.size(); i++) {
		total_orders += "-------------";
		total_orders += orders_to_string[i];
	}
	if (orders_to_string.size() == 0) return "No orders available";
	else total_orders += "-------------";
	return total_orders;
}

void Shop::loadData() {
	//Variables common to all data
	string name_data;
	string model_number_data;
	string cost_data;
	string description_data;
	string image_filename_data;

	//Torso parts
	string battery_compartments_data;
	string max_arms_data;

	torso_input_file.open("torsos.txt");

	while(true) {
		if (torso_input_file.eof()) {
			break;
		}

		getline(torso_input_file, name_data, ',');
		getline(torso_input_file, model_number_data, ',');
		getline(torso_input_file, cost_data, ',');
		getline(torso_input_file, description_data, ',');
		getline(torso_input_file, image_filename_data, ',');
		getline(torso_input_file, battery_compartments_data, ',');
		getline(torso_input_file, max_arms_data);

		Torso torso (name_data, stoi(model_number_data), stod(cost_data), description_data, image_filename_data, stoi(battery_compartments_data), stoi(max_arms_data));
		robot_parts.push_back(torso);
	}
	
		string power_data;
		
		head_input_file.open("heads.txt");

	while(true) {
		if (head_input_file.eof()) {
			break;
		}

		getline(head_input_file, name_data, ',');
		getline(head_input_file, model_number_data, ',');
		getline(head_input_file, cost_data, ',');
		getline(head_input_file, description_data, ',');
		getline(head_input_file, image_filename_data, ',');
		getline(head_input_file, power_data);

		Head head (name_data, stoi(model_number_data), stod(cost_data), description_data, image_filename_data, stod(power_data));
		robot_parts.push_back(head);
	}
		
		string max_power_data;
	
		arm_input_file.open("arms.txt");

	while(true) {
		if (arm_input_file.eof()) {
			break;
		}

		getline(arm_input_file, name_data, ',');
		getline(arm_input_file, model_number_data, ',');
		getline(arm_input_file, cost_data, ',');
		getline(arm_input_file, description_data, ',');
		getline(arm_input_file, image_filename_data, ',');
		getline(arm_input_file, max_power_data);

		Arm arm (name_data, stoi(model_number_data), stod(cost_data), description_data, image_filename_data, stod(max_power_data));
		robot_parts.push_back(arm);
	}
	
		max_power_data;
		
		locomotor_input_file.open("locomotor.txt");

	while(true) {
		if (locomotor_input_file.eof()) {
			break;
		}

		getline(locomotor_input_file, name_data, ',');
		getline(locomotor_input_file, model_number_data, ',');
		getline(locomotor_input_file, cost_data, ',');
		getline(locomotor_input_file, description_data, ',');
		getline(locomotor_input_file, image_filename_data, ',');
		getline(locomotor_input_file, max_power_data);

		Locomotor locomotor (name_data, stoi(model_number_data), stod(cost_data), description_data, image_filename_data, stod(max_power_data));
		robot_parts.push_back(locomotor);
	}
	
		string power_available_data;
		string max_energy_data;
	
		torso_input_file.open("battery.txt");

	while(true) {
		if (battery_input_file.eof()) {
			break;
		}

		getline(battery_input_file, name_data, ',');
		getline(battery_input_file, model_number_data, ',');
		getline(battery_input_file, cost_data, ',');
		getline(battery_input_file, description_data, ',');
		getline(battery_input_file, image_filename_data, ',');
		getline(battery_input_file, power_available_data, ',');
		getline(battery_input_file, max_energy_data);

		Battery battery (name_data, stoi(model_number_data), stod(cost_data), description_data, image_filename_data, stod(power_available_data), stod(max_energy_data));
		robot_parts.push_back(battery);
	}
}
