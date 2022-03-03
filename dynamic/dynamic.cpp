#include <iostream>
#include <string>
#include <vector>
#include "dynamic.h"
using namespace std;

int Dynamic::maxChildNumOfArray(vector<int> vec){
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
int Dynamic::maxContinueArraySum(vector<int> vec){
    int size=vec.size();
    int sum=vec[0];
    int max=vec[0];
    for (int i = 1; i < size; ++i) {
        if(sum+vec[i]>vec[i]){
            sum=sum+vec[i];
        }else{
            sum=vec[i];
        }
        if(sum>max){
            max=sum;
        }
    }
    return max;
}
int Dynamic::maxSumInRotateArray(int **n){
    int **dp=new int*[5];
    for (int i = 0; i < 5; ++i) {
        dp[i]=new int[i+1];
    }
    dp[0][0]=n[0][0];
    int max=dp[0][0];
    for (int i = 1; i < 5; ++i) {
        for (int j = 0; j <= i; ++j) {
            if(j==0){
                dp[i][j]=dp[i-1][j]+n[i][j];
            }else{
                if(n[i-1][j]>n[i-1][j-1])
                    dp[i][j]=dp[i-1][j]+n[i][j];
                else
                    dp[i][j]=dp[i-1][j-1]+n[i][j];
            }
	    max=max>dp[i][j]?max:dp[i][j];
        }
    }
    return max;
}
int Dynamic::maxTwoArraySameOrderMethod(string str1, string str2){
    int m=str1.size();
    int n=str2.size();
    int max;
    int **dp=new int*[m+1];
    for (int i = 0; i < m+1; ++i) {
        dp[i]=new int[n+1];
    }
    for (int i = 0; i < m+1; ++i) {
        dp[i][0]=0;
    }
    for (int j = 0; j < n+1; ++j) {
        dp[0][j]=0;
    }
    for (int i = 1; i <= m ; ++i) {
        for (int j = 1; j <= n ; ++j) {
            if(str1.at(i-1)==str2.at(j-1)){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=dp[i][j-1]>dp[i-1][j]?dp[i][j-1]:dp[i-1][j];
            }
        }
    }
    max=dp[m][n];
    for (int i = 0; i < m; ++i) {
        delete []dp[i];
    }
    delete []dp;
    return max;

}
