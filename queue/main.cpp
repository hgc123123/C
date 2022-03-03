#include <iostream>
#include "queue.h"
#include <vector>
using namespace std;
int main(){
    //Queue insert;
    Queue shell;
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
    */
    shell.arr=arr;
    cout<<"execute shell queue: "<<endl;
    shell.shellQueue(shell.arr);
    cout<<"afer shell queue: "<<endl;
    for (int i = 0; i < size; ++i) {
        cout<<shell.arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
