#include<iostream>
#include<math.h>
using namespace std;

class Complex{
    private:
        double real,img;
    public:
        Complex(int real = 0, int img = 0){
            this -> real = real;
            this -> img = img;
        }

        void disp(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

class Quadratic{
    private:
        // double a,b,c;
    public:
        double a,b,c;
        Quadratic(int a = 0,int b = 0,int c = 0){
            this -> a = a;
            this -> b = b;
            this -> c = c;
        }

        Quadratic operator +(const Quadratic &q){
            Quadratic q_new;
            q_new.a = a + q.a;
            q_new.b = b + q.b;
            q_new.c = c + q.c;
            return q_new;
        }

        friend istream& operator >> (ostream&,Quadratic&);
        friend ostream& operator << (ostream&,Quadratic&);
        
        void cal(double x){
            cout<<"The value of polynomial at "<<x<<" = "<<(a*x*x + b*x + c)<<endl;
        }

        void root(){
            if(b*b - 4*a*c < 0){
                double val = sqrt(4*a*c - b*b);
                Complex c1(-b/(2*a),val);
                cout<<"Root1: ";
                c1.disp();
                Complex c2(-b/(2*a),-val);
                cout<<"Root2: ";
                c2.disp();
            }
            else{
                double val = sqrt(b*b - 4*a*c);
                cout<<"Root1: "<<(-b/(2*a) + (sqrt(b*b - 4*a*c))/(2*a))<<endl;
                cout<<"Root1: "<<(-b/(2*a) - (sqrt(b*b - 4*a*c))/(2*a))<<endl;
            }
        }
};

istream& operator >> (istream& input,Quadratic& q){
    input >> q.a;
    input >> q.b;
    input >> q.c;
    return input;
}

ostream& operator << (ostream& output,Quadratic& q){
    output << q.a<<"x^2 + ";
    output << q.b<<"x + ";
    output << q.c<<endl;
    return output;
}

int main(){
    Quadratic p1,p2;
    cout<<"Enter coefficients for polynomial 1:"<<endl;
    cin>>p1;
    cout<<"Enter coefficients for polynomial 2:"<<endl;
    cin>>p2;
    Quadratic p3 = p1+p2;
    cout<<"After addition:"<<endl;
    cout<<p3;
    p3.cal(3);
    p3.root();
    return 0;
}