#include<iostream>
using namespace std;

void freq(int arr[],int size)
{   
	for(int i=0;i<size;i++)
	{   int count=0;
		for(int j=0;j<size;j++){
			if(arr[i]==arr[j])
			count+=1;
		}
			cout<<"the number "<<arr[i]<<" repeated "<<count<<"times"<<endl;
	}
}

int main()
{   int size=10;
	int arr[size]={3,7,5,7,3,5,9,8,3,8};
	
	freq(arr,size);
	
	return 0;
}
