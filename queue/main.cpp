#include <iostream>
#include "queue.h"
#include <vector>
using namespace std;
int main(){
    //Queue insert;
    //Queue shell;
    Queue quick;
    vector<int> arr;
    for (int temp = 0; cin>>temp ; ) {
        arr.push_back(temp);
        if(cin.get()=='\n'){
            break;
        }
    }
    int size=arr.size();
    /*
    insert.arr=arr;
    cout<<"insert queue: "<<endl;
    insert.insertQueue(insert.arr);
    cout<<"afer queue: "<<endl;
    
    shell.arr=arr;
    */
    quick.arr=arr;
    cout<<"execute quick queue: "<<endl;
    quick.quickQueue(quick.arr,0,size-1);
    cout<<"afer quick queue: "<<endl;
    for (int i = 0; i < size; ++i) {
        cout<<quick.arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
