#include<iostream>
using namespace std;

class Integer{
    int val;
    public:
        Integer(int val = 0) {this -> val = val;}
        Integer operator = (int c){
            val = c;
            return *this;
        }

        Integer operator = (Integer &c){
            this -> val = c.val;
            return *this;
        }

        Integer operator + (Integer &c){
            this -> val += c.val;
            return *this;
        }

        Integer operator ++ (int){
            ++val;
            return *this;
        }

        operator int(){  //IMP
            return val;
        }
        friend ostream& operator << (ostream&, Integer &a);
};

ostream& operator << (ostream& output,Integer &a){
    output<<a.val;
    return output;
}

int main() {
 	Integer a = 4, b = a, c;
    c = a+b++;
    int i = a;
    cout << a << b << c;
    return 0;
}
