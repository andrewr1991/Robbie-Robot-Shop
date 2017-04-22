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
void create_robot_customer(Fl_Widget* w, void* p);
void cancel_robot_customer(Fl_Widget* w, void* p);
void create_robot_sales_associate(Fl_Widget* w, void* p);
void cancel_robot_sales_associate(Fl_Widget* w, void* p);
void create_robot_order(Fl_Widget* w, void* p);
void cancel_robot_order(Fl_Widget* w, void* p);

class Robot_torso_Dialog {
	public:
		Robot_torso_Dialog() {
			dialog = new Fl_Window(340, 130, "New Robot Torso");
				t_name = new Fl_Input(120, 10, 210, 25, "Name:");
				t_name->align(FL_ALIGN_LEFT);
				
				t_battery_compartments = new Fl_Input(120, 40, 210, 25, "Battery Compartments (1-3):");
				t_battery_compartments->align(FL_ALIGN_LEFT);
				
				t_max_arms = new Fl_Input(120, 70, 210, 25, "Max arms (1-3):");
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
	
	//shop.create_new_robot_torso(name, stoi(battery_compartments), stoi(max_arms));
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
	//shop.create_new_robot_head(name, stod(power));
	
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
				
				a_max_power = new Fl_Input(120, 40, 210, 25, "Max power (1-3):");
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
	//shop.create_new_robot_head(name, stod(max_power));
	
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
				
				l_max_power = new Fl_Input(120, 40, 210, 25, "Max Power (25-100):");
				l_max_power->align(FL_ALIGN_LEFT);
				
				l_create = new Fl_Return_Button(145, 70, 120, 25, "Create Locomotor");
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
	//shop.create_new_robot_head(name, stod(max_power));
	
}

void cancel_robot_locomotor(Fl_Widget* w, void* p) {
	robot_locomotor_dlg->hide();
}

class Robot_battery_Dialog {
	public:
		Robot_battery_Dialog() {
			dialog = new Fl_Window(340, 100, "New Robot Battery");
				b_name = new Fl_Input(120, 10, 210, 25, "Name:");
				b_name->align(FL_ALIGN_LEFT);
				
				b_power_available = new Fl_Input(120, 40, 210, 25, "Power Available (25-100):");
				b_power_available->align(FL_ALIGN_LEFT);
				
				b_create = new Fl_Return_Button(145, 70, 120, 25, "Create Battery");
				b_create->callback((Fl_Callback *)create_robot_battery, 0);
				
				b_cancel = new Fl_Button(270, 70, 60, 25, "Cancel");
				b_cancel->callback((Fl_Callback *)cancel_robot_battery, 0);
				dialog->end();
				dialog->set_non_modal();
		}
	
		void show() {dialog->show();}
		void hide() {dialog->hide();}
		string name() {return b_name->value();}
		string power_available() {return b_power_available->value();}
	
	private:
		Fl_Window *dialog;
		Fl_Input *b_name;
		Fl_Input *b_power_available;
		Fl_Return_Button *b_create;
		Fl_Button *b_cancel;
};

Robot_battery_Dialog *robot_battery_dlg;

void create_robot_battery(Fl_Widget* w, void* p) {
	string name = robot_battery_dlg->name();
	string power_available = robot_battery_dlg->power_available();
	
	robot_battery_dlg->hide();
	//shop.create_new_robot_head(name, stod(power_available), stod(max_energy));
	
}

void cancel_robot_battery(Fl_Widget* w, void* p) {
	robot_battery_dlg->hide();
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

void quitCB(Fl_Widget* w, void* p) {
	win->hide(); 
}
	
int main() {
	
//Menu
Fl_Menu_Item menuitems[] = {
	{ "&File", 0, 0, 0, FL_SUBMENU },
		{ "&Quit", FL_ALT + 'q', (Fl_Callback *)quitCB },
		{ 0 },
	{ "&Robot Part", 0, 0, 0, FL_SUBMENU },
		{ "&New Torso", FL_ALT + 'n', (Fl_Callback *)newTorsoCB },
		{ "&New Head", FL_ALT + 'l', (Fl_Callback *)newHeadCB },
		{ "&New Arm", FL_ALT + 'l', (Fl_Callback *)newArmCB },
		{ "&New Locomotor", FL_ALT + 'l', (Fl_Callback *)newLocomotorCB },
		{ "&New Battery", FL_ALT + 'l', (Fl_Callback *)newBatteryCB },
		{ 0 },/*
	{ "&Patron", 0, 0, 0, FL_SUBMENU },
		{ "&New", FL_ALT + 'n', (Fl_Callback *)addPatronCB },
		{ "&List All", FL_ALT + 'l', (Fl_Callback *)listAllPatronsCB },
		{ 0 },
	{ "&Help", 0, 0, 0, FL_SUBMENU },
		{ "&Help", FL_ALT + 'h', (Fl_Callback *)helpCB },
		{ 0 },*/
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
