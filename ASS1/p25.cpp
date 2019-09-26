#include<iostream>
using namespace std;

class Complex{
    float real, img;
    public:
    void SetReal(float real){
        this -> real = real;
    }
    void SetImg(float img){
        this -> img = img;
    }
    float GetReal(){
        return real;
    }
    float GetImg(){
        return img;
    }
    void disp(){
        cout<<"Real part = "<<real<<" Imaginary part = "<<img<<endl;
    }
    void sum(Complex obj1, Complex obj2){
        this->real = obj1.real + obj2.real;
        this->img = obj1.img + obj2.img;
    }
};

int main(){
    
    Complex obj1,obj2,obj3;
    obj1.SetReal(3.2);
    obj2.SetReal(4.5);
    obj1.SetImg(1.2);
    obj2.SetImg(7.7);
    obj1.disp();
    obj2.disp();
    obj3.sum(obj1,obj2);
    obj3.disp();
    
    return 0;
}
