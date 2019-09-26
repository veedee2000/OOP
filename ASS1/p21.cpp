#include<iostream>
using namespace std;

class Vector{
    int a[10],n;
    
    public:
    
    
    Vector(int a[],int n){
        for(int i=0;i < n;i++){
            this->a[i] = a[i];
        }
        this -> n = n;
    }
    
    void add(Vector& v){
        for(int i=0;i<n;i++){
            a[i] += v.a[i];
        }
    }
    
    void disp(){
        cout<<"Elements of array: ";
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    
    void sub(Vector& v){
        for(int i=0;i<n;i++){
            a[i] -= v.a[i]; 
        }
    }
    
    void check(Vector& v){
        cout<<"Check:"<<endl;
        for(int i=0;i<n;i++){
            if(a[i] == v.a[i]) cout<<a[i]<<" = "<<v.a[i]<<endl;
            else if(a[i] > v.a[i]) cout<<a[i]<<" > "<<v.a[i]<<endl;
            else cout<<a[i]<<" < "<<v.a[i]<<endl;
        }
    }
    
};

int main(){
    int a1[] = {2,3,4,21,43}, a2[] = {1,433,23,65,32};
    Vector v1(a1,5),v2(a2,5);
    v2.add(v1);
    v2.disp();
    v2.sub(v1);
    v2.disp();
    v2.check(v1);
    
    return 0;
}
