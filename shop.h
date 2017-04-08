#ifndef SHOP_H
#define SHOP_H 2017
#include "robot_model.h"
#include "robot_part.h"
#include "locomotor.h"
#include "head.h"
#include "torso.h"
#include "arm.h"
#include "battery.h"
#include "customer.h"
#include "sales_associate.h"
#include "order.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class Shop {
  private:
    vector <Robot_part> robot_parts;
    vector <Robot_model> robot_models;
    vector <Customer> customers;
    vector <Sales_associate> sales_associates;
    
    ofstream sales_associate_output_file;
    
    ifstream sales_associate_input_file;
    
    ofstream customer_output_file;
    
    ifstream customer_input_file;
    
    ofstream torso_output_file;
    ofstream head_output_file;
    ofstream arm_output_file;
    ofstream locomotor_output_file;
    ofstream battery_output_file;
    
    ifstream torso_input_file;
    ifstream head_input_file;
    ifstream arm_input_file;
    ifstream locomotor_input_file;
    ifstream battery_input_file;
    
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
    
    //Sales associates
    void create_new_sales_associate();
    
    //Orders
    void create_new_order();
    
    //Loading data
    void loadData();
};
#endif
