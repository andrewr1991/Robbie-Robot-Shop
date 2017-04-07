#ifndef SALES_ASSOCIATE_H
#define SALES_ASSOCIATE_H 2017
#include <string>

using namespace std;

class Sales_associate {
	private:
		string name;
		int employee_number;
		
	public:
		Sales_associate(string _name, int _employee_number) : name {_name}, employee_number{_employee_number} {}
};
#endif
