#include "linkedlist.h"


LinkedList::LinkedList() {
	cout = 0;
    head = nullptr;
    tail = nullptr;
}

LinkedList::~LinkedList() {
	ListNode *delNode = head;
	ListNode *temp;

    while( delNode != nullptr) {
		temp = delNode->next; // получаем указатель на следующий узел
		delete delNode; // Удаляем текущий узел
		delNode = temp; // теперь слудующий узел стал текущим
	}

}

void LinkedList::push_back(int d) {
	if (cout == 0) { 					// в списке нет элементов
		head = tail = new ListNode();
		head->data = d;
	} else {
		tail->insertAfter(d);
		tail = tail->next;
	}
	cout++;
}

void LinkedList::push_front(int d) {
	if(cout == 0) {
		head = tail = new ListNode();
		head->data = d;
	} else {
		ListNode *new_node = new ListNode();
		new_node->data = d;
		new_node->next = head;
		head = new_node;
	}
	cout++;
}

void LinkedList::pop_front() {
	if( cout != 0) {
		ListNode *temp = head;
		head = head->next;
		delete temp;
		cout--;
        if(head == nullptr) {
			tail = head;
		}
	}
}

void LinkedList::pop_back() {
	if(cout == 1) {
		delete tail;
        head = tail = nullptr;
		cout--;
	} 
	if (cout > 1) {
		ListNode *temp = new ListNode();
		temp = head;
		while(temp->next != tail) {
			temp = temp->next;
		}
		tail = temp;
		delete temp->next;
        tail->next = nullptr;
		cout--;
	}
}

bool LinkedList::isEmpty() {
	return (cout == 0); 
}
