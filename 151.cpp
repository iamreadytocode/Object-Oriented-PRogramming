#include<iostream>
using namespace std;

class Base{
	public:
		int var1;
		void Display(){
			cout<<"Display the number "<<var1<<endl;
		}
};
class Derived:public Base{
	public:
		int var2;
		void Display(){
			cout<<"Display the number "<<var1<<endl;
			cout<<"Display the number "<<var2<<endl;
}
};

int main()
{
	Base* bptr;
	Base obj1;
	Derived obj2;
	
	bptr=&obj2;
	bptr->var1=560;
	bptr->Display();

     Derived* dptr;
	dptr=&obj2;
	dptr->var1=340;
	dptr->var2=980;
	dptr->Display();
	
	return 0;
}
