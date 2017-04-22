#include <iostream>
#include <ctrl.h>

using namespace std;

int main (int argc, char **argv) {
	ControllerCls *ctl = new ControllerCls(argc, argv);
	return 0;	
}

int OptionsCls::option_val = 0;
OptionsCls::OptionsCls() {}
OptionsCls::set_no_back_end () {
	option_val |= 0x01;
}
OptionsCls::set_list() {
	option_val |= 0x02;
}
OptionsCls::set_emit() {
	option_val |= 0x04;
}
int OptionsCls::no_back_end () {
	return (option_val & 0x01);
}
int OptionsCls::list() {
	return (option_val & 0x02);
}
int OptionsCls::emit() {
	return (option_val & 0x04);
}

ControllerCls::ControllerCls() {

}
