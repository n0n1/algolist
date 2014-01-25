#include <iostream>
#include "linkedlist.h"
#include "listnode.h"

using namespace std;

//void fillList(LinkedList &list) {
//    int data = -1;
//    while(data != 0){
//      cin >> data;

//      if(cin.good()){
//        if(data != 0){
//          list.push_back(data);
//        }
//      } else {
//        cout << "Неверный ввод"<< endl;
//        cin.clear();
//        cin.ignore( 1024, '\n' );
//        data = -1;
//      }
//    }
//}

//void displayList(LinkedList &list) {
//    ListNode *node;
//    node = list.begin();
//    for(int i=0; i<list.count(); i++) {
//        cout << node->data << " ";
//        node = node->next;
//    }
//    cout << endl;
//}

int main()
{
    LinkedList myList_1, myList_2, myList_3;
    cout << "Заполните списки. Конец ввода заканчивается нулем." << endl;
    
    cout << "Заполните список 1" << endl;
    myList_1.initialization();

    cout << "Заполните список 2" << endl;
    myList_2.initialization();

    cout << "List 1" << endl;
    myList_1.display();

    cout << "List 2" << endl;
    myList_2.display();

    ListNode *node_2, *node;
    node = myList_1.begin();
    node_2 = myList_2.begin();
    while((node != nullptr) || (node_2 != nullptr)){
            if(node == nullptr && node_2 != nullptr){
                myList_3.push_back(node_2->data());
                node_2 = node_2->next();
            } else {
                if(node != nullptr && node_2 == nullptr){
                    myList_3.push_back(node->data());
                    node = node->next();
                } else {
                    myList_3.push_back(node->data());
                    myList_3.push_back(node_2->data());
                    node = node->next();
                    node_2 = node_2->next();
                }
            }
        }

   cout << "List 3" << endl;
   myList_3.display();

    return 0;
}

