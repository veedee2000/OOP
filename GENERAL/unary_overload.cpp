#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int x = 0,int y = 0) : x(x), y(y) {}
        Point operator - (){
            return Point(-x,-y); // Creates temporary object and passes the arguemnts to constructor
        }
        void disp(){
            cout<<x<<" "<<y<<endl;
        }

};

int main(){
    Point p1(1,43),p2;
    Point p3 = -p1;
    p3.disp();
    return 0;
}