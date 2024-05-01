#include<iostream>
using namespace std;
struct time
{
    int hour;
    int min;
    int sec;
};
int time_sec(time);
int main()
{
    time s;
    cout<<"enter hours :"<<endl;
    cin>>s.hour;
    cout<<"enter min : "<<endl;
    cin>>s.min;
    cout<<"enter sec : "<<endl;
    cin>>s.sec;
    int total;
    total=time_sec(s);
    cout<<"the total time is "<<total<<" seconds"<<endl;
    return 0;
}
int time_sec(time t)
{
    int total;
    total=t.hour*3600+t.min*60+t.sec;
    return total;
}
