#include<iostream>
using namespace std;

class batsman{
	string name;
	int inings;
	int score;
	public:
		batsman(){
			cout<<"watashi wa construta"<<endl;
		}
		batsman(string nm, int in,int sc):name(nm),inings(in),score(sc)
		{
			cout<<"watashi wa san arg  construta"<<endl;
		}
		~batsman(){
			cout<<"watashi wa distruta"<<endl;
		}
		void getdata();
		void showdata()const;
		int average()const;
		batsman better(const batsman bb1,const batsman bb2)const;
};

int main()
{
	
    const	batsman b1("asd",5,580);
	batsman b2,b3;
//	b1.getdata();
	b2.getdata();
	
	b3=b3.better(b1,b2);
	b3.showdata();
	
	return 0;
}
	void batsman::getdata()
		{	cout<<"Enter the name of batsman ";
			cin>>name;
			cout<<"Enter the inings played ";
			cin>>inings;
			cout<<"Enter the runs scored ";
			cin>>score;
			cout<<endl;
			}
	void batsman::showdata()const{
		cout<<"The name of student is "<<name<<endl;
		cout<<"The  inings played are "<<inings<<endl;
		cout<<"The runs scored by the batsman are "<<score<<endl;	
		cout<<"The average of batsman is "<<average()<<endl;			
		}
	int batsman::average()const{
			int average=score/inings;
			return average;
		}
	batsman batsman:: better(const batsman bb1,const batsman bb2)const
		{
			if(bb1.average()>bb2.average())
			return bb1;
			else if(bb2.average()>bb1.average())
			return bb2;
		}
