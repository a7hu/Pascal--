#include <iostream>
#include <ctrl.h>

using namespace std;

int main (int argc, char **argv) {
	Controller *ctl = new Controller(argc, argv);
	return 0;	
}

int Options::option_val = 0;
Options::Options() {}
Options::set_no_back_end () {
	option_val |= 0x01;
}
Options::set_list() {
	option_val |= 0x02;
}
Options::set_emit() {
	option_val |= 0x04;
}
int Options::no_back_end () {
	return (option_val & 0x01);
}
int Options::list() {
	return (option_val & 0x02);
}
int Options::emit() {
	return (option_val & 0x04);
}

Controller::Controller(int argc, char **argv): argc(argc), argv(argv) {
	
}
