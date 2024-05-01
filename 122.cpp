#include<iostream>
using namespace std;

class student{
	string name;
	int rollno;
	int  marks[5];
	int  cert;
	public:
		void getdata();
		float calc();
		void show();
		 student(){
		 	cout<<"this is no argument constructer"<<endl;
		 }	
	~student(){
		 	cout<<"this is a destructer "<<endl;
		 }	
	student comp(student s1,student s2);
};

int main()
{
	student s1,s2,s3;
	
	s1.getdata();
	s2.getdata();
	s1.calc();
	s2.calc();
	
	s3=s3.comp(s1,s2);
	s3.show();
	return 0;
}
void student:: getdata(){
			cout<<"Enter the name of student ";
			cin>>name;
			cout<<"Enter the roll number of student ";
			cin>>rollno;
			cout<<"Enter the certificates obtained ";
			cin>>cert;
			for(int i=0;i<5;i++){
			cout<<"Enter the marks of subject "<<i+1<<"   ";
			cin>>marks[i];
				}
				cout<<endl;}
float student::calc(){
		int total=0;
			for(int i=0;i<5;i++){
			total=total+marks[i];
		}	
		    float percentage=total/500.0f*100;
	return percentage;
		cout<<endl;
			}
void student:: show(){
		cout<<"The name of student is "<<name<<endl;
		cout<<"The  the strudent are "<<rollno<<endl;
		cout<<"The certificates obtained by the strudent are "<<cert<<endl;
				for(int i=0;i<5;i++){
			cout<<"The marks in subject "<<i+1<<" are "<<marks[i]<<endl;
		}
		cout<<"The percentage obtained by the student is "<<calc()<<endl;
		cout<<endl;
		}
student student::comp(student s1,student s2){
		if(s1.calc()>s2.calc()){
			return s1;
		}
		else if(s2.calc()>s1.calc())
		return s2;
	}
