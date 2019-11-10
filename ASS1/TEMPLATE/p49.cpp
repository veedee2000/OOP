#include<iostream>
#include<string.h>
using namespace std;

class Complex{
    private:
        double real, img;
    public:
        Complex(double real, double img){
            this -> real = real;
            this -> img = img;
        }
        double MOD(){
            return real * real + img * img;
        }
        friend ostream& operator<<(ostream &os,const Complex &src) {
		    os << src.real << " + i" << src.img;
		    return os;
	    }
};

template <typename T>
T getmax(T x, T y){
    return (x > y ? x : y);
}

template <typename S>
S max_string(S x,S y){
    return (strcmp(x,y) > 0 ? x : y);
}

int main(){
    int a = 10,b = 2545;
    cout<<"Max between "<<a<<" and "<<b<<" = "<<getmax(a,b)<<endl;
    Complex c1(1,34.4),c2(4,35.4);
    double val1 = c1.MOD(), val2 = c2.MOD();
    cout<<"Max between ";
    cout<<c1;
    cout<<" and ";
    cout<<c2;
    cout<<" = ";
    if(val1 == getmax(val1,val2)) cout<<c1<<endl;
    else cout<<c2<<endl;
    char s1[] = "varun";
    char  s2[] = "veedee";
    cout<<"Max between "<<s1<<" and "<<s2<<" = "<<max_string(s1,s2)<<endl;
    return 0;
}