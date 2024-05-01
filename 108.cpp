#include<iostream>
using namespace std;

int fac(int n){
if(n<2){
	return 1;
}	
	return n*fac(n-1);
}

int main()
{
	int a;
	cout<<"enter the number ";
	cin>>a;
	
	cout<<"the factorial value of "<<a<<" is "<<fac(a)<<endl;
	
	return 0;					
}
