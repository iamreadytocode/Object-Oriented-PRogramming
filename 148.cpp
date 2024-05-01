#include<iostream>
using namespace std;

class Person{
protected:
	string name;
    int age;
public:
	Person():name(""),age(0){}
    Person(string nmae,int ag):name(nmae),age(ag){}
    void getdata(){
    	cout<<"Enter the name ";
    	cin>>name;
    	cout<<"Enter the age  ";
    	cin>>age;
    	}
    void showdata(){	
    	cout<<"The name is "<<name<<endl;
    	cout<<"The age is "<<age<<endl;    	
    }
};
class Student{
protected:
	string subject;
	int id;
public:
	Student():subject(""),id(0){}
    Student(string sub,int ide):subject(sub),id(ide){}
    void getdata(){
    	cout<<"Enter the name of subject ";
    	cin>>subject;
    	cout<<"Enter the id  ";
    	cin>>id;
    	}
    void showdata(){	
    	cout<<"The subject is "<<subject<<endl;
    	cout<<"The id is "<<id<<endl;    	
    }
};
class Doctor:public Person,public Student{
protected:
	string spec;
public:
	Doctor():Person(),Student(),spec(""){}
    Doctor(string sp,string sub,int ide,string nmae,int ag):Person(),Student(),spec(sp){}
    void getdata(){
    	Person::getdata();
    	Student::getdata();
    	cout<<"Enter the name of specialization ";
    	cin>>spec;
    	cout<<endl;
		}
    void showdata(){
		Person::showdata();
    	Student::showdata();	
    	cout<<"The specialization is "<<spec<<endl;
cout<<endl;    
	}
};



int main()
{
	Doctor dd1,dd2;
	dd1.getdata();
	dd2.getdata();
	dd1.showdata();
	dd2.showdata();
	return 0;
}
