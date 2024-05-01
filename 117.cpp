//Define a class TEST in C++ with following description:
//Private Members
//TestCode of type integer
//Description of type string
//NoCandidate of type integer
//CenterReqd (number of centers required) of type integer
//A member function CALCNTR() to calculate and return the number of centers as
//(NoCandidates/100+1)
//Public Members 
//- A function SCHEDULE() to allow user to enter values for TestCode, Description, NoCandidate & call function CALCNTR() to calculate the number of Centres
//- A function DISPTEST() to allow user to view the content of all the data members 

#include<iostream>
using namespace std;

class TEST{
	private:
		int testcode;
		string description;
		int nocandidate,centerreqd;
		int calcntr(){
			centerreqd=( nocandidate/100+1);
			return centerreqd;
		}
	public:
		void schedule(){
			cout<<"Enter the TestCode ";
			cin>>testcode;
			cout<<"Enter the description of the test ";
			cin>>description;
			cout<<"Enter the number of candidates for the test ";
			cin>>nocandidate;
			cout<<endl;
			calcntr();
		}
		void disptest(){
			cout<<"Display the TestCode "<<testcode<<endl;
			cout<<"Display the description of the test "<<description<<endl;
			cout<<"Display the number of candidates for the test "<<nocandidate<<endl;
			cout<<"Display the number of centers for the test "<<centerreqd<<endl;
			cout<<endl;
		}
};

int main(){
	TEST t1,t2;
	
	cout<<"For the first test "<<endl;
    t1.schedule();
	cout<<"For the second test "<<endl;
	t2.schedule();
	cout<<"For the first test "<<endl;
	t1.disptest();
	cout<<"For the second test "<<endl;
	t2.disptest();	
	return 0;
}
