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
        cout<<root->value<<" ";
        preOrder(root->lchild);
        preOrder(root->rchild);
    }
}
void BinaryTree::inOrder(BTNode *root){
    if(root!=NULL){
        preOrder(root->lchild);
        cout<<root->value<<" ";
        preOrder(root->rchild);
    }
}
void BinaryTree::postOrder(BTNode *root){
    if(root!=NULL){
        preOrder(root->lchild);
        preOrder(root->rchild);
        cout<<root->value<<" ";
    }
}
int BinaryTree::countLeafNode(BTNode *root){
    int l1,l2,l;
    if(root==NULL){
        return 0;
    }else{
        l1=countLeafNode(root->lchild);
        l2=countLeafNode(root->rchild);
        l=l1+l2;
        if((!root->lchild)&&(!root->rchild)){
            l++;
        }
        return l;
    }
}
int BinaryTree::levelOfTree(BTNode *root){
    int c1,c2,c;
    if(!root){
        return 0;
    }else{
        c1=levelOfTree(root->lchild);
        c2=levelOfTree(root->rchild);
        c=c1>c2?c1:c2;
        return c+1;
    }
}
BTNode* BinaryTree::targetNode(BTNode *root,int key){
    if(!root){
        return NULL;
    }else if(root->value==key){
        return root;
    }else if(root->value<key){
        return targetNode(root->rchild,key);
    }else{
        return targetNode(root->rchild,key);
    }
}
BTNode* BinaryTree::createTotalBTree(BTNode *root,vector<int> &arr){
    int size=arr.size();
    BTNode *parentNode=new BTNode;
    BTNode *currentNode=NULL;
    BTNode **nodes=new BTNode*[size+1];
    int front,rear;
    front=rear=0;
    root=new BTNode;
    root->value=arr[0];
    root->lchild=root->rchild=NULL;
    parentNode=root;
    for (int i = 1; i < size; ++i) {
        currentNode=new BTNode;
        currentNode->value=arr[i];
        currentNode->lchild=NULL;
        currentNode->rchild=NULL;
        nodes[++rear]=currentNode;
        if(parentNode->lchild==NULL){
            parentNode->lchild=currentNode;
        }else{
            parentNode->rchild=currentNode;
            parentNode=nodes[++front];
        }
    }
    delete []nodes;
    return root;
}
void BinaryTree::levelTree(BTNode *root){
    int front,rear;
    front=rear=0;
    BTNode *p=new BTNode;
    BTNode **nodes=new BTNode*[8];
    nodes[++rear]=root;
    while(front-rear){
        p=nodes[++front];
        cout<<p->value<<endl;
        if(p->lchild)
            nodes[++rear]=p->lchild;
        if(p->rchild)
            nodes[++rear]=p->rchild;
    }
    delete []nodes;
}








