#include<iostream>
using namespace std;

int product(int no1,int no2){
	static int c=0;
	c=c+1;
	
	return no1*no2+c;
}


int main()
{
  int a,b;
  cout<<"enter the value ";	
	cin>>a;
  cout<<"enter the value ";	
	cin>>b;
	
	cout<<"display the value "<<product(a,b)<<endl;
	cout<<"display the value "<<product(a,b)<<endl;
	cout<<"display the value "<<product(a,b)<<endl;
	cout<<"display the value "<<product(a,b)<<endl;
	cout<<"display the value "<<product(a,b)<<endl;
	cout<<"display the value "<<product(a,b)<<endl;
	cout<<"display the value "<<product(a,b)<<endl;
	cout<<"display the value "<<product(a,b)<<endl;
	cout<<"display the value "<<product(a,b)<<endl;
	cout<<"display the value "<<product(a,b)<<endl;
	return 0;
}
