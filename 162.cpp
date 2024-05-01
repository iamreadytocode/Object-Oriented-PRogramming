/*Create a Professor class that has data members to holds the Id (int), name (string) and Pub (int). 
Class also includes parameterized constructors and overloaded insertion (<<) and 
extraction (<<) operators’ that displays and get all fields of class Professor. 
Create an ProException class that holds EstimPub (type int). When the user enters Professor data, 
if the pub is below then 10, then throw an ProException object with an appropriate 
message (Pass this String to the ProException’s parent so it can be used in a what () call).
Write a main () function that instantiates a Professor object, allows the user to enter data, 
and displays the data members.*/

#include<iostream>
#include<stdexcept>
using namespace std;

class ProException:public runtime_error{
int Estimpub;
public:
   ProException():Estimpub(0),runtime_error(""){ }
   ProException(string str):runtime_error(str){ }
};
class Professor{
int id;
string name;
int pub;
public:
	Professor():id(0),name(""),pub(0){}
	Professor(int i,string n,int p):id(i),name(n),pub(p){}  
 
    friend istream& operator >>(istream& in,Professor& p);
    friend ostream& operator<<(ostream& out,Professor p);
};
  istream& operator >>(istream& in,Professor& p)
{
	cout<<"Enter the id ";
	in>>p.id;
	cout<<"Enter the name ";
	in>>p.name;
	cout<<"Enter the publications";
	in>>p.pub;
	if(p.pub<10)
	throw ProException("insufficient publications");
}
ostream& operator<<(ostream& out,Professor p)
{
	out<<"The id is "<<p.id<<endl;
	out<<"The name is "<<p.name<<endl;
	out<<"The number of publications is "<<p.pub<<endl;
}
int main(){
try{
		Professor f1,f2;
	cin>>f1;
	cout<<endl;
	cin>>f2;
	cout<<endl;

    cout<<f1;
	cout<<endl;
    cout<<f2;
}
catch(ProException& msg){
	cout<<"ERROR ... "<<msg.what()<<endl;
}	
	
	return 0;
}
