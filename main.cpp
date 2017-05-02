#include "shop.h"
#include "robot_model.h"
#include "robot_part.h"
#include <vector>
#include <string>
#include <iostream>
#include <FL/Fl.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Pack.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_PNG_Image.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Scroll.H>

Shop shop;
Fl_Window *win;
Fl_Menu_Bar *menubar;

using namespace std;

void create_robot_torso(Fl_Widget* w, void* p);
void cancel_robot_torso(Fl_Widget* w, void* p);
void create_robot_head(Fl_Widget* w, void* p);
void cancel_robot_head(Fl_Widget* w, void* p);
void create_robot_arm(Fl_Widget* w, void* p);
void cancel_robot_arm(Fl_Widget* w, void* p);
void create_robot_locomotor(Fl_Widget* w, void* p);
void cancel_robot_locomotor(Fl_Widget* w, void* p);
void create_robot_battery(Fl_Widget* w, void* p);
void cancel_robot_battery(Fl_Widget* w, void* p);
void create_robot_model(Fl_Widget* w, void* p);
void cancel_robot_model(Fl_Widget* w, void* p);
void create_sales_associate(Fl_Widget* w, void* p);
void cancel_sales_associate(Fl_Widget* w, void* p);
void create_robot_order(Fl_Widget* w, void* p);
void cancel_robot_order(Fl_Widget* w, void* p);
void create_customer(Fl_Widget* w, void* p);
void cancel_customer(Fl_Widget* w, void* p);

class Robot_torso_Dialog {
	public:
		Robot_torso_Dialog() {
			dialog = new Fl_Window(340, 130, "New Robot Torso");
				t_name = new Fl_Input(120, 10, 210, 25, "Name:");
				t_name->align(FL_ALIGN_LEFT);
				
				t_battery_compartments = new Fl_Input(120, 40, 210, 25, "Batteries (1-3):");
				t_battery_compartments->align(FL_ALIGN_LEFT);
				
				t_max_arms = new Fl_Input(120, 70, 210, 25, "Arms (1-3):");
				t_max_arms->align(FL_ALIGN_LEFT);
				
				t_create = new Fl_Return_Button(145, 100, 120, 25, "Create Torso");
				t_create->callback((Fl_Callback *)create_robot_torso, 0);
				
				t_cancel = new Fl_Button(270, 100, 60, 25, "Cancel");
				t_cancel->callback((Fl_Callback *)cancel_robot_torso, 0);
				dialog->end();
				dialog->set_non_modal();
		}
	
		void show() {dialog->show();}
		void hide() {dialog->hide();}
		string name() {return t_name->value();}
		string battery_compartments() {return t_battery_compartments->value();}
		string max_arms() {return t_max_arms->value();}
	
	private:
		Fl_Window *dialog;
		Fl_Input *t_name;
		Fl_Input *t_battery_compartments;
		Fl_Input *t_max_arms;
		Fl_Return_Button *t_create;
		Fl_Button *t_cancel;
};

Robot_torso_Dialog *robot_torso_dlg;

void create_robot_torso(Fl_Widget* w, void* p) {
	string name = robot_torso_dlg->name();
	string battery_compartments = robot_torso_dlg->battery_compartments();
	string max_arms = robot_torso_dlg->max_arms();
	
	robot_torso_dlg->hide();
	shop.create_new_robot_torso(name, stoi(battery_compartments), stoi(max_arms));
	fl_message("New Torso created successfully");
}

void cancel_robot_torso(Fl_Widget* w, void* p) {
	robot_torso_dlg->hide();
}

class Robot_head_Dialog {
	public:
		Robot_head_Dialog() {
			dialog = new Fl_Window(340, 100, "New Robot Head");
				h_name = new Fl_Input(120, 10, 210, 25, "Name:");
				h_name->align(FL_ALIGN_LEFT);
				
				h_power = new Fl_Input(120, 40, 210, 25, "Power (25-100):");
				h_power->align(FL_ALIGN_LEFT);
				
				h_create = new Fl_Return_Button(145, 70, 120, 25, "Create Head");
				h_create->callback((Fl_Callback *)create_robot_head, 0);
				
				h_cancel = new Fl_Button(270, 70, 60, 25, "Cancel");
				h_cancel->callback((Fl_Callback *)cancel_robot_head, 0);
				dialog->end();
				dialog->set_non_modal();
		}
	
