#include<iostream>
using namespace std;

int main()
{
	int* ptr=new int(54);
	cout<<"The value of this pointer is "<<*ptr<<endl;
	float* ptr1=new float(54.654);    
	cout<<"The value of this pointer is "<<*ptr1<<endl;
	
	int* arr=new int[10];
	for(int i=0;i<10;i++){
		arr[i]=i+1;
	cout<<"The value of this pointer is "<<*(arr+i
	)<<endl;
	}
	return 0;
}
