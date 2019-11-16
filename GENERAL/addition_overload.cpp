#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int x = 0,int y = 0) : x(x), y(y) {} 
        // Point(int x = 0,int y = 0) : x{x}, y{y} {}
        Point operator + (Point& a){
            Point c;
            c.x = a.x + x;
            c.y = a.y + y;
            return c;
        }
        void disp(){
            cout<<x<<" "<<y<<endl;
        }
};

int main(){
    Point p1(1,1),p2(2,4);
    Point p;
    p = p1 + p2;
    p.disp();
    return 0;
}