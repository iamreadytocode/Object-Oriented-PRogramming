//Question 12 	Define a class REPORT with the following specification:
//Private members :
//adno	4 digit admission number
//name	20 characters
//marks	an array of 5 floating point values
//average	average marks obtained
//GETAVG()	a function to compute the average obtained in five subject
//Public members:
//READINFO()	function to accept values for adno, name, marks. Invoke
//	the function GETAVG () 
//DISPLAYINFO () 	function to display all data members of report on the 
// 	screen.
//You should give function definitions. 

#include<iostream>
using namespace std;
template<class t1,class t2,class t3>
class REPORT{
	public:
		t1 adno;
	    t2 name[20];
	    t1 marks[5];
	    t3 avg;
	    t3 GETAVG(){
			float sum=0;
			for(int i=0;i<5;i++){
				sum=sum+marks[i];
			}
				avg=sum/5.0f;
				return avg;
		}
		void READINFO(){
			cout<<"Enter the admission number ";
			cin>>adno;
			cout<<"Enter the name ";
			cin>>name;
		for(int i=0;i<5;i++){
			cout<<"Enter the marks of subject "<<i+1<<" ";
			cin>>marks[i];
		}
		GETAVG ();
		cout<<endl;
	}
	void DISPLAYINFO (){
		if(adno<10000)
		cout<<"The admission number is "<<adno<<endl;
		else
		{cout<<"Limit exceeded"<<endl;		}
		cout<<"The names  is "<<name<<endl;
		for(int i=0;i<5;i++){
			cout<<"The marks of subject "<<i+1<<" are "<<marks[i]<<endl;
	}
	cout<<"The average of the marks is "<<avg<<endl;
	cout<<endl;
	}
};

int main(){
	REPORT<int,char,float> r1,r2;
	
	
	cout<<"For the first student "<<endl;
	r1.READINFO();
	cout<<"For the second student "<<endl;
	r2.READINFO();
	cout<<"For the first student "<<endl;
	r1.DISPLAYINFO();
	cout<<"For the second student "<<endl;
	r2.DISPLAYINFO();
	
	return 0;
}
