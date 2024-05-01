#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

const int SIZE = 100;

class Myclass
{
	private:
		int id;
		char name[SIZE];
	public:
		Myclass():id(0)
		{
		    strcpy(name,"");
		}
		Myclass(int i, char na[]):id(i)
		{
		    strcpy(name,na);
		}
		void GetData ()
		{
			cout<<"Enter Id ";
			cin>>id;
			cout<<"Enter name ";
			cin>>name;
		}
		void PutData ()
		{
			cout<<"Id "<<id<<endl;
			cout<<"Name "<<name<<endl;
		}
};
int main()
{
	Myclass m,m1;
		
	m.GetData();	
	 
	ofstream out("E:\\asd.txt",ios::binary);
	
		out.write((char*)&m,sizeof(m));	
	
	out.close();
	
	ifstream in("E:\\asd.txt");
	
		in.read((char*)&m1,sizeof(m1));	
	
	in.close();
	
			m.PutData();
	
	return 0;
}
