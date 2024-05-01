#include<iostream>
using namespace std;

class Bankaccount{
	string name;
	int accno;
	string atype;
	int balance;
	public:
		 Bankaccount():name(""),accno(0),atype(""),balance(0){ }
		 Bankaccount(string n,int an,string at,int bal):name(n),accno(an),atype(at),balance(bal){ }
		 
		 void deposit(){
		 	int deposit;
		 	cout<<"Deposit some ammount ";
		 	cin>>deposit;
		 	if(deposit<=0)
		 	{cout<<"ERROR ERROR ERROR"<<endl;
			 }
		 	else
		 	balance=balance+deposit;
		 }
		 void withdraw(){
		 	int withdraw;
		 	cout<"Enter withdraw ammoount ";
		 	cin>>withdraw;
		 	if(withdraw>balance||withdraw<0)
		 {		cout<<"ERROR ERROR ERROR"<<endl;
		 }
		 	else
			 balance=balance-withdraw;
		 }
		 void show(){
		 	cout<<"The name is "<<name<<endl;
		 	cout<<"The account number is "<<accno<<endl;
		 	cout<<"The account type is "<<atype<<endl;
		 	cout<<"The current balance is "<<balance<<endl;
		
		 }
		 
		 
};

int main(){
	 Bankaccount ba("Abdullah",12321434345,"current account",46000);
	ba.deposit();
	ba.withdraw();
	ba.show();
	
	return 0;
}
