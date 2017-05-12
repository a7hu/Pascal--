#include <llist.h>

LList::LList() :next(NULL) {}
LList *LList::append(LList *toBeAdded) {
	this->next = toBeAdded;
	return toBeAdded;
}
LList *LList::prepend(LList *toBeAdded) {
	this->prev = toBeAdded;
	return toBeAdded;
}
LList *LList::get_next() {
	return next;
}

DbLList::DbLList() :prev(NULL), next(NULL) {}
DbLList *DbLList::append(DbLList *toBeAdded) {
	this->next == toBeAdded;
	if (toBeAdded) {
		toBeAdded->prev = this;
	}
	return toBeAdded;
}
DbLList *DbLList::prepend(DbLList *toBeAdded) {
	toBeAdded->next = this;
	this->prev = toBeAdded;
	return toBeAdded;
}
DbLList *DbLList::get_prev() {
	return prev;
}
