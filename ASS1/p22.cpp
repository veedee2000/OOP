#include<iostream>
using namespace std;

class IntArray{
    
    int a[10],n;
    
    public:
    
    // IntArray(IntArray& obj){
    //     for(int i=0;i<obj.n;i++){
    //         a[i] = obj.a[i];
    //     }
    //     n = obj.n;
    // }
    
    IntArray(int a[10], int n){
        for(int i=0;i<n;i++){
            this -> a[i] = a[i];
        }
        this -> n = n;
    }
    
    void add(IntArray& obj1, IntArray& obj2){
        for(int i=0;i<n;i++){
            a[i] = obj1.a[i] + obj2.a[i];
        }
    }
    
    void disp(){
        cout<<"The elements are: ";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
    void reverse(){
        int buff[n];
        for(int i=0;i<n;i++) buff[n - i - 1] = a[i];
        for(int i=0;i<n;i++) a[i] = buff[i];
    }
    
};

int main(){
    int a[] = {1,2,3};
    IntArray obj1(a,3);
    obj1.disp();
    IntArray obj2 = obj1;
    obj2.disp();
    obj2.reverse();
    obj1.disp();
    obj2.disp();
    
    return 0;
}
