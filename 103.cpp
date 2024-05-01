#include<iostream>
using namespace std;

void common(int s,int arr1[],int arr2[]);

int main()
{
	int size=5;
	int arr1[size]={3,4,5,6,7,8};
	int arr2[size]={6,7,10,9,6,8};
	
	
	common(size,arr1,arr2);
	
	
	return 0;
}
void common(int s,int arr1[],int arr2[])
{
	int com[s];
	int comn=0;
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++){
			if(arr1[i]==arr2[j]){
				com[comn]=arr1[i];
				comn++;
			}
		}		
	}
		for(int i=0;i<comn;i++)
		{
			cout<<"The common number is "<<com[comn]<<endl;
		}
}
