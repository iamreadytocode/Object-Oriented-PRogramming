#include<iostream>
#include<stdexcept>
using namespace std;

class Number{
	int no;
	string name;
	public:
	 Number():name(" "),no(0){}
    friend istream& operator>>(istream& in,Number& n);
   friend ostream& operator<<(ostream& out,Number& n);
    
    Number& operator +(Number& n1){
    	
    	no=no+n1.no;	
    	return *this;
	}
	Number& operator = (Number& n)
        {

            name=n.name;
            no=n.no;
            return *this;
        }
};
istream& operator>>(istream& in,Number& n){
		cout<<"Enter name ";
		in>>n.name;
		cout<<"Enter number ";
		in>>n.no;
		if(cin.fail())
		throw runtime_error("wrong input");
	}
	ostream& operator<<(ostream& out,Number& n){
		out<<"The name is"<<n.name<<endl;
		out<<"The number is "<<n.no<<endl;
	}

int main(){
try{
		Number n1,n3,n2,n4;
		cin>>n1;
		cin>>n2;
		cout<<endl;
		n3=n1+n2;
		cout<<n3<<endl;
		n4=n2;
		cout<<n4<<endl;
}
	catch(runtime_error& e){
		cout<<"ERROR....."<<e.what()<<endl;
	}
	
	return 0;
}

