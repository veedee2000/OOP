#include<iostream>
using namespace std;

class Complex{
    private:
        double real,img;
    public:
        Complex(int real = 0, int img = 0){
            this -> real = real;
            this -> img = img;
        }

        friend ostream& operator <<(ostream& output,const Complex& c){
            output<<c.real<<" + "<<c.img<<"i";
            return output;
        }
};

template<typename T>
void Swap(T &x,T &y){
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 2,b = 5;
    cout<<"Before Swap: "<<a<<", "<<b<<endl;
    Swap(a,b);
    cout<<"After Swap: "<<a<<", "<<b<<endl;
    cout<<"Before Swap: ";
    Complex a1(2,4),b1(5,-1);
    cout<<a1<<", "<<b1<<endl;
    Swap(a1,b1);
    cout<<"Before Swap: ";
    cout<<a1<<", "<<b1<<endl;
    return 0;
}