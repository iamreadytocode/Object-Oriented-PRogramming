#include<iostream>
using namespace std;

struct player{
	int distance;
	int minutes;
	int seconds;
};
void get(player& p){
	cout<<"Enter the distance ";
	cin>>p.distance;
	cout<<"Enter time in minutes ";
	cin>>p.minutes;
    cout<<"Enter time in seconds ";
	cin>>p.seconds;
	p.seconds=p.seconds+p.minutes*60;
}
int main()
{
	player p1,p2;
	get(p1);
	get(p2);
	
	float sp1=p1.distance/p1.seconds;
	float sp2=p2.distance/p2.seconds;
	
	if(sp1>sp2)
	cout<<"player 1 is the winner"<<endl;
    else if(sp1<sp2)
	cout<<"player 2 is the winner"<<endl;
	
	
	
	
	return 0;
}
