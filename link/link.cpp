//
// Created by Administrator on 2022/3/3 0003.
//

#include "link.h"
#include <iostream>
using namespace std;
bool Link::isEmpty(ListNode *head){
    if(head==NULL)
        return true;
    else
        return false;
};
void Link::insertNode(ListNode *head,double x){
    ListNode *last=NULL;
    last=head;
    ListNode *node=new ListNode;
    node->value=x;
    node->next=NULL;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=node;
};
void Link::travelNode(ListNode *head){
    if(head->next==NULL){
        return;
    }else{
        ListNode *last=NULL;
        last=head->next;
        while(last!=NULL){
            cout<<last->value<<" "<<endl;
            last=last->next;
        }
    }
};
void Link::deleteNode(ListNode *head,double x){
    if(head->next==NULL){
        return;
    }else{
        ListNode *delNode=NULL;
        ListNode *pre=NULL;
        pre=head;
        while(pre->next->value!=x){
            pre=pre->next;
        }
        delNode=pre->next;
        pre->next=delNode->next;
        delete delNode;
    }
}