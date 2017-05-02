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

using namespace std;

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
  	Robot_model(string _name, int _model, double _cost, double _max_speed, double _max_battery, Robot_part _torso, Robot_part _head, Robot_part _arm, Robot_part _locomotor, Robot_part _battery) : name{_name}, model{_model}, cost{_cost}, max_speed{_max_speed}, max_battery{_max_battery}, torso{_torso}, head{_head}, arm{_arm}, locomotor{_locomotor}, battery{_battery} { }
  	double get_cost();


};
#endif
