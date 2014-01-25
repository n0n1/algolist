#ifndef LISTNODE_H
#define LISTNODE_H

class ListNode
{
public:
    ListNode();
    void insertNext(int d);
    ListNode* next();
    int data();
    void setNext(ListNode *node);
    void setData(int d);
private:
    int _data;
    ListNode *_next;
};

#endif // LISTNODE_H
