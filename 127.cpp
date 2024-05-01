#include<iostream>
using namespace std;
class Complex;

class Calculator{
	public:
		int add(int n,int m){
			return (n+m);
		}
		int addcomplex(Complex ,Complex );
};

class Complex{
	private:
		int a,b;
		friend int Calculator:: addcomplex(Complex ,Complex );
		public:
			void setnumeber(int n1,int n2){
				a=n1;
				b=n2;
			}
			void shownumber(){
				cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
			}
};
int Calculator:: addcomplex(Complex o1,Complex o2){
			return (o1.a+o2.a);
		}
int main()
{
	Complex c1,c2;
	c1.setnumeber(5,6);
	c2.setnumeber(3,4);
	
	Calculator c3;
	
	int asf=c3.addcomplex(c1,c2);
	cout<<"The sum of real real part of complex number is "<<asf<<endl;
	return 0;
}
