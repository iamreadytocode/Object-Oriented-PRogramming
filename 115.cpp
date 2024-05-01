//Define a class student with the following specification
//Private members of class student
//admno	integer
//sname	20 character
//eng. math, science	float
//total	float
//ctotal()	a function to calculate eng + math + science with float return type.
//Public member function of class student
//Takedata()	Function to accept values for admno, sname, eng, science     
// 	and invoke ctotal() to calculate total.
//Showdata()	Function to display all the data members on the screen. 


#include<iostream>
using namespace std;

class student{
	private:
		int admno;
		char sname[20];
		float eng,math,science,total;
		float ctotal(){
			total=0;
			total=eng+math+science;
			return total;
		}
		public:
		void takedata(){
			cout<<"Enter the admission number ";
			cin>>admno;
			
			cout<<"Enter the name ";
			cin>>sname;
			
			cout<<endl;
			cout<<"ENTER THE MARKS FOR ENGLISH ";
			cin>>eng;
			cout<<"ENTER THE MARKS FOR SCIENCE ";
			cin>>science;
			cout<<"ENTER THE MARKS FOR MATHS ";
			cin>>math;
			cout<<endl;
			
			ctotal();
		
		}
		void showdata(){
			cout<<endl;
		cout<<"The admission number is "<<admno<<endl;
		cout<<"The name of student is "<<sname<<endl;
		cout<<" THE MARKS FOR ENGLISH ARE "<<eng<<endl;;
		cout<<" THE MARKS FOR SCIENCE ARE "<<science<<endl;
		cout<<" THE MARKS FOR MATHS ARE "<<math<<endl;
		cout<<"THE TOTAL IS "<<total<<endl;
		}
};


int main()
{
	student s1,s2;
	
	s1.takedata();
	s2.takedata();
	
	s1.showdata();
	s2.showdata();

	return 0;
}
