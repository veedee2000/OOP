#include<iostream>
using namespace std;

void factorial(const int& n){
    int ans = 1;
    if(n > 0){ 
        for(int i=1;i<=n;i++){
            ans *= i;
        }
    }
    cout<<ans;
}

int main(){
    
    int n = 4;
    cout<<"Factorial = ";
    factorial(n);
    
    return 0;
}
