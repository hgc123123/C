#include <iostream>
#include <vector>
#include "dynamic.h"
using namespace std;

int main(){
    Dynamic maxChild;
    vector<int> vec;
    cout<<"Input a array of int: "<<endl;
    for (int temp = 0; cin>>temp ; ) {
        vec.push_back(temp);
        if(cin.get()=='\n')
            break;
    }
    maxChild.vec=vec;
    cout<<"Max Child of Array: "<<maxChild.maxChildNumOfArray(maxChild.vec)<<endl;
    cout<<"Max Continue Sum Array: "<<endl;
    cout<<maxChild.maxContinueArraySum(maxChild.vec)<<endl;
    return 0;
}
