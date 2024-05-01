#include<iostream>
using namespace std;

 float profit(int amnt,float intr=1.06){
	
	return amnt*intr;
}


int main()
{
	int money;
	cout<<"enter the amount ";
	cin>>money;
	
	cout<<"the total amount is "<<profit(money,1.1)<<endl;
	
	return 0;
}
