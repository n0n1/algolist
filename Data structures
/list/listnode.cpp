#include "listnode.h"

ListNode::ListNode() {
    data = 0;
    next = nullptr;
}

void ListNode::insertAfter(int d)
{
    ListNode *new_node = new ListNode(); // создаем новый узел
    new_node->data = d; // заполняем данные узла
    new_node->next = next; // значение поля текущего элемента
    next = new_node; // текущий узел указывает на вновь созданный
}
