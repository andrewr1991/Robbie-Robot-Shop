#include "shop.h"
#include "robot_model.h"
#include "robot_part.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	Shop shop;
	int selection;
	
	while (true) {
	
	string menu_robot_parts = "1. Robot torso\n2. Robot head\n3. Robot arm\n4. Robot locomotor\n5. Robot battery\n";

	cout << menu_robot_parts << endl;
	cout << "Which robot part would you like to create: ";
	cin >> selection;
	}
	return 0;
}
