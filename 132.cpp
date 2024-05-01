#include<iostream>
using namespace std;
const int size=10;

class Num{
	private:
		int arr[size];
		public:
    Num(){
	for(int i=0;i<size;i++){
		arr[i]=0;
	}	}	
	int& operata(int i){
		if (i<0||i>=size){
		 	cout<<"This excedes the limits of the array "<<endl;
	}
	return arr[i];
}
	
};

int main()
{
	Num n;
	 
	 for(int j=0;j<size;j++){
	 	n.operata(j)=j*5;
	 }
	 	for(int i=0;i<size;i++){
	 		int temp=n.operata(i);
	 		cout<<"The value at "<<i<<" is "<<temp<<endl;
	 	}
	 		
	return 0;
}
