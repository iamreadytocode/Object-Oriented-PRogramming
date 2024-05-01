#include<iostream>
using namespace std;
int main()
{
	int size=10;
	int arr[size]={4,5,7,9,11,15,17,21,45,77};
	for(int i=0;i<size;i++){
		bool prime=true;
		for(int j=2;j<=arr[i]/2;j++)
		{
			if(arr[i]%j==0)
			prime=false;
		}
		if(prime==false)
		cout<<"The number "<<arr[i]<<"is not prime "<<endl;
		else
      	cout<<"The number "<<arr[i]<<"is  prime "<<endl;
		
	}
	
	return 0;
}
