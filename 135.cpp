#include<iostream>
using namespace std;

class Base{
	private:
	int a;
	public:
	int b;
		void setdata(){
            b=20;
			a=10;
		}
	int geta(){
		return a;
	}
	 int getb(){
		return b;
	}
};
class Derived:public Base{
	int c;
    public:
	void cal(){
		c=b*geta();
		
	}
	void showdata(){
		cout<<"The value of a is "<<geta()<<endl;
		cout<<"The value of b is "<<b<<endl;
		cout<<"The value of c is "<<c<<endl;
		
	}
	
	
};
int main()
{
	Derived d;
    d.setdata();
	d.cal();
	d.showdata();
	
	return 0;
}
