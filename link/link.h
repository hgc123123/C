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
    ListNode *head;
};


#endif //LINK_LIN_H
