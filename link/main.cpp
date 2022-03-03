//
// Created by Administrator on 2022/3/3 0003.
//

#include "link.h"
#include <iostream>
using namespace std;
int main(){
    Link link;
    ListNode *head=NULL;
    head=new ListNode;
    head->value=1.0;
    head->next=NULL;
    link.head=head;
    if(link.isEmplty(head)){
        cout<<"is empty"<<endl;
    }else{
        cout<<"is not empty"<<endl;
    }
    return 0;
}
