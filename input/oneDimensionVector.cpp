#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    for(int temp=0;cin>>temp;){
        vec.push_back(temp);
        if(cin.get()=='\n')
            break;
    }
    cout<<endl;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    return 1;
}
