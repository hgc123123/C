//
// Created by Administrator on 2022/3/5 0005.
//
#include<iostream>
#include<vector>
#include "tree.h"
using namespace std;
BTNode* BinaryTree::createBTree(BTNode *root,vector<int> &arr){
    BTNode *currentNode,*parentNode;
    root=new BTNode;
    root->value=arr[0];
    root->lchild=NULL;
    root->rchild=NULL;
    for (int i = 1; i < arr.size(); ++i) {
        BTNode *node=new BTNode;
        node->value=arr[i];
        node->lchild=node->rchild=NULL;
        currentNode=root;
        while(currentNode){
            parentNode=currentNode;
            if(node->value<currentNode->value){
                currentNode=currentNode->lchild;
            }else{
                currentNode=currentNode->rchild;
            }
        }
        if(parentNode->value>node->value){
            parentNode->lchild=node;
            //cout<<node->value<<"l ";
        }else{
            parentNode->rchild=node;
            //cout<<node->value<<"r ";
        }
        //cout<<i<<": "<<endl;
    }
    return root;
}
void BinaryTree::preOrder(BTNode *root){
    if(root!=NULL){
        cout<<root->value<<" "<<endl;
        preOrder(root->lchild);
        preOrder(root->rchild);
    }
}