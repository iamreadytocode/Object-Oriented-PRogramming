#include<iostream>
using namespace std;

class String{
	private:
		string word;
		public:
			String():word(" "){}
			String(string str):word(str){}
			void getdata();
			void showdata();
			
			
			String operator +(const String &ss)const
			{
				String temp;
				temp=word+ss.word;
				return temp;
			}
			bool operator >(const String &ss)const
			{
				return word>ss.word?true:false;
			}
			String operator +=(String &ss)
			{
				
				word+=ss.word;
				return word;
			}
			
			~String(){}
};

int main()
{
	const	String s1("Ahmed ");
		String s2,s3;
	s2.getdata();
	
	s3=s1+s2;
	s3.showdata();
	if(s1>s2)
	cout<<"s1 is larger value "<<endl;
else
	cout<<"s2 is larger value "<<endl;
s2+=s3;
s2.showdata();
	return 0;
}
void String::getdata(){
				cout<<"Enter the word ";
				cin>>word;
			}
void String:: showdata(){
				cout<<"Show the input word "<<word<<endl;				
			}
