#include<iostream>
#include<fstream>
#include<string.h>

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
	if(!kai){
		cout<<"File not opened "<<endl;
		exit(1);
	}
	ofstream dayo;
	dayo.open("E:\\temp.txt");
		if(!dayo){
		cout<<"File not opened "<<endl;
		exit(1);
	}
	char ch[100];
	while(!kai.eof()==true){
		
		kai.getline(ch,100);
		dayo<<sat<<endl;
	}
	kai.close();
	dayo.close();
	if(ch[0]==)
	
	return 0;
}
