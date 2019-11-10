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
            output<<c.real<<" "<<c.img<<"i";
            return output;
        }
};

// ostream& operator <<(ostream& output,const Complex& c){   Can't access private members from here.
//     output<<c.real<<" "<<c.img<<"i";
//     return output;
// }

template<typename T>
void swap(T &x,T &y){
    // cout<<"Before change: "<<x<<" "<<y<<endl;
    T temp;
    temp = x;
    x = y;
    y = temp;
    // cout<<"After change: "<<x<<" "<<y<<endl;
}

int main(){
    int a = 2,b = 5;
    swap(a,b);
    Complex a1(2,4),b1(5,-1);
    // swap(a1,b1);
    cout<<a1<<b1<<endl;
    return 0;
}