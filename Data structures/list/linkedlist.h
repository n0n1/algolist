#include "listnode.h"

class LinkedList {

public:
	LinkedList();
	~LinkedList();

private:
    int _count; // кол-во узлов списка (длина)
    ListNode *_head; //  первый элемент списка (голова)
    ListNode *_tail; // последний элемент списка (конец)

public:
	void push_back(int d);
	void push_front(int d);
	void pop_back();
	void pop_front();
	bool isEmpty();
    ListNode* begin();
    ListNode* end();
    int count();
    void display() const;
    void initialization();
};
