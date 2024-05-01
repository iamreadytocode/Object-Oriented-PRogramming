#include<iostream>
using namespace std;

class person{
	private:
		int pid;
	    float psalary;
	public:
	   person(int,float){
	   	cout<<"I am two argument constructer"<<endl;
	pid=213;
	psalary=45000;
	   }
	  void getdata();
	  void showdata();
};

int main()
{
	person p1,p2;
	
	p1.getdata();
	p2.person();
	cout<<endl;
	
	p1.showdata();
	p2.showdata();
		
	return 0;
}
void person::getdata(){
	   	cout<<"enter the id ";
	   	cin>>pid;
	   	cout<<"enter the salary ";
	   	cin>>psalary;
	   }
	   void person::showdata()
	   {cout<<"The id is "<<pid<<endl;
	   	cout<<"The  salary is "<<psalary<<endl;
	   }
