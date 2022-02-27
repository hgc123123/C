#include<iostream>
#include<vector>
using namespace std;
int maxChildOfArray(vector<int> arr ){
    int size=arr.size();
    int *temp=new int[size];
    for (int k = 0; k < size; ++k) {
        temp[k]=1;
    }
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if(arr[i]>arr[j]&&(temp[j]+1)>temp[i]){
                temp[i]=temp[j]+1;
            }
        }
    }
    int max=temp[0];
    for (int l = 0; l < size; ++l) {
        if(max<temp[l])
            max=temp[l];
    }
    return max;
}

int main(){
    //int *array=new int[];
    cout<<"输入一个数列："<<endl;
    vector<int> vec;
    for (int temp = 0; cin>>temp; ) {
        vec.push_back(temp);
        if(cin.get() == '\n') {
            break;
        }
    }
    cout<<"maxChildOfArray: "<<maxChildOfArray(vec)<<endl;
    return 0;
}

[hpc@cas298 C_test]$ ./vec
输入一个数列：
2 7 5 4 1 6 9
maxChildOfArray: 4
