#include<iostream>
using namespace std;

class time{
   private:
   	int hrs;
   	int min;
   	int sec;
   	public:
   		void gettime(){
   			cout<<"enter the hours ";
   			cin>>hrs;
   			cout<<"enter the minutes ";
   			cin>>min;
   			cout<<"enter the seconds ";
   			cin>>sec;
		   }
		void showtime(){
			cout<<"The total time is "<<hrs<<":"<<min<<":"<<sec<<endl;
		}   
};

int main()
{
	time t1,t2;
	
	t1.gettime();
	cout<<endl;
	t2.gettime();
	
	t1.showtime();
	cout<<endl;
	t2.showtime();
	
	return 0;
}
