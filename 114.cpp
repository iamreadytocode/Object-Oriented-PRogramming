#include<iostream>
using namespace std;

class student{
	private:
	int marks[5];
	public:
	void input(){
		for(int i=0;i<5;i++){
			cout<<"ENTER THE MARKS OF "<<i+1<<" SUBJECT "<<endl;
			cin>>marks[i];
	}}
	int sum(){
		int sum=0;		
			for(int i=0;i<5;i++){
				sum=sum+marks[i];
	}
	return sum;
}
    float avg(){
    float	average=sum()/5.0f;
    	return average;
	}
};

int main()
{
	student s1;
	
	s1.input();
	cout<<endl;
	cout<<"the sum is "<<s1.sum()<<endl;
	cout<<endl;
	cout<<"the average of 5 subjects is "<<s1.avg()<<endl;
	return 0;
}
