#include<iostream>
using namespace std;

class A{};

class B{};

class C{};

class D: public A, virtual public B {};

class E: virtual public B, public C {};

class F: public D, public E {};

int main(){


    return 0;
}