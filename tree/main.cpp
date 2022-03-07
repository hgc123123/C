//
// Created by Administrator on 2022/3/5 0005.
//

#include <iostream>
#include "tree.h"
#include <vector>
using namespace std;

int main(){
    BinaryTree binaryTree;
    cout<<"Input an array:"<<endl;
    vector<int> vec;
    for (int temp = 0; cin>>temp ; ) {
        vec.push_back(temp);
        if(cin.get()=='\n'){
            break;
        }
    }
    cout<<"Create an array:"<<endl;
    binaryTree.root=NULL;

    binaryTree.root=binaryTree.createBTree(binaryTree.root,vec);
    cout<<"Pre Order: "<<endl;
    binaryTree.preOrder(binaryTree.root);
    cout<<endl;
    cout<<"In Order: "<<endl;
    binaryTree.inOrder(binaryTree.root);
    cout<<endl;
    cout<<"Post Order: "<<endl;
    binaryTree.postOrder(binaryTree.root);
    cout<<endl;
    return 0;
}