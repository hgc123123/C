//
// Created by Administrator on 2022/3/3 0003.
//

#ifndef LINK_LIN_H
#define LINK_LIN_H

struct ListNode{
    double value;
    ListNode *next;
};

class Link {
public:
    bool isEmpty(ListNode *head);
    void insertNode(ListNode *head, double x);
    void travelNode(ListNode *head);
    void deleteNode(ListNode *head, double x);
    ListNode *head;
};


#endif //LINK_LIN_H
