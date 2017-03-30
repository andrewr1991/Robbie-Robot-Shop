#include "shop.h"

void Shop::create_new_robot_part() {
  int selection;

  //Robot part variables
  string name;
  int model;
  double cost;
  string description;
  string image_filename;

  string menu_robot_parts = "1. Robot torso\n2. Robot head\n3. Robot arm\n4. Robot locomotor\n5. Robot battery\n";

  cout << menu_robot_parts << endl;
  cout << "Which robot part would you like to create: ";
  cin >> selection;

  //Case 1
  if (selection == 1) {
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

    //Case 2
    else if (selection == 2) {
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

    else if (selection == 3) {
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

    else if (selection == 4) {
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

    else if (selection == 5) {
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
}
