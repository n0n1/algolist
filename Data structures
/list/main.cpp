#include <iostream>
#include "linkedlist.h"
#include "listnode.h"

using namespace std;

int main()
{
    int size = 0;
    int data = 0;
    LinkedList myList_1, myList_2, myList_3;

    cout << "Введите размер списков: ";
    cin >> size;

    cout << "Заполните первый список" << endl;
    for(int i= 0; i<size; i++){
    	cin >> data;
    	myList_1.push_back(data);
    }

    cout << "Заполните второй список" << endl;
 	for(int i= 0; i<size; i++){
    	cin >> data;
    	myList_2.push_back(data);
    }
    cout << endl;

    ListNode *node;

    cout << "List 1" << endl;
    node = myList_1.head;
    while(node->next != nullptr){
        cout << node->data << " ";
        node = node->next;
    }
    node = myList_1.tail;
    cout << node->data <<endl;

    cout << "List 2" << endl;
    node = myList_2.head;
    while(node->next != nullptr){
        cout << node->data << " ";
        node = node->next;
    }
    node = myList_2.tail;
    cout << node->data <<endl;

    ListNode *node_2;
        node = myList_1.head;
        node_2 = myList_2.head;
        while((node->next != nullptr) && (node_2 != nullptr)){
            myList_3.push_back(node->data);
            myList_3.push_back(node_2->data);
            node = node->next;
            node_2 = node_2->next;
        }
    node = myList_1.tail;
    node_2 = myList_2.tail;
    myList_3.push_back(node->data);
    myList_3.push_back(node_2->data);


    cout << "List 3" << endl;
    node = myList_3.head;
    while(node->next != nullptr){
        cout << node->data << " ";
        node = node->next;
    }
    node = myList_3.tail;
    cout << node->data <<endl;

    return 0;
}

