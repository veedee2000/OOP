#include<iostream>
using namespace std;

class test{
  int x;
  public:
  test(): x{x}{}
  friend ostream& operator << (ostream&, test&);
  friend istream& operator >> (istream&, test&);
};

istream& operator >> (istream& input,test& obj){
    input >> obj.x;
    return input;
} 

ostream& operator << (ostream& output, test& obj){
    output << obj.x;
    return output;
}

int main(){
    
    test t1;
    cin >> t1;
    cout<< t1;
    return 0;
}
