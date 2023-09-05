#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    double *arr;
    arr=new double[n];
    srand((unsigned )time(NULL));
    for(int i=0;i<n;i++){
        arr[i]=rand()/(double)RAND_MAX;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete []arr;
    return 1;
}
