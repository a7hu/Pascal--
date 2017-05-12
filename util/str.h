#ifndef __STR_H__
#define __STR_H__
#include <iostream>
class String {
	class str_rep {
		/* Points to the leading character of the string */
		char *str;
		/* Counts the number of times that the string is currently being accessed */
		int n;
	};
	str_rep *p;
public:
	String();
	/* Initialize the string to 's' */
	String(char *s);
	/* Convert from int to string */
	String(int num);
	/* Convert from double to string */
	String(double num);
	/* Initialize the string as a copy of 's' */
	String(String& s);

	~String();

	/* Return the size of the string */
	int length();
	/* Find location of null-terminated char string 'c' */
	int index(char *c);
	/* Find location index of String string 'sc' */
	int index(String& sc);
	/* Set bit bitNum to 'x' */
	void set_bit(int bitNum);
	/* Unset bit bitNum */
	void unset_bit(int bitNum);

	char *make_char();
	void print();

	/* Assignment operators */
	String &operator=(char *s);
	String &operator=(String &s);

	/* Subscript operator */
	char &operator[](int i);

	/* Append operators */
	friend String operator&(String &arg1, String &arg2);
	friend String operator&(char *arg1, String &arg2);
	friend String operator&(String &arg1, char *arg2);
	
	/* I/O operators */
	friend std::ostream &operator<<(std::ostream& out, String& s);
	friend std::istream &operator>>(std::istream& in, String& s);

	/* Comparison operators */
	friend int operator==(String &arg1, String &arg2);
	friend int operator==(String &arg1, char *arg2);
	friend int operator!=(String &arg1, String &arg2);
	friend int operator!=(String &arg1, char *arg2);
	friend int operator<(String &arg1, String &arg2);
	friend int operator<=(String &arg1, char *arg2);
}
#endif //__STR_H__
