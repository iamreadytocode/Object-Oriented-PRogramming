#include <iostream>
using namespace std;

class Distance {
	private:
	int feet;
	float inches;
	public:
	Distance():feet(0),inches(0){} 
	Distance(int f,float inc):feet(f),inches(inc){} 
	void setDistance(int f,float inc);
	void getDistance();
    void showDistance()const;
    
    Distance operator +(const Distance& dd)const
    {
    	cout<<"This is + operator "<<endl;
    	Distance temp;
    	temp.feet=feet+dd.feet;
    	temp.inches=inches+dd.inches;
    	while(temp.inches>=12.0f){
    		temp.inches-=12.0f;
    		temp.feet++;
		}
		return temp;
	}
	 Distance operator -(const Distance& dd)const
    {
    	cout<<"This is - operator "<<endl;
    	Distance temp;
    	temp.feet=feet-dd.feet;
    	temp.inches=inches-dd.inches;
    	while(temp.inches>=12.0f){
    		temp.inches-=12.0f;
    		temp.feet++;
		}
		return temp;
	}
	 Distance operator *(const Distance& dd)const
    {
    	cout<<"This is * operator "<<endl;
    	Distance temp;
    	temp.feet=feet*dd.feet;
    	temp.inches=inches*dd.inches;
    	while(temp.inches>=12.0f){
    		temp.inches-=12.0f;
    		temp.feet++;
		}
		return temp;
	}
	bool operator >(const Distance& dd)const
	{
		cout<<"This is > operator "<<endl;
		float f1=feet+inches/12.0f;
		float f2=dd.feet+dd.inches/12.0f;
		
		return f1>f2?true:false; 
	}
		bool operator <(const Distance& dd)const
	{
		cout<<"This is < operator "<<endl;
		float f1=feet+inches/12.0f;
		float f2=dd.feet+dd.inches/12.0f;
		
		return f1<f2?true:false; 
	}
		bool operator ==(const Distance& dd)const
	{
		cout<<"This is == operator "<<endl;
		float f1=feet+inches/12.0f;
		float f2=dd.feet+dd.inches/12.0f;
		
		return f1==f2?true:false; 
	}
		 Distance operator +=(const Distance& dd)
    {         
    	feet +=dd.feet;
    	inches += dd.inches;
    	
		while(inches>=12.0f){
    		inches-=12.0f;
    		feet++;
		}
		return Distance(feet,inches);
	}
	~Distance(){}
};

int main()
{
	const Distance d1(3,3.3);
	Distance d2,d3,d4;
	d2.setDistance(2,2.2);
	d3.setDistance(4,4.4);
	d4.getDistance();
	
	d1.showDistance();
	d2.showDistance();
	d3.showDistance();
	d4.showDistance();
	
	Distance d5(5,5.5);
	d5=d1+d2-d3*d4;
	d5.showDistance();
	
	if(d2>d3)
	cout<<"d2 is greater "<<endl;
	else if(d2<d3)
	cout<<"d2 is smaller "<<endl;
	else
	cout<<"Both are equal "<<endl;
	
	d3+=d2;
	d3.showDistance();
	return 0;
}
void Distance::setDistance(int f,float inc){
		feet=f;
		inches=inc;
	}
void Distance::getDistance(){
		cout<<"Enter the feets ";
		cin>>feet;
		cout<<"Enter the inches ";
		cin>>inches;
	}
void Distance::showDistance()const
    {cout<<"The feets are "<<feet<<endl;
    cout<<"The inches are "<<inches<<endl;
	}
