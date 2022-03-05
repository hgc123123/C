//
// Created by Administrator on 2022/3/3 0003.
//

#include "link.h"
#include <iostream>
#include<stdlib.h>
#include <omp.h>
using namespace std;
int main(){
    /*   single link operation
    ListNode *head=NULL;
    head=new ListNode;
    head->value=0.0;
    head->next=NULL;
    Link link;
    link.head=head;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 5; ++i) {
        double val=(rand()/(double)RAND_MAX);
        link.insertNode(link.head,val);
    }
    for (int i = 0; i < 8; ++i) {
        link.insertNode(link.head,i);
    }
    link.travelNode(link.head);
    cout<<"delete node:"<<endl;
    link.deleteNode(link.head,5);
    link.travelNode(link.head);
    */
    //  double link operation
    doubleLinkNode *head=NULL;
    head=new doubleLinkNode;
    head->value=0.0;
    head->pre=head;
    head->next=head;
    DoubleLink doubleLink;
    doubleLink.head=head;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 8; ++i) {
        //double val=(rand()/(double)RAND_MAX);
        //doubleLink.insertNode(doubleLink.head,val);
        doubleLink.insertNode(doubleLink.head,i);
    }
    cout<<"1:"<<endl;
    doubleLink.travelNode(doubleLink.head);
    doubleLink.deleteNode(doubleLink.head,0);
    doubleLink.travelNode(doubleLink.head);
    return 0;
}
