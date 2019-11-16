#include<iostream>
using namespace std;

class Test{
    int x;
    public:
        Test(int x = 0) : x(x) {}
        friend istream& operator >>(istream& input,Test&);
        friend ostream& operator <<(ostream& output,Test&);
};

istream& operator >>(istream& input, Test& t){
    input >> t.x;
    return input;
}

ostream& operator <<(ostream& output, Test& t){
    output << t.x << endl ;
    return output;
}

int main(){
    Test t;
    cin >> t;
    cout << t;
    return 0;
}