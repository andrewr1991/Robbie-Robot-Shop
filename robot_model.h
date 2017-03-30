#ifndef ROBOT_MODEL_H
#define ROBOT_MODEL_H 2017
#include "robot_part.h"
#include <string>

class Robot_model {
  private:
    string name;
    int model;
    double cost;
    double max_speed;
    double max_battery;

    //robot parts
    Robot_part torso;
    Robot_part head;
    Robot_part arm;
    Robot_part locomotor;
    Robot_part battery;

  public:

};
#endif
