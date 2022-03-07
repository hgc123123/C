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
    cout<<"The leaf nodes is: "<<endl;
    int countLeafNodes=binaryTree.countLeafNode(binaryTree.root);
    cout<<countLeafNodes<<endl;
    cout<<"The level of tree is "<<endl;
    int levelOfTree=binaryTree.levelOfTree(binaryTree.root);
    cout<<levelOfTree<<endl;
    cout<<"The value of TargetNode is: ";
    BTNode *targetNode=new BTNode;
    targetNode=binaryTree.targetNode(binaryTree.root,8);
    cout<<targetNode->value<<endl;
    cout<<"travel tree levely: "<<endl;
    BinaryTree btree;
    btree.root=NULL;
    BTNode *totalTree=binaryTree.createTotalBTree(btree.root,vec);
    binaryTree.levelTree(totalTree);
    return 0;
}