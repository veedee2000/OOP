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
        Complex operator +(Complex &c){
            Complex c_new;
            c_new.real = c.real + real;
            c_new.img = c.img + img;
            return c_new;
        }

        Complex operator -(Complex &c){
            Complex c_new;
            c_new.real = real - c.real;
            c_new.img = img - c.img;
            return c_new;
        }

        Complex operator *(Complex &c){
            Complex c_new;
            c_new.real = real * c.real - img * c.img;
            c_new.img = img * c.real + c.img * real;
            return c_new;
        }

        Complex operator /(Complex &c){
            Complex c_new;
            c_new.real = (real * c.real + img * c.img) / (c.real * c.real + c.img * c.img);
            c_new.img = (img * c.real + real * c.img) / (c.real * c.real + c.img * c.img);
            return c_new;
        }

        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }

};

int main(){
    Complex c1(1,1), c2(2,2);
    Complex a = c1 + c2;
    cout<<"After addition: ";
    a.display();
    Complex b = c1 - c2;
    cout<<"After substraction: ";
    b.display();
    Complex c = c1 * c2;
    cout<<"After multiplication: ";
    c.display();
    Complex d = c1 / c2;
    cout<<"After division: ";
    d.display();

    return 0;
}