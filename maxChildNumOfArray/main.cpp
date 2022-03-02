#ifndef MAXCHILD_H
#define MAXCHILD_H

#include <iostream>
#include <vector>
#include "maxChildNumOfArray.h"
using namespace std;

int main(){
    MaxChildNumOfArray maxChild;
    vector<int> vec;
    for (int temp = 0; cin>>temp ; ) {
        vec.push_back(temp);
        if(cin.get()=='\n')
            break;
    }
    maxChild.vec=vec;
    cout<<"Max Child of Array: "<<maxChild.maxChildNumOfArray(maxChild.vec)<<endl;
    return 0;
}
#endif