		void show() {dialog->show();}
		void hide() {dialog->hide();}
		string name() {return h_name->value();}
		string power() {return h_power->value();}
	
	private:
		Fl_Window *dialog;
		Fl_Input *h_name;
		Fl_Input *h_power;
		Fl_Return_Button *h_create;
		Fl_Button *h_cancel;
};

Robot_head_Dialog *robot_head_dlg;

void create_robot_head(Fl_Widget* w, void* p) {
	string name = robot_head_dlg->name();
	string power = robot_head_dlg->power();
	
	robot_head_dlg->hide();
	shop.create_new_robot_head(name, stod(power));
	fl_message("New Head created successfully");
}

void cancel_robot_head(Fl_Widget* w, void* p) {
	robot_head_dlg->hide();
}


class Robot_arm_Dialog {
	public:
		Robot_arm_Dialog() {
			dialog = new Fl_Window(340, 100, "New Robot Arm");
				a_name = new Fl_Input(120, 10, 210, 25, "Name:");
				a_name->align(FL_ALIGN_LEFT);
				
				a_max_power = new Fl_Input(120, 40, 210, 25, "Power (1-3):");
				a_max_power->align(FL_ALIGN_LEFT);
				
				a_create = new Fl_Return_Button(145, 70, 120, 25, "Create Arm");
				a_create->callback((Fl_Callback *)create_robot_arm, 0);
				
				a_cancel = new Fl_Button(270, 70, 60, 25, "Cancel");
				a_cancel->callback((Fl_Callback *)cancel_robot_arm, 0);
				dialog->end();
				dialog->set_non_modal();
		}
	
		void show() {dialog->show();}
		void hide() {dialog->hide();}
		string name() {return a_name->value();}
		string max_power() {return a_max_power->value();}
	
	private:
		Fl_Window *dialog;
		Fl_Input *a_name;
		Fl_Input *a_max_power;
		Fl_Return_Button *a_create;
		Fl_Button *a_cancel;
};

Robot_arm_Dialog *robot_arm_dlg;

void create_robot_arm(Fl_Widget* w, void* p) {
	string name = robot_arm_dlg->name();
	string max_power = robot_arm_dlg->max_power();
	
	robot_arm_dlg->hide();
	shop.create_new_robot_head(name, stod(max_power));
	fl_message("New Arm created successfully");
}

void cancel_robot_arm(Fl_Widget* w, void* p) {
	robot_arm_dlg->hide();
}

class Robot_locomotor_Dialog {
	public:
		Robot_locomotor_Dialog() {
			dialog = new Fl_Window(340, 100, "New Robot Locomotor");
				l_name = new Fl_Input(120, 10, 210, 25, "Name:");
				l_name->align(FL_ALIGN_LEFT);
				
				l_max_power = new Fl_Input(120, 40, 210, 25, "Power (25-100):");
				l_max_power->align(FL_ALIGN_LEFT);
				
				l_create = new Fl_Return_Button(100, 70, 165, 25, "Create Locomotor");
				l_create->callback((Fl_Callback *)create_robot_locomotor, 0);
				
				l_cancel = new Fl_Button(270, 70, 60, 25, "Cancel");
				l_cancel->callback((Fl_Callback *)cancel_robot_locomotor, 0);
				dialog->end();
				dialog->set_non_modal();
		}
	
		void show() {dialog->show();}
		void hide() {dialog->hide();}
		string name() {return l_name->value();}
		string max_power() {return l_max_power->value();}
	
	private:
		Fl_Window *dialog;
		Fl_Input *l_name;
		Fl_Input *l_max_power;
		Fl_Return_Button *l_create;
		Fl_Button *l_cancel;
};

