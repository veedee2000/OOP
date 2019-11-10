#include<iostream>
using namespace std;

class Stack{
    int top, *buffer,size;
    public:
        Stack(int size = 10){
            this -> size = size;
            buffer = new int[size];
            top = 0;
        }
        int push(int val){
            if(top < size){
                buffer[top++] = val;
                display();
                return 1;
            }
            else return 0;
        }
        
        int pop(){
            if(top > 0){
                --top;
                display();
                return 1;
            }
            else return 0;
        }

        void display(){
            cout<<"Elements: "<<endl;
            for(int i = top - 1;i >= 0;i--) cout<<buffer[i]<<" ";
            cout<<endl;
        }
};

int main(){
    Stack s(5);
    try{
        if(!s.push(2)) throw 1;
        if(!s.push(3)) throw 1;
        if(!s.push(4)) throw 1;
        if(!s.push(5)) throw 1;
        if(!s.push(6)) throw 1;
        if(!s.push(7)) throw 1;
        if(!s.pop()) throw -1;
        if(!s.pop()) throw -1;
    }

    catch(int x){
        if(x == 1) cout<<"Stack Overflow!!!"<<endl;
        if(x == -1) cout<<"Stack Empty!!!"<<endl;
    }
    return 0;
}