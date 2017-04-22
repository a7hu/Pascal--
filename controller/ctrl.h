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
	int argc;
	char ** argv;
	char *source_file;
	SymtabCls	*std_table;
	PTreeCls	*parse_tree;

	int init();
	int set_options();
	int open_file();
public:
	ControllerCls(int argc, char** argv);
	void print();
};
#endif // __CTRL_H__
