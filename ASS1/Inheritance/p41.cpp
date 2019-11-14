#include<iostream>

using namespace std;

class Person{
    string name;
    int age;
    float height;
public:
    Person(){}
    Person(string name,int age,int height){
        this->name = name;
        this->age = age;
        this->height = height;
    }
    virtual void printDetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Height : "<<height<<endl;
    }
    string getName(){ return name; }
    int getAge(){ return age; }
    int getHeight(){ return height; }
};

class Student: public Person {
    int roll;
    int current_class;
public:
    Student(){}
    Student(int roll,int current_class){
        this->roll = roll;
        this->current_class = current_class;
    }
    void printDetails(){
        cout << "Roll : "<<roll<<endl;
        cout<< "Current Class : "<<current_class<<endl<<endl;
    }
    int getRoll(){ return roll; }
    int getCurrent_Class(){ return current_class; }
};

int main(){
    Person person("Varun Das",19,172);
    person.printDetails();
    Student student(71,2);
    student.printDetails();
     
    Person *p[4];
    Person p1("Veedee",17,190);
    Person p2("Veedee2000",22,199);
    Student s1(73,5);
    Student s2(99,1);

    p[0] = &p1;
    p[1] = &s1;
    p[2] = &p2;
    p[3] = &s2;

    for(int i =0;i<4;i++)
        p[i]->printDetails();
    return 0;
}