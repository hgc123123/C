#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<string> vec;
    string temp;
    while(getline(cin,temp) && temp!=""){
        vec.push_back(temp);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 1;
}