Robot_locomotor_Dialog *robot_locomotor_dlg;

void create_robot_locomotor(Fl_Widget* w, void* p) {
	string name = robot_locomotor_dlg->name();
	string max_power = robot_locomotor_dlg->max_power();
	
	robot_locomotor_dlg->hide();
	shop.create_new_robot_head(name, stod(max_power));
	fl_message("New Locomotor created successfully");
}

void cancel_robot_locomotor(Fl_Widget* w, void* p) {
	robot_locomotor_dlg->hide();
}

class Robot_battery_Dialog {
	public:
		Robot_battery_Dialog() {
			dialog = new Fl_Window(360, 130, "New Robot Battery");
				b_name = new Fl_Input(120, 10, 210, 25, "Name:");
				b_name->align(FL_ALIGN_LEFT);
				
				b_power_available = new Fl_Input(120, 40, 210, 25, "Power (25-100):");
				b_power_available->align(FL_ALIGN_LEFT);
				
				b_max_energy = new Fl_Input(120, 70, 210, 25, "Energy (25-100):");
				b_max_energy->align(FL_ALIGN_LEFT);
				
				b_create = new Fl_Return_Button(125, 100, 140, 25, "Create Battery");
				b_create->callback((Fl_Callback *)create_robot_battery, 0);
				
				b_cancel = new Fl_Button(270, 100, 60, 25, "Cancel");
				b_cancel->callback((Fl_Callback *)cancel_robot_battery, 0);
				dialog->end();
				dialog->set_non_modal();
		}
	
		void show() {dialog->show();}
		void hide() {dialog->hide();}
		string name() {return b_name->value();}
		string power_available() {return b_power_available->value();}
		string max_energy() {return b_max_energy->value();}
	
	private:
		Fl_Window *dialog;
		Fl_Input *b_name;
		Fl_Input *b_power_available;
		Fl_Input *b_max_energy;
		Fl_Return_Button *b_create;
		Fl_Button *b_cancel;
};

Robot_battery_Dialog *robot_battery_dlg;

void create_robot_battery(Fl_Widget* w, void* p) {
	string name = robot_battery_dlg->name();
	string power_available = robot_battery_dlg->power_available();
	string max_energy = robot_battery_dlg->max_energy();
	
	robot_battery_dlg->hide();
	shop.create_new_robot_battery(name, stod(power_available), stod(max_energy));
	fl_message("New Battery created successfully");
}

void cancel_robot_battery(Fl_Widget* w, void* p) {
	robot_battery_dlg->hide();
}

class Customer_Dialog {
	public:
		Customer_Dialog() {
			dialog = new Fl_Window(360, 160, "New Customer");
				c_name = new Fl_Input(120, 10, 210, 25, "Name:");
				c_name->align(FL_ALIGN_LEFT);
				
				c_number = new Fl_Input(120, 40, 210, 25, "Customer #");
				c_number->align(FL_ALIGN_LEFT);
				
				c_phone_number = new Fl_Input(120, 70, 210, 25, "Phone #:");
				c_phone_number->align(FL_ALIGN_LEFT);
				
				c_email_address = new Fl_Input(120, 100, 210, 25, "Email :");
				c_email_address->align(FL_ALIGN_LEFT);
				
				c_create = new Fl_Return_Button(115, 130, 150, 25, "Create Customer");
				c_create->callback((Fl_Callback *)create_customer, 0);
				
				c_cancel = new Fl_Button(270, 130, 60, 25, "Cancel");
				c_cancel->callback((Fl_Callback *)cancel_customer, 0);
				dialog->end();
				dialog->set_non_modal();
		}
	
		void show() {dialog->show();}
		void hide() {dialog->hide();}
		string name() {return c_name->value();}
		string number() {return c_number->value();}
		string phone_number() {return c_phone_number->value();}
		string email_address() {return c_email_address->value();}
	
