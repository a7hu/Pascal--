#ifndef __LLIST_H__
#define __LLIST_H__
class LList {
	LList *next;
public:
	LList();
	LList *append(LList *toBeAdded);
	LList *prepend(LList *toBeAdded);
	LList *get_next();
};

class DbLList {
	DbLList *prev;
	DbLList *next;
public:
	DbLList();
	DbLList *append(DbLList *toBeAdded);
	DbLList *prepend(DbLList *toBeAdded);
	DbLList *get_prev();
	DbLList *get_next();
};
#endif //__LLIST_H__
