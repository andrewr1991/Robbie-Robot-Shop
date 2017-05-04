#ifndef CUSTOMER_H
#define CUSTOMER_H 2017
#include <string>

using namespace std;

class Customer {
	private:
		string name;
		int customer_number;
		string phone_number;
		string email_address;
		
	public:
		Customer(string _name, int _customer_number, string _phone_number, string _email_address)
		: name {_name}, customer_number{_customer_number}, phone_number{_phone_number}, email_address{_email_address} {}
		string customer_to_string();
};
#endif
