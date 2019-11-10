// NOT COMPLETED....
#include<iostream>
#include<string.h>
using namespace std;

class Person{
    protected:
        int age;
        string name;
        int height;
    public:
        Person() {}
        Person(string name,int age,int height){
            this -> name = name;
            this -> age = age;
            this -> height = height;
        }

        void printDetails(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Height: "<<height<<endl;
            cout<<endl;
        }
};

class Student : public Person{
    int roll;
    int class_;
    public:
        Student() {}
        Student(string name,int age,int height,int roll,int class_){
            this -> name = name;
            this -> age = age;
            this -> height = height;
            this -> roll = roll;
            this -> class_ = class_;
        }

        void printDetails(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Height: "<<height<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Class: "<<class_<<endl;
            cout<<endl;
        }
};

int main(){
    Person a("varun",19,172);
    a.printDetails();
    Student b("veedee",25,192,71,2);
    a.printDetails();
    return 0;
}