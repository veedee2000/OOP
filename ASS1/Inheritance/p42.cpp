#include <iostream>

using namespace std;

class Employee {
	string name;
	float salary;
public:
	Employee() {};
	Employee(string name, float salary) {
		this->name = name;
		this->salary = salary;
	}
	string getName() {return name;}
	float getSalary() {return salary;}
	virtual void printDetails() {
		cout <<"Name: "<<name<<endl;
		cout <<"Salary: "<<salary<<endl<<endl;
	}
};

class Manager : public Employee {
	string type;
public:
	Manager() {};
	Manager(string type, string name, float sal) : Employee(name,sal) {
		this->type = type;
	}
	string getType() {return type;}
	void printDetails() {
		cout<<"Name: "<<getName()<<endl;
		cout<<"Salary: "<<getSalary()<<endl;
		cout<<"Type of Manager: "<<type<<endl<<endl;
	}
};

class Clerk : public Employee {
	int allowance;
public:
	Clerk() {};
	Clerk(int allowance, string name, float sal) : Employee(name,sal) {
		this->allowance = allowance;
	}
	int getAllowance() {return allowance;}
	void printDetails() {
		cout<<"Name: "<<getName()<<endl;
		cout<<"Salary: "<< getSalary()<<endl;
		cout<<"Allowance: "<<allowance<<endl<<endl;
	}
};


int main() {

	Manager m("SWE4", "VD", 2315);
	m.printDetails();

	Clerk c(3425, "Varun", 246.00);
	c.printDetails();

	Employee* p[6];
	Manager m1("SWE5", "Anjan", 2470);
	Manager m2("SWE6", "Soham", 2460);
	Clerk c1(156, "Diamond", 4624.57);
	Clerk c2(930, "Jewel", 262.64);
	Employee e1("Varun", 902);
	Employee e2("Kingshuk", 8001);
	p[0] = &e1;
	p[1] = &e2;
	p[2] = &m1;
	p[3] = &m2;
	p[4] = &c1;
	p[5] = &c2;

	float sal = 0;
	for (int i = 0; i < 6; ++i)
	{
		p[i]->printDetails();
		sal += p[i]->getSalary();
	}

	cout << "Total Salary of all the employees: " << sal <<endl;

	return 0;
}