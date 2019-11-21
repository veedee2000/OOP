#include<iostream>   // Don't need to overload assignment operator here.
using namespace std;

class A{
    int x;
    public:
        A(int x = 0) : x(x) {}
        void print(){
            cout<<"Val = "<<x<<endl;
        }
        // int operator =(A a){
        //     return a.x;
        // }
         operator int(){   // For x = a
            return x;
        }
};

int main(){
    A a;
    a = 4;   // Nothing needed for this case
    a.print();
    int x = a;
    cout<<x<<endl;
    return 0;
}