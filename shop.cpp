#include "shop.h"

void Shop::create_new_robot_part() {
  int selection;

  string name = "Locomotor";
  int model = 123123;
  double cost = 5000.99;
  string description = "The first locomotor of this program";
  string image_filename = "locomotor.png";
  double max_power = 7.8;

  string menu_robot_parts = "1. Robot torso\n2. Robot head\n3. Robot arm\n4. Robot locomotor\n5. Robot battery\n";

  cout << menu_robot_parts << endl;
  cout << "What robot part would you like to create: ";
  cin >> selection;

  switch (selection) {
    case 1:
      Locomotor loco (name, model, cost, description, image_filename, max_power);
      robot_parts.push_back(loco);
      break;
  }
}
