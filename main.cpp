#include "shop.h"
#include "robot_model.h"
#include "robot_part.h"
#include <iostream>
#include <string>
#include <FL/Fl.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Menu_Bar.H>

Shop shop;
Fl_Window *win;

using namespace std;

void create_robot_arm(Fl_Widget* w, void* p);
void cancel_robot_arm(Fl_Widget* w, void* p);


class Robot_arm_Dialog {
	public:
		Robot_arm_Dialog() {
			dialog = new Fl_Window(340, 340, "New Robot Arm");
				a_name = new Fl_Input(120, 10, 210, 25, "Name:");
				a_name->align(FL_ALIGN_LEFT);
				
				a_max_power = new Fl_Input(120, 40, 210, 25, "Max power (1-3):");
				a_max_power->align(FL_ALIGN_LEFT);
				
				a_create = new Fl_Return_Button(145, 70, 120, 25, "Create Arm");
				a_create->callback((Fl_Callback *)create_robot_arm, 0);
				
				a_cancel = new Fl_Button(270, 100, 60, 25, "Cancel");
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
	
	string result;
	/*
	Patron pat (name, phone);
	robot_arm_dlg->hide();
	library.add_patron(pat);
	*/
	
}

void cancel_robot_arm(Fl_Widget* w, void* p) {
	robot_arm_dlg->hide();
}

int main() {
	
	string command;
	string msg;
	
	while (true) {
	
		msg = "=======================\n";
		msg += "C1325 Robbie Robot Shop\n";
		msg += "=======================\n\n";
		msg += "(1) Create new robot part\n";
		msg += "(2) Create new robot model\n";
		msg += "(3) Create new customer\n";
		msg += "(4) Create new sales associate\n";
		msg += "(5) Create new order\n";
		msg += "(9) Help\n";
		msg += "(0) Exit\n\n";
		msg+= "Command?";

		Fl_Window *beacon = new Fl_Window(1, 1);
		beacon->show();
		beacon->hide();

		fl_message_icon()->label("L");
		command = fl_input(msg.c_str());
		
		if (command == "1") {
			robot_arm_dlg = new Robot_arm_Dialog{};
			robot_arm_dlg->show();
			return Fl::run();
		}
	}
	
	const int x = 360;
	const int y = 220;

	win = new Fl_Window{ x, y, "Robbie Robot Shop" };
	win->color(FL_WHITE);

	win->end();
	win->show();
	return(Fl::run());
}
