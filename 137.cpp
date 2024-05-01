#include<iostream>
using namespace std;

class Time{
	private:
	int hours;
	int mins;
	bool am;
	public:
		Time():hours(12),mins(00),am(true){	}
	Time(int hours,int mins,bool am):hours(hours),mins(mins),am(am){
//	}
	
//	void calc(){
		if(mins>=60){
			mins=mins-60;
        hours++;   
		}
		if(am==true){
			hours=hours;
			if(hours==12){
				hours=0;
			}
		}
		if(am==false){
				hours=hours+12;
				
				if(hours>=24){
				hours=hours-12;
				}
			}
	}
	void showtime(){
		cout<<"THe military time is ";
		if(hours<10)cout<<"0";
		cout<<hours<<":";
		if(mins<10)cout<<"0";
		cout<<mins<<endl;
	}
};

int main(){
	
	Time t(12,45,false);
//	t.calc();
	t.showtime();
	return 0;
}
