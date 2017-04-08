#ifndef ORDER_H
#define ORDER_H 2017
#include "customer.h"
#include "customer.cpp"
#include "sales_associate.h"
#include "sales_associate.cpp"
#include "robot_model.h"
#include "robot_model.cpp"
#include <string>

using namespace std;

class Order {
	private:
		int order_number;
		string date;
		Customer customer;
		Sales_associate sales_associate;
		Robot_model robot_model;
		int status;
		double cost;
		
	public:
		Order(int _order_number, string _date, Customer _customer, Sales_associate _sales_associate,
		Robot_model _robot_model, int _status, double _cost) : order_number{_order_number}, date{_date}, customer{_customer},
		sales_associate{_sales_associate}, robot_model{_robot_model}, status{_status}, cost{_cost} {}
};
#endif
