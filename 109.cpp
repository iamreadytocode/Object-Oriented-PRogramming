#include<iostream>
using namespace std;

int fab(int n){
	if(n<2){
		return 1;
	}
	return fab(n-2)+fab(n-1);
}

int main()
{
	int a;
	cout<<"enter the number ";
	cin>>a;
	
	cout<<"the fabonacci series for "<<a<<" is "<<fab(a);
	
	return 0;
}