	private:
		Fl_Window *dialog;
		Fl_Input *c_name;
		Fl_Input *c_number;
		Fl_Input *c_phone_number;
		Fl_Input *c_email_address;
		Fl_Return_Button *c_create;
		Fl_Button *c_cancel;
};

Customer_Dialog *customer_dlg;

void create_customer(Fl_Widget* w, void* p) {
	string name = customer_dlg->name();
	string number = customer_dlg->number();
	string phone_number = customer_dlg->phone_number();
	string email_address = customer_dlg->email_address();
	
	customer_dlg->hide();
	shop.create_new_customer(name, stoi(number), phone_number, email_address);
	fl_message("Customer created successfully");
}

void cancel_customer(Fl_Widget* w, void* p) {
	customer_dlg->hide();
}

class Sales_Associate_Dialog {
	public:
		Sales_Associate_Dialog() {
			dialog = new Fl_Window(360, 160, "New Sales Associate");
				s_name = new Fl_Input(120, 10, 210, 25, "Name:");
				s_name->align(FL_ALIGN_LEFT);
				
				s_number = new Fl_Input(120, 40, 210, 25, "Sales #");
				s_number->align(FL_ALIGN_LEFT);
				
				s_create = new Fl_Return_Button(115, 130, 150, 25, "Create Customer");
				s_create->callback((Fl_Callback *)create_sales_associate, 0);
				
				s_cancel = new Fl_Button(270, 130, 60, 25, "Cancel");
				s_cancel->callback((Fl_Callback *)cancel_sales_associate, 0);
				dialog->end();
				dialog->set_non_modal();
		}
	
		void show() {dialog->show();}
		void hide() {dialog->hide();}
		string name() {return s_name->value();}
		string number() {return s_number->value();}
	
	private:
		Fl_Window *dialog;
		Fl_Input *s_name;
		Fl_Input *s_number;
		Fl_Return_Button *s_create;
		Fl_Button *s_cancel;
};

Sales_Associate_Dialog *sales_associate_dlg;

void create_sales_associate(Fl_Widget* w, void* p) {
	string name = sales_associate_dlg->name();
	string number = sales_associate_dlg->number();
	
	sales_associate_dlg->hide();
	shop.create_new_sales_associate(name, stoi(number));
	fl_message("sales associate created successfully");
}

void cancel_sales_associate(Fl_Widget* w, void* p) {
	customer_dlg->hide();
}

//Menu bar callbacks

int newTorsoCB(Fl_Widget* w, void* p) { 
	robot_torso_dlg = new Robot_torso_Dialog{};
	robot_torso_dlg->show();
	return Fl::run();
}

int newHeadCB(Fl_Widget* w, void* p) { 
	robot_head_dlg = new Robot_head_Dialog{};
	robot_head_dlg->show();
	return Fl::run();
}

int newArmCB(Fl_Widget* w, void* p) { 
	robot_arm_dlg = new Robot_arm_Dialog{};
	robot_arm_dlg->show();
	return Fl::run();
}

int newLocomotorCB(Fl_Widget* w, void* p) { 
	robot_locomotor_dlg = new Robot_locomotor_Dialog{};
	robot_locomotor_dlg->show();
	return Fl::run();
}

int newBatteryCB(Fl_Widget* w, void* p) { 
	robot_battery_dlg = new Robot_battery_Dialog{};
	robot_battery_dlg->show();
	return Fl::run();
}

void modelCatalogCB(Fl_Widget* w, void* p) {
	string catalog;

	catalog += "Model 9000\nCost: $16,000\nMax speed: 100\nMax battery life: 100\nThe 9000 model is our top robot with all of the best robot parts\n";
	catalog += "-----------------------\n";
	catalog += "Model 5000\nCost: $8,000\nMax speed: 50\nMax battery life: 50\nThe 5000 model is our mid-range robot which includes all of our most popular robot parts\n";
	catalog += "-----------------------\n";
	catalog += "Model 2500\nCost: $4,250\nMax speed: 25\nMax battery life: 25\nThe 2500 model is our low-end robot which includes the lowest specs. available but is great for beginners\n";
	fl_message_title("Robot Model Catalog");
	fl_message(catalog.c_str());
}

