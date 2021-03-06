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
    vector <Order> orders;
    vector <string> orders_to_string;

  public:
    //File pointers
    ofstream torso_output_file;
    ifstream torso_input_file;

    ofstream head_output_file;
    ifstream head_input_file;

    ofstream arm_output_file;
    ifstream arm_input_file;

    ofstream locomotor_output_file;
    ifstream locomotor_input_file;

    ofstream battery_output_file;
    ifstream battery_input_file;

    ofstream customer_output_file;
    ifstream customer_input_file;

    ofstream sales_associate_output_file;
    ifstream sales_associate_input_file;

  	//Robot parts
    void create_new_robot_torso(string name, int battery_compartments, int max_arms);
    void create_new_robot_head(string name, double power);
    void create_new_robot_arm(string name, double max_power);
    void create_new_robot_locomotor(string name, double max_power);
    void create_new_robot_battery(string name, double power_available, double max_energy);

    //Robot models
    void create_new_robot_model_1();
    string model_1_to_string();
    void create_new_robot_model_2();
    string model_2_to_string();
    void create_new_robot_model_3();
    string model_3_to_string();

    //Customers
    void create_new_customer(string name, int number, string phone_number, string email_address);

    //Sales associates
    void create_new_sales_associate(string name, int sales_associate_number);

    //Orders
    void create_new_order(string name, int number, string phone_number, string email_address, int model, string to_string_order);
    string order_string();
	
	//Loading data
    void loadData();
};
#endif
