#include<iostream>
using namespace std;

class sample{
    int x;
    public:
    sample(){}
    sample(int a): x{a}{}
    
    sample& operator = (sample s){
        x = s.x;
        return *this;
    }
    
    sample operator + (sample& s){
        sample need;
        need.x = x + s.x;
        return need;
    }
    
    sample& operator ++ (int){
        x++;
        return *this;
    }
    void print(){cout<< x;}
};

int main(){
    
    sample s1(10),s2 = 5;
    sample s3 = s1 + (s2 ++);
    s3.print();
    
    return 0;
}
