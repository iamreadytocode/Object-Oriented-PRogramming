#include<iostream>
using namespace std;
template<class t1,class t2>
class Employe{
	private:
		t2 eid;
	    t1 ename;
	    t2 esalary;
	public:
	  void getdata(){
	   	cout<<"enter the id ";
	   	cin>>eid;
	   	cout<<"enter the name ";
	   	cin>>ename;
	   	cout<<"enter the salary ";
	   	cin>>esalary;
	   }    
	  void showdata(){
	   	cout<<"The id is "<<eid<<endl;
	   	cout<<"The name is "<<ename<<endl;
	   	cout<<"The  salary is "<<esalary<<endl;
	   }
	  t2 getsalary(){
	  	return esalary;	  	
	  }
};

int main()
{
	Employe<int,char> e1,e2;
	
	e1.getdata();
	e2.getdata();
	cout<<endl;
	
	if(e1.getsalary()>e2.getsalary() )
	e1.showdata();
	else if((e2.getsalary()>e1.getsalary() ))
	e2.showdata();
	
	return 0;
}
