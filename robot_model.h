#ifndef ROBOT_MODEL_H
#define ROBOT_MODEL_H 2017
#include "robot_part.h"
#include "robot_part.cpp"
#include "locomotor.h"
#include "locomotor.cpp"
#include "head.h"
#include "head.cpp"
#include "torso.h"
#include "torso.cpp"
#include "arm.h"
#include "arm.cpp"
#include "battery.h"
#include "battery.cpp"
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
  	void create_model_1();

};
#endif
