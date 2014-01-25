#include "listnode.h"

ListNode::ListNode() {
    _data = 0;
    _next = nullptr;
}

void ListNode::insertNext(int d)
{
    ListNode *new_node = new ListNode(); // создаем новый узел
    new_node->_data = d; // заполняем данные узла
    new_node->_next = _next; // значение поля текущего элемента
    _next = new_node; // текущий узел указывает на вновь созданный
}

ListNode *ListNode::next() {
    return _next;
}

int ListNode::data() {
    return _data;
}

void ListNode::setNext(ListNode *node) {
    _next = node;
}

void ListNode::setData(int d) {
    _data = d;
}
