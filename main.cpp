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
	string invalid_selection = "\nPlease make a valid selection\n";
	
	while (true) {
		string main_menu = "1: Create new robot model\n2: Create new robot part\nMake a selection: ";
		cout << main_menu;
		cin >> main_menu_selection;
		
		if (main_menu_selection == 1) {
			shop.create_new_robot_model_1();
		}
		else if (main_menu_selection == 2) {
			while(true) {
				string menu_robot_parts = "\n1. Robot torso\n2. Robot head\n3. Robot arm\n4. Robot locomotor\n"; 
				menu_robot_parts += "5. Robot battery\nWhich robot part would you like to create: ";
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
