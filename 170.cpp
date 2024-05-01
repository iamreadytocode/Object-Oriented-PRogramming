#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
	private:
		int id;
		char name[30];
		float salary;
	public:
		void GetData()
		{
			cout<<"Enter Id :";
			cin>>id;
			cout<<"Enter Name :";
			cin>>name;
			cout<<"Enter Salary :";
			cin>>salary;
		}
		void PutData()
		{
			cout<<"Id :"<<id<<endl;
			cout<<"Name :"<<name<<endl;
			cout<<"Salary :"<<salary<<endl;
		}
};

int main()
{
	ofstream file;
	file.open("E:\\Text.txt",ios::binary);

	Employee emp;
	emp.GetData();
	file.write((char*)&emp,sizeof(emp));
	file.close();

	ifstream in;
	in.open("E:\\Text.txt",ios::binary);
	if(in.fail())
	{
		cout<<"File not found"<<endl;
		exit(1);
	}

	Employee e;
	in.read((char*)&e,sizeof(e));
	e.PutData();
	in.close();
	return 0;
}
