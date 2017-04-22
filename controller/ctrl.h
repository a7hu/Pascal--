#ifndef __CTRL_H__
#define __OPTIONS_CLS__
class OptionsCls {
	static int option_val;
public:
	OptionsCls();
	void set_no_back_end();
	void set_list();
	void set_emit();
	void set_optimize();
	void set_peephold();
	void set_format();
	static int no_back_end();
	static int list();
	static int emit();
	static int optimize();
	static int peephole();
	static int format();
};

class ControllerCls {

};
#endif // __CTRL_H__
