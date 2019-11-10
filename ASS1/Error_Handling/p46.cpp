#include<iostream>
using namespace std;

int main(){
    double a;
    cout<<"Enter number1 :";
    cin>>a;
    double b;
    cout<<"Enter number2: ";
    cin>>b;
    double result;
    try{
        if(b == 0) throw b;
        result = a/b;
        cout<<"Value = "<<result<<endl;
    }
    catch(double x){
        cout<<"Division by zero not allowed"<<endl;
    }

    return 0;
}