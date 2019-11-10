#include<iostream>
#include<math.h>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(double x,double y){
            this -> x = x;
            this -> y = y;
        }
        double operator - (const Point &p){
            return sqrt((x - p.x)*(x - p.x) + (y - p.y)*(y - p.y));
        }
};

int main(){
    Point p1(3,4),p2(1,-3);
    cout<<"The distance is : "<< (p1-p2)<<endl;

    return 0;
}