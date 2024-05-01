#include<iostream>
#include<string.h>
using namespace std;
int main(){
	 char name1[20];
	 char name2[20]={'z','o','h','a','i','b'};
	
	cout<<"Enter the name of student ";
	cin>>name1;
	
	
	if(strcmp(name1,name2)==0){
		cout<<"ERROR    ERROR     ERROR    ERROR\n    YE FARIGH BANDA HA "<<endl;
	}
	return 0;
}
