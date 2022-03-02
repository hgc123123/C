#include <iostream>
#include <vector>
#include "maxChildNumOfArray.h"
using namespace std;

int MaxChildNumOfArray::maxChildNumOfArray(vector<int> vec){
    int size=vec.size();
    int *temp=new int [size];
    for (int i = 0; i < size; ++i) {
        temp[i]=1;
    }
    for (int i = 1; i < vec.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if(vec[i]>vec[j]&&temp[j]+1>temp[i])
                temp[i]=temp[j]+1;
        }
    }
    int max=temp[0];
    for (int i = 1; i < size; ++i) {
        if(max<temp[i])
            max=temp[i];
    }
    delete []temp;
    return max;
}
