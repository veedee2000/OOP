#include<iostream>
#include<math.h>
using namespace std;

class Coordinate{
    float x, y, z;  
    
    public:
    
    Coordinate(float x, float y, float z){
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }
    
    void distance(Coordinate& p){
        float ans = sqrt( (x - p.x)*(x - p.x) + (y - p.y)*(y - p.y) + (z - p.z)*(z - p.z) );
        cout<<"Distance = "<<ans;
    }
    
};

int main(){
    
    Coordinate p1(2.2,1.4,3.7), p2(4.3,3.3,4.8);
    p2.distance(p1);
    
    return 0;
}
