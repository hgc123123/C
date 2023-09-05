#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    vector<vector<double>> dp(n,vector<double>(n,0));
    srand((unsigned ) time(NULL));
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            dp[i][j]=(rand()/(double)RAND_MAX);
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 1;
}
