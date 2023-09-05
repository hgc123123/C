#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    double **dp=NULL;
    dp=new double*[n];
    for(int i=0;i<n;i++){
        dp[i]=new double[n];
    }
    srand((unsigned) time(NULL));
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=(rand()/(double)RAND_MAX);
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        delete []dp[i];
    }
    delete []dp;
    return 1;
}
