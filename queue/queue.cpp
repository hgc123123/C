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
void Queue::shellQueue(vector<int> &arr){
    int size=arr.size();
    int temp;
    int gap=size/2;
    while(gap){
        for (int i = gap; i < size; ++i) {
            temp=arr[i];
	    int j;
            for (j = i;  j-gap >= 0 && temp<arr[j-gap]; j-=gap) {
                arr[j]=arr[j-gap];
            }
            arr[j]=temp;
        }
        gap/=2;
    }
}
void Queue::quickQueue(vector<int> &arr,int l,int r){
    int i,j;
    i=l;
    j=r;
    int temp=arr[l];
    while(i<j){
        while(temp<arr[j]&&i<j){
            --j;
        }
        if(i<j){
            arr[i]=arr[j];
            ++i;
        }
        while(temp>arr[i]&&i<j){
            ++i;
        }
        if(i<j){
            arr[j]=arr[i];
            --j;
        }
    }
    arr[i]=temp;
    if(l<i)
        quickQueue(arr,l,j-1);
    if(i<r)
        quickQueue(arr,j+1,r);
}

