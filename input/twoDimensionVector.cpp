#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin>>dp[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<dp[i][j];
        }
    }
    return 1;
}
