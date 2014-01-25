#ifndef LISTNODE_H
#define LISTNODE_H

class ListNode
{
public:
    ListNode();
    int data;
    ListNode *next;

    void insertAfter(int d);
};

#endif // LISTNODE_H
