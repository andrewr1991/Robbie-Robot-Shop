#include "shop.h"
#include "robot_model.h"
#include "robot_part.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	Shop shop;
	int main_menu_selection;
	int robot_part_selection;
	int robot_model_selection;
	string main_menu = "1: Select from pre-built robot models\n2: Create new robot part\n3: Create a new customer\n4: Create new sales associate\nMake a selection: ";

	string menu_robot_models = "1. Robot 9000: Best specs. available\n2. Robot 5000: Average specs but still a great value\n";
	menu_robot_models += "3. Robot 2000: Minimal specs. Great robot for beginners\n0: To return to the previous menu\n";
	string menu_robot_model_selection = "\nWhich robot would you like: ";

	string model_1 = "Model 9000\n\nCost: $16,000\nMax Speed: 100\nMax Battery: 100\nTorso:\n- 3 battery compartments\n";
	model_1 += "- 4 arms\nHead:\n- 100 head power\nArm:\n- 100 arm power\nLocomotor:\n- 100 locomotor power\n";
	model_1 += "Battery:\n- 100 power available\n- 100 max energy\n";
	
	string model_2 = "Model 5000\n\nCost: $8,000\nMax Speed: 50\nMax Battery: 50\nTorso:\n- 2 battery compartments\n";
	model_2 += "- 2 arms\nHead:\n- 50 head power\nArm:\n- 50 arm power\nLocomotor:\n- 50 locomotor power\n";
	model_2 += "Battery:\n- 50 power available\n- 50 max energy\n";
	
	string model_3 = "Model 2000\n\nCost: $4,250\nMax Speed: 25\nMax Battery: 25\nTorso:\n- 1 battery compartments\n";
	model_3 += "- 1 arm\nHead:\n- 25 head power\nArm:\n- 25 arm power\nLocomotor:\n- 25 locomotor power\n";
	model_3 += "Battery:\n- 25 power available\n- 25 max energy\n";

	string menu_robot_parts = "\n1. Robot torso\n2. Robot head\n3. Robot arm\n4. Robot locomotor\n";
	menu_robot_parts += "5. Robot battery\nWhich robot part would you like to create: ";
	string invalid_selection = "\nPlease make a valid selection\n";

	while (true) {
		cout << main_menu;
		cin >> main_menu_selection;

		if (main_menu_selection == 1) {
			while(true) {
				cout << menu_robot_models;
				cout << model_1;
				cout << model_2;
				cout << model_3;
				cout << menu_robot_model_selection;
				cin >> robot_model_selection;
				if (robot_model_selection == 1) {
					shop.create_new_robot_model_1();
				}
				else if (robot_model_selection == 2) {
					shop.create_new_robot_model_2();
				}
				else if (robot_model_selection == 3) {
					shop.create_new_robot_model_3();
				}
				else if (robot_model_selection == 0) {
					break;
				}
				else {
					cout << invalid_selection;
				}
			}
		}
		else if (main_menu_selection == 2) {
			while(true) {
				cout << menu_robot_parts;
				cin >> robot_part_selection;

				if (robot_part_selection == 1) {
					shop.create_new_robot_torso();
				}
				else if (robot_part_selection == 2) {
					shop.create_new_robot_head();
				}
				else if (robot_part_selection == 3) {
					shop.create_new_robot_arm();
				}
				else if (robot_part_selection == 4) {
					shop.create_new_robot_locomotor();
				}
				else if (robot_part_selection == 5) {
					shop.create_new_robot_battery();
				}
				else if (robot_part_selection == 0) {
					break;
				}
				else {
					cout << invalid_selection;
				}
			}
		}
		else if (main_menu_selection == 3) {
			shop.create_new_customer();
		}
		else if (main_menu_selection == 4) {
			shop.create_new_sales_associate();
		}
		else if (main_menu_selection == 0) {
			exit(1);
		}
		else {
			cout << invalid_selection;
		}
	}
	return 0;
}
