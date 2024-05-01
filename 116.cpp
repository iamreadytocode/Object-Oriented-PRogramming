//	Define a class batsman with the following specifications:
//Private members:
//bcode	4 digits code number
//bname	20 characters
//innings, notout, runs	integer type
//batavg	it is calculated according to the formula 
// 	batavg =runs/(innings-notout)
//calcavg()	Function to compute batavg
//Public members:
//readdata()	Function to accept value from bcode, name, innings,  
// 	notout and invoke the function calcavg()
//displaydata()	Function to display the data members on the screen. 

#include<iostream>
using namespace std;

class batsman{
	private:
		int bcode;
	    char bname[20]; 
	    int inings,notout,runs; 
	    float batavg;
	    float calavg(){
	    	batavg=0;
	    	batavg=runs/(inings-notout);
	    	return batavg;
		}
		public:
		void readdata(){
				cout<<"Enter the batsman code ";
				cin>>bcode;
				cout<<"enter the batsman name ";
				cin>>bname;
				cout<<"Enter the inings played ";
				cin>>inings;
				cout<<"Enter the runs scored ";
				cin>>runs;
				cout<<"Enter how many time the batsman was notout ";
				cin>>notout;
				cout<<endl;
				calavg();				
			}
			void displaydata(){
				cout<<"The batsman code is "<<bcode<<endl;
				cout<<"The batsman name is "<<bname<<endl;
				cout<<"The batsman played "<<inings<<" inings"<<endl;
				cout<<"The batsman scored "<<bcode<<" runs"<<endl;
				cout<<"The batsman was notout "<<notout<<" times"<<endl;
				cout<<"The batsman average is "<<batavg<<endl;	
				cout<<endl;							
			}
};

int main()
{
	batsman b1,b2;
	cout<<"For batsman no.1"<<endl;
	b1.readdata();
	cout<<"For batsman no.2"<<endl;
	b2.readdata();

	cout<<"For batsman no.1"<<endl;	
	b1.displaydata();
		cout<<"For batsman no.2"<<endl;
	b2.displaydata();
	
	return 0;
}
