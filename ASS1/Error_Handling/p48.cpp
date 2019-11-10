#include<iostream>
using namespace std;

class Vehicle{
    int lane,dir;
    public:
    Vehicle(int lane = 1,int dir = 0){
        this -> lane = lane;
        this -> dir = dir;
    }
    int comp(Vehicle &v2){
        if(lane == v2.lane && dir == v2.dir) return 1;
        else return 0;
    }
};

int main(){
    Vehicle v1(0,1), v2(0,2);
    try{
        if(v1.comp(v2)) throw 1;
        else cout<<"Safe"<<endl;
    }
    catch(int x){
        cout<<"Collision may occur"<<endl;
    }
    return 0;
}