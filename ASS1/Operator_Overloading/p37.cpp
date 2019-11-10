#include<iostream>
using namespace std;

class Index{
    int a;
    public:
        Index(int i = 0){
            a = i;
        }
        
        friend Index operator + (const Index &b, const Index &c);

        int operator = (const Index &b){
            return b.a;
        }

        operator int(){
            return a;
        }

        friend class Integer;
};

Index operator + (const Index &b,const Index &c){
    return Index(b.a + c.a);
}
class Integer{
    int a;
    public:
        Integer(int i = 0){
            a = i;
        }

        int operator = (Index &b){
            return b.a;
        }
};

int main(){
    Index in(4), out(10);
    int x = in;			
    int y = in + out;		
    in = 2;				
    Integer i;
    i = in;		
    return 0;
}