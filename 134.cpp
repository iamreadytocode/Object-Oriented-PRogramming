#include<iostream>
using namespace std;

class Employee{
	public:
	int id ;
	float salary;
	Employee(){}
	Employee(int idd){
	id=idd;
	salary=50000;
	}	
}; 

class Programmer:public Employee{
	public:
	Programmer(int idd){
		id=idd;
		salary=200000;
	}
	int plang=8;
	void showdata(){
		cout<<"The id of the  programmer is "<<id<<endl;
		cout<<"The salary of the  programmer is "<<salary<<endl;
	}
	
};


int main(){
	Employee e1(1),e2(2);
	
	cout<<"EMPLOYEE information is "<<e1.id<<"  "<<e1.salary<<endl;
	cout<<"EMPLOYEE information is "<<e2.id<<"  "<<e2.salary<<endl;
	
	Programmer p1(4);
	cout<<"PROGRAMMER information is "<<endl;
//	cout<<"PROGRAMMER information is "<<p1.id<<endl;
	p1.showdata();
	cout<<"PROGRAMMER information is "<<p1.plang<<endl;
	return 0;
}
