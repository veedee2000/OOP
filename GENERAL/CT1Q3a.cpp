#include<iostream>
using namespace std;

class t{
    int x;
    public:
    t(){}
    void * operator new (size_t size){
        cout<<size;
        void *p = malloc(size);
        return p;
    }
    void operator delete (void *p){
        free(p);
    }
};

int main(){
    t *t1 = new t();
    delete t1;
    return 0;
}
