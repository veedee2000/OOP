#include<iostream>
using namespace std;

class INT{
    private:
        int i;
    public:
        INT(int a):i(a) {}
        ~INT() {}

        INT operator++(){  // Pre Increment
            ++i;
            return *this;
        }

        INT operator++(int){  // Post Increment
            ++i;
            return *this; 
        }

        int operator =(const INT &c){ 
            return (c.i);
        }

        operator int(){
            return i;
        }

        void disp(){
            cout<<i<<endl;
        }
};

int main(){
    int x = 3;
    INT y = x;
    y.disp();
    y++ = ++y;
    y.disp();
    x=y;

    return 0;
}