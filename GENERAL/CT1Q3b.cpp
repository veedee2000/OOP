#include<iostream>
using namespace std;

class test{
  int *x;
  
  public:
  test(){}
  test& operator () (int a){
      *x = a;
      return *this;
  }
  void print() {cout<<*x;}
  
};

int main(){
    test s1,s2;
    s1 = s2(5);
    s1.print();
    return 0;
}
