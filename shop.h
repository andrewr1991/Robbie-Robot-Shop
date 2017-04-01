#ifndef SHOP_H
#define SHOP_H 2017
#include "robot_model.h"
#include "robot_part.h"
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
#include <vector>
#include <iostream>

using namespace std;

class Shop {
  private:
    vector <Robot_part> robot_parts;
    vector <Robot_model> Robot_models;

  public:
    void create_new_robot_torso();
    void create_new_robot_head();
    void create_new_robot_arm();
    void create_new_robot_locomotor();
    void create_new_robot_battery();
    
    void create_new_robot_model_1();
};
#endif
