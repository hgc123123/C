#include <iostream>
#include <vector>
#include "dynamic.h"
using namespace std;

int main(){
    //Dynamic maxChild;
    Dynamic maxSumInRotate;
    /*vector<int> vec;
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
    */
    cout<<"Max Sum In Rotate Array: "<<endl;
    int **n = new int*[5];
    for (int i = 0; i < 5; ++i) {
        n[i]=new int[i+1];
        for (int j = 0; j <= i; ++j) {
            cin>>n[i][j];
        }
    }
    /*for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
  	    cout<<n[i][j]<<" ";
	}
	cout<<endl;
    }*/
    cout<<"here"<<endl;
    maxSumInRotate.n=n;
    cout<<"Max sum In Rotate Array is: "<<maxSumInRotate.maxSumInRotateArray(maxSumInRotate.n)<<endl;
    for (int i = 0; i < 5; ++i) {
        delete []n[i];
    }
    delete []n;
    return 0;
}
