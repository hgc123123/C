#include <iostream>
#include<vector>
#include "queue.h"
using namespace std;

void Queue::insertQueue(vector<int> &arr){
    int size=arr.size();
    for (int i = 1; i < size; ++i) {
        for (int j = i; j >= 0; j--) {
            if(arr[j-1]>arr[j]){
		int temp=arr[j-1];
                arr[j-1]=arr[j];
		arr[j]=temp;
            }else{
                break;
            }
        }
    }
    for(int i=0;i<size;i++){
	cout<<arr[i]<<" : ";
    }
    cout<<endl;
}
