#include "listnode.h"

class LinkedList {

public:
	LinkedList();
	~LinkedList();
	ListNode *head; //  первый элемент списка (голова)
	ListNode *tail; // последний элемент списка (конец)
	int cout; // кол-во узлов списка (длина)
	
	void push_back(int d);
	void push_front(int d);
	void pop_back();
	void pop_front();
	bool isEmpty();
};