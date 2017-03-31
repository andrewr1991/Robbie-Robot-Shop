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
	
	while (true) {
		string main_menu = "1: Create new robot model\n2: Create new robot part\nMake a selection: ";
		cout << main_menu;
		cin >> main_menu_selection;
		
		if (main_menu_selection == 1) {
			
		}
		
		string menu_robot_parts = "1. Robot torso\n2. Robot head\n3. Robot arm\n4. Robot locomotor\n5. Robot battery\nWhich robot part would you like to create: ";
		cout << menu_robot_parts << endl;
		cin >> robot_part_selection;
	}
	return 0;
}
