#include<iostream>
using namespace std;

template<class t>
t function(t x){
t f=(x*x*x*x*x)/5.0f;	
	return f;
}

int main()
{
   float a;
	a=function(4.2);
	cout<<a;
	
	return 0;
}
