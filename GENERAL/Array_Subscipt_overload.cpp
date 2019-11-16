#include<iostream>
using namespace std;

class Point{
    int* p,n;
    public:
        Point(int a[],int n) : n(n){
            p = new int[n];
            p = a;
        }
        int& operator [](int pos){  // & is needed so that referace is returned and not some other temporary location
            if(pos < n && pos >= 0) return p[pos];
            else {cout<<"Out of bound"<<endl; exit(0);}
        }
        void disp(){
            for(int i = 0;i < n;i++) cout<<p[i]<<" ";
            cout<<endl;
        }
};

int main(){
    int a[5] = {1,2,3,4,5};
    Point obj(a,5);
    obj[2] = 99;
    obj.disp();
    obj[44] = 242;
    return 0;
}