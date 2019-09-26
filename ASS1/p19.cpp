#include<iostream>
using namespace std;

class Rectangle{
    int length,breadth;
    
    public:
    
    Rectangle(int a, int b){
        length = a;
        breadth = b;
    }
    
    void area(){
        cout<<"Length = "<<length<<" "<<"Breadth = "<<breadth<<endl;
        cout<<"The area is = "<<length * breadth<<endl;
    }
    
};

int main(){
    
    Rectangle r1(12,334), r2(23,34), r3(34,24), r4(364,56);
    r1.area();
    r2.area();
    r3.area();
    r4.area();
    
    
    return 0;
}
