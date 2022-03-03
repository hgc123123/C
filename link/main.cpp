//
// Created by Administrator on 2022/3/3 0003.
//

#include "link.h"
#include <iostream>
using namespace std;
int main(){
    ListNode *head=NULL;
    head=new ListNode;
    head->value=0.0;
    head->next=NULL;

    Link link;
    link.head=head;
    link.insertNode(link.head,2.0);
    link.travelNode(link.head);
    return 0;
}
