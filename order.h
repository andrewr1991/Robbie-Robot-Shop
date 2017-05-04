#ifndef ORDER_H
#define ORDER_H 2017
#include "customer.h"
#include "sales_associate.h"
#include "robot_model.h"
#include <string>

using namespace std;

class Order {
	private:
		int order_number;
		string date;
		Customer customer;
		Sales_associate sales_associate;
		Robot_model robot_model;
		
	public:
		Order(int _order_number, string _date, Customer _customer, Sales_associate _sales_associate,
		Robot_model _robot_model) : order_number{_order_number}, date{_date}, customer{_customer},
		sales_associate{_sales_associate}, robot_model{_robot_model} {}
};
#endif
