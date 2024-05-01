#include<iostream>
using namespace std;

class Time{
	private:
	int hours;
	int mins;
	bool am;
	public:
		Time():hours(0),mins(0){}
		Time(int hours,int mins):hours(hours),mins(mins){}
		void calctime(){
			
		if(mins>=60){
			mins=mins-60;
			hours++;
		}	
		
		if(hours>=1&&hours<12){
		hours=hours;
		am=true;
		}
		if(hours>=12&&hours<24){
		am=false;
		hours=hours-12;
		}	
		if(hours==0||hours==24){
		hours=12;
		am=true;
		}
	}
    void showtime(){
    	if(am==true){
    			cout<<"THe civilian time is ";
		if(hours<10)cout<<"0";
		cout<<hours<<":";
		if(mins<10)cout<<"0";
		cout<<mins<<" am"<<endl;
    			} if(am==false){
    			cout<<"THe civilian time is ";
		if(hours<10)cout<<"0";
		cout<<hours<<":";
		if(mins<10)cout<<"0";
		cout<<mins<<" pm"<<endl;	
		}	
    }	
};
int main()
{
	Time t(20,66);
	
	t.calctime();
	t.showtime();
	
	
	return 0;
}
