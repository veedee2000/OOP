#include<iostream>
// #define LOG(x) std::cout << x << std::endl
using namespace std;

const double PI = 3.14;
class Shape2D{

public:
	Shape2D(){}
	virtual double area() = 0;
	virtual double perimeter() = 0;
};

class Circle: public Shape2D {
	double r;
public:
	Circle(){}
	Circle(double r){
		this -> r = r;
	}

	double area(){
		double area =  PI * r * r;
		return area;
	}
	double perimeter(){
		return (2 * PI * r);
	}

};

class Rectangle : public Shape2D {
	double height,breadth;
public:
	Rectangle(){}
	Rectangle(double height, double breadth){
		this -> height = height;
        this -> breadth = breadth;
	}

	double area(){
		return (height * breadth);
	}
	double perimeter(){
		return (2 * (height + breadth));
	}

};

int main(){
	Circle circle(5.34);
    cout<<"Area of circle: "<<circle.area()<<endl;
    cout<<"Perimeter of circle: "<<circle.perimeter()<<endl<<endl;

	Rectangle rectangle(22.1,2);
    cout<<"Area of rectangle: "<<rectangle.area()<<endl;
    cout<<"Perimeter of rectangle: "<<rectangle.perimeter()<<endl<<endl;

	Shape2D *p[5];

	Circle c1(4.34),c2(6.3),c3(8.42);
	Rectangle r1(4.42,1),r2(32.4,1.11);

	p[0]= &c1;
	p[1]= &c2;
	p[2]= &c3;
	p[3]= &r1;
	p[4]= &r2;

	for(int i = 0; i < 3; ++i){
		cout<<"Area of rectangle: "<<p[i] -> area()<<endl;
        cout<<"Perimeter of rectangle: "<<p[i] -> perimeter()<<endl<<endl;
	}
	for(int i = 3; i < 5; ++i){
        cout<<"Area of rectangle: "<<p[i] -> area()<<endl;
        cout<<"Perimeter of rectangle: "<<p[i] -> perimeter()<<endl<<endl;
	}
	return 0;
}