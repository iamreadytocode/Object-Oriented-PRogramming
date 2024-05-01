#include<iostream>
#include<stdexcept>
using namespace std;

class Distance{
	float feet ; 
	int inches;
	public:
	Distance():feet(0.0f),inches(0){}
	friend istream& operator>>(istream& ,Distance& );
	friend ostream& operator<<(ostream& ,Distance& );

    Distance& operator/(const Distance& d){
    	if(d.feet==0||d.inches==0)
    	throw"Denominator must not be zero";
    	feet=feet/d.feet;
    	inches=inches/d.inches;
    	return *this;
	} 	
};
istream& operator>>(istream& in,Distance& d){
	cout<<"Enter the feet ";
	in>>d.feet;
	if(in.fail())
	throw runtime_error("feet must b integer");
//	throw "feet must b integer";
	
	cout<<"Enter the inches ";
	in>>d.inches;
	if(in.fail())
//	throw runtime_error("inches must b integer");
	throw "inches must b integer";
}
ostream& operator<<(ostream& out,Distance& d ){
	
	out<<"Feet:"<<d.feet<<"\nInches:"<<d.inches;
}
int main()
{try{

	Distance d1,d2,d3;
	cin>>d1;
	cin>>d2;
	d3=d1/d2;
	
	cout<<"Display the result"<<endl;
	cout<<d3;
}
	catch(const char* warn){
		cout<<"WARNING "<<warn<<endl;
	}
	catch(runtime_error& w){
		cout<<"ERROR "<<w.what();
	}

	return 0;
}
