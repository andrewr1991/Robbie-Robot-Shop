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
#include "customer.h"
#include "customer.cpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Shop {
  private:
    vector <Robot_part> robot_parts;
    vector <Robot_model> robot_models;
    vector <Customer> customers;

  public:
  	//Robot parts
    void create_new_robot_torso();
    void create_new_robot_head();
    void create_new_robot_arm();
    void create_new_robot_locomotor();
    void create_new_robot_battery();
    
    //Robot models
    void create_new_robot_model_1();
    void create_new_robot_model_2();
    void create_new_robot_model_3();
    
    //Customers
    void create_new_customer();
    
    
};
#endif
