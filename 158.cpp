#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
		int bal,amt;
	bal=1000;
	try{
	cout<<"Enter the amount ";
	cin>>amt;
	if(amt<=0){
		throw runtime_error("Invalid deposit ammount");
	}	
	else
		bal=bal+amt;
		
	cout<<"The ammount is "<<bal<<endl;
		
		cout<<"Enter the the withdrawn ammount ";
		cin>>amt;
		if(amt<=0||amt>bal){
		throw runtime_error("Invalid withdrawn ammount ");
	}	else
	    bal=bal-amt;
	cout<<"The ammount is "<<bal<<endl;
	}
	catch(runtime_error& line){
		cout<<line.what();
		
	}
	
	return 0;
}

