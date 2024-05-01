#include<iostream>
using namespace std;

struct complex{
	int real,imaginary;
};
void get(complex& c){
	cout<<"Enter the real  number";
	cin>>c.real;
	cout<<"Enter the imaginary  number";
	cin>>c.imaginary;
}
complex add(complex c1,complex c2){
complex temp;	
	temp.imaginary=c1.imaginary+c2.imaginary;
	temp.real=c1.real+c2.real;
	return temp;
}
void show(complex c){
	
	cout<<"The complex number is "<<c.real<<"+"<<c.imaginary<<"i"<<endl;
	
}
int main()
{
	complex c1,c2;
	get(c1);
	get(c2);

    complex c3= add(c1,c2);
    	
    	show(c3);
	return 0;
}
