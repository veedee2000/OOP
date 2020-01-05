#include<iostream>
using namespace std;

class B{

};

class D: public B{
    public:
        D(){
            cout<<"Constructor"<<endl;
        }
        ~D(){
            cout<<"Destructor"<<endl;
        }
};

int main(){
    D o;
    try{
        throw o;
    }
    catch(D o){
        cout<<"Exception"<<endl;
    }
    return 0;
}