void newRobotModel1CB(Fl_Widget* w, void* p) {
	shop.create_new_robot_model_1();
	fl_message_title("New model 9000");
	fl_message("New robot model 9000 created successfully");
}

void newRobotModel2CB(Fl_Widget* w, void* p) {
	shop.create_new_robot_model_2();
	fl_message_title("New model 5000");
	fl_message("New robot model 5000 created successfully");
}

void newRobotModel3CB(Fl_Widget* w, void* p) {
	shop.create_new_robot_model_3();
	fl_message_title("New model 2500");
	fl_message("New robot model 2500 created successfully");
}

int newCustomerCB(Fl_Widget* w, void* p) { 
	customer_dlg = new Customer_Dialog{};
	customer_dlg->show();
	return Fl::run();
}

int newSalesAssociateCB(Fl_Widget* w, void* p) {
	sales_associate_dlg = new Sales_Associate_Dialog{};
	sales_associate_dlg->show();
	return Fl::run();
}

void helpCB(Fl_Widget* w, void* p) {
	string msg;
  	msg = "Welcome to the Robbie Robot Shop\n";
  	msg += "You can create a single robot part or choose from a catalog of pre-assembled robots\n";
  	msg += "You can also create a new sales order and add yourself as a customer\n";
  	msg += "Select which option you would like from the dropdown menus";
  	
  	fl_message_title("Help");
  	fl_message(msg.c_str());
}

void quitCB(Fl_Widget* w, void* p) {
	win->hide(); 
}
	
int main() {
	
//Menu
Fl_Menu_Item menuitems[] = {
	{ "&File", 0, 0, 0, FL_SUBMENU },
		{ "&Quit  ", FL_ALT + 'q', (Fl_Callback *)quitCB },
		{ 0 },
	{ "&Robot Parts  ", 0, 0, 0, FL_SUBMENU },
		{ "&New Torso  ", FL_ALT + 't', (Fl_Callback *)newTorsoCB },
		{ "&New Head  ", FL_ALT + 'h', (Fl_Callback *)newHeadCB },
		{ "&New Arm  ", FL_ALT + 'a', (Fl_Callback *)newArmCB },
		{ "&New Locomotor  ", FL_ALT + 'l', (Fl_Callback *)newLocomotorCB },
		{ "&New Battery  ", FL_ALT + 'b', (Fl_Callback *)newBatteryCB },
		{ 0 },
	{ "&Robot Models", 0, 0, 0, FL_SUBMENU },
		{ "&Robot Model Catalog  ", FL_ALT + 'o', (Fl_Callback *)modelCatalogCB },
		{ "&New Model 9000  ", FL_ALT + 'm', (Fl_Callback *)newRobotModel1CB },
		{ "&New Model 5000  ", FL_ALT + 'n', (Fl_Callback *)newRobotModel2CB },
		{ "&New Model 2500  ", FL_ALT + 'k', (Fl_Callback *)newRobotModel3CB },
		{ 0 },
	{ "&Customer", 0, 0, 0, FL_SUBMENU },
		{ "&New Customer  ", FL_ALT + 'c', (Fl_Callback *)newCustomerCB },
		{ 0 },
	{ "&Sales Associate", 0, 0, 0, FL_SUBMENU },
		{ "&New Customer  ", FL_ALT + 'c', (Fl_Callback *)newSalesAssociateCB },
		{ 0 },
	{ "&Help", 0, 0, 0, FL_SUBMENU },
		{ "&Help  ", FL_ALT + 'h', (Fl_Callback *)helpCB },
		{ 0 },
	{ 0 }
};

	const int x = 600;
	const int y = 350;

	win = new Fl_Window{ x, y, "Library Management System" };
	win->color(FL_WHITE);

	menubar = new Fl_Menu_Bar(0, 0, x, 30);
	menubar->menu(menuitems);
	win->end();
	win->show();
	
	return(Fl::run());
}
