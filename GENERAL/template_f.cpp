#include<iostream>
using namespace std;

template<class T>
int Max(T a,T b){
    return (a > b);
}

int Min(T a,T b){
    return (a < b);
}

int main(){
    cout<<Max(23,246);
    cout<<Min(3562,462);
    return 0;
}