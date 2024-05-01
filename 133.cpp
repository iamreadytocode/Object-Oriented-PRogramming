#include<iostream>
using namespace std;
const int size=10;
class Dumb{
	private: 
	int arr[size];
	public:
		Dumb(){
			for(int i=0;i<size;i++){
				arr[i]=0;
			}
		}
	int& operator[](int i){
		if(i<0||i>=size){
			cout<<"This exceedes the limit of the array "<<endl;
			exit(1);
		}
		return arr[i];
	}
	
};

int main()
{
	Dumb d;
	for(int j=0;j<size;j++){
		d[j]=j*23;
	}
	for(int j=0;j<size;j++){
		int temp=d[j];
		cout<<"The value at "<<j<<" is "<<temp<<endl;
	}	
	return 0;
}
