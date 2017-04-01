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
	string main_menu = "1: Select from pre-built robot models\n2: Create new robot part\nMake a selection: ";
	
	string menu_robot_models = "1. Robot 9000: Best specs. available\n2. Robot 5000: Average specs but still a great value\n";
	menu_robot_models += "3. Robot 2000: Minimal specs. Great robot for beginners\n0: To return to the previous menu\n";
	menu_robot_models += "Which robot would you like: ";
	
	string menu_robot_parts = "\n1. Robot torso\n2. Robot head\n3. Robot arm\n4. Robot locomotor\n"; 
	menu_robot_parts += "5. Robot battery\nWhich robot part would you like to create: ";
	string invalid_selection = "\nPlease make a valid selection\n";
	
	while (true) {
		cout << main_menu;
		cin >> main_menu_selection;
		
		if (main_menu_selection == 1) {
			while(true) {
				cout << menu_robot_models;
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
		else if (main_menu_selection == 0) {
			exit(1);
		}
		else {
			cout << invalid_selection;
		}
	}
	return 0;
}
