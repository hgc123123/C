#include<iostream>
#include<stdio.h>
using namespace std;
int fibnacci(int n){
    int *result=new int[n];
    int nu;
    if(n==0){
	delete []result;
        return 0;
    }else if(n==1){
        return 1;
	delete []result;
    }else{
	result[0]=0;
	result[1]=1;
        for(int i=2;i<n;i++){
            result[i]=result[i-1]+result[i-2];
	    cout<<result[i]<<" ";
        }
        cout<<result[n-1]<<endl;
	nu=result[n-1];
	delete []result;
        return nu;
    }
}
int main(){
    int n;
    cout<<"输入n: "<<endl;
    cin>>n;
    int result=0;
    result=fibnacci(n);
    cout<<result<<endl;
    return 0;
}


[hpc@cas298 C_test]$ ./fib
输入n:
6
1 2 3 5 5
5
