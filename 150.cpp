#include<iostream>
using namespace std;

class Shopitem{
	int price,itno;
	public:
		void setdata(int a,int b){
			price=b;
			itno=a;
		}
	    void getdata(){
	    	cout<<"THE item number is "<<itno<<endl;
	    	cout<<"THE item price is "<<price<<endl;
		}
};

int main(){
	int size=4;
	int p,q;
	Shopitem* ptr=new Shopitem[size];
	Shopitem* temp=ptr;
	for(int i=0;i<size;i++){
		cout<<"Enter the item number and its price "<<i+1<<endl;
		cin>>q>>p;
		ptr->setdata(q,p);
		ptr++;
	}
		for(int i=0;i<size;i++){
        temp->getdata();
		temp++;	
}
	return 0;
}
