#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    void insertQueue(vector<int> &arr);
    void shellQueue(vector<int> &arr);
    void quickQueue(vector<int> &arr,int l,int r);
    vector<int> arr;
};
