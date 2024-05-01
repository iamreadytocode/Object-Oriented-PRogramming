#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	ofstream hai;
	hai.open("E:\\abd.txt");
	
	int id;
	string name;
	int  sal;
	char ch;
	do{
		cout<<"Enter the id ";
		cin>>id;
		cout<<"Enter the name ";
		cin.ignore();
		getline(cin,name);
		cout<<"Enter the salary ";
		cin>>sal;
		hai<<"The id is:"<<id<<"\nThe name is:"<<name<<"\nThe salary is"<<sal<<endl;
	cout<<"do you wama cont.....";
	cin>>ch;
	}while(ch=='y');
	hai.close();
	
	ifstream kai;
	string data;
	kai.open("E:\\abd.txt");
	while(kai.eof()==0){
		getline(kai,data);
		cout<<data<<endl;
	}
	kai.close();
	
	return 0;
}
