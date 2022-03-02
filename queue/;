#include <iostream>
#include "queue.h"
#include <vector>
using namespace std;
int main(){
    Queue insert;
    vector<int> arr;
    for (int temp = 0; cin>>temp ; ) {
        arr.push_back(temp);
        if(cin.get()=='\n'){
            break;
        }
    }
    insert.arr=arr;
    int size=arr.size();
    cout<<"insert queue: "<<endl;
    insert.insertQueue(insert.arr);
    cout<<"afer queue: "<<endl;
    for (int i = 0; i < size; ++i) {
        cout<<insert.arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
