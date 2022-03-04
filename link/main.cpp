//
// Created by Administrator on 2022/3/3 0003.
//

#include "link.h"
#include <iostream>
#include<stdlib.h>
#include <omp.h>
using namespace std;
int main(){
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
    link.travelNode(link.head);
    return 0;
}
