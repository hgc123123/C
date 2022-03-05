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
bool DoubleLink::isEmpty(doubleLinkNode *head){
    if(head->next==NULL){
        return true;
    }else{
        return false;
    }
}
void DoubleLink::insertNode(doubleLinkNode *head,double x){
    doubleLinkNode *last=NULL;
    last=head;

    cout<<"1.7"<<endl;
    while(last->next!=head){
        cout<<"1.8"<<endl;
        last=last->next;
    }

    doubleLinkNode *node=new doubleLinkNode;
    node->value=x;
    node->next=NULL;
    node->pre=NULL;

    last->next=node;
    node->pre=last;
    node->next=head;
    head->pre=node;
}
void DoubleLink::travelNode(doubleLinkNode *head){
    if(head->next==head){
        return;
    }else{
        doubleLinkNode *last=NULL;
        last=head;
        while(last->next!=head){
            last=last->next;
            cout<<last->value<<" ";
        }
        cout<<endl;
    }
}
void DoubleLink::deleteNode(doubleLinkNode *head, double x){
    if(head->next==NULL){
        return;
    }else{
        doubleLinkNode *pre,*tar;
        pre=NULL;
        tar=NULL;
        tar=head;
        while(tar->next!=head){
            tar=tar->next;
            if(tar->value==x){
                pre=tar->pre;
                pre->next=tar->next;
                tar->next->pre=pre;
            }
        }
    }
}












