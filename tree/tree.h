//
// Created by Administrator on 2022/3/5 0005.
//
#include<vector>
#ifndef TREE_TREE_H
#define TREE_TREE_H
using namespace std;
struct BTNode{
    int value;
    struct BTNode *lchild,*rchild;
};

class BinaryTree {
public:
    BTNode *createBTree(BTNode *root, vector<int> &arr);
    void preOrder(BTNode *root);
    void inOrder(BTNode *root);
    void postOrder(BTNode *root);
    int countLeafNode(BTNode *root);
    int levelOfTree(BTNode *root);
    BTNode *targetNode(BTNode *root,int key);
    BTNode *root;
};


#endif //TREE_TREE_H
