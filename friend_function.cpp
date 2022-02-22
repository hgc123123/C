[hpc@node029 C++]$ cat test.cpp 
#include<iostream>
using namespace std;

class Box{
    int width;
public:
    friend void printWidth( Box box );
    void setWidth(int w);
};

void Box::setWidth(int w){
    width=w;
}

void printWidth( Box box ){
    cout<<box.width<<endl;
}

int main(){
    Box box;
    box.setWidth(4);
    printWidth( box );
    return 0;
}
[hpc@node029 C++]$ g++ test.cpp -o test
[hpc@node029 C++]$ ./test 
4
