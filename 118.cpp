//Define a class Flight in C++ with following description:
//Private Members
//A data member Flight number of type integer
//A data member Destination of type string
//A data member Distance of type float
//A data member Fuel of type float
//A member function CALFUEL() to calculate the value of Fuel as per the following criteria
//Distance			Fuel
//<=1000			500
//more than 1000 and <=2000 		1100
//more than 2000 			2200
//Public Members
//A function FEEDINFO() to allow user to enter values for Flight Number, Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel
//A function SHOWINFO() to allow user to view the content of all the data members 


#include<iostream>
using namespace std;

class flight{
	private:
		int fno;
		string dest;
		float d,fl;
		float calfuel(){
			if(d<=1000)
			fl=500;
			else if(d>1000&&d<=2000)
			fl=1100;
			else if(d>2000)
			fl=2200;
			return fl;
		}
	public:
	   void feedinfo(){
	   	cout<<"Enter the flight number ";
	   	cin>>fno;
	   	cout<<"Enter the flight destination ";
	   	cin>>dest;
	   	cout<<"Enter the distance covered ";
	   	cin>>d;
	   	calfuel();
	   	cout<<endl;
	   }
	void SHOWINFO(){
		cout<<"The flight number is "<<fno<<endl;
		cout<<"The flight destination is "<<dest<<endl;
		cout<<"The flight distance is "<<d<<endl;
		cout<<"The fuel consumption is "<<fl<<endl;
	    cout<<endl;
	}
};

int main(){
	 flight f1,f2;
	
	cout<<"For the first flight "<<endl;
	f1.feedinfo();
	cout<<"For the second flight "<<endl;
	f2.feedinfo();
	cout<<"For the first flight "<<endl;
	f1.SHOWINFO();
	cout<<"For the second flight "<<endl;
	f2.SHOWINFO();
	
	return 0;
}
