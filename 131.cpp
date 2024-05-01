#include<iostream>
#include<string.h>
using namespace std;

const int size=50;
class String{
	private:
		char word[50];
		public:
			String(){word;}
			String(char str[]){
			strcpy(word,str);
			}
			void getdata();
			void showdata();
			
			
			String operator +(const String &ss)const
			{
				String temp;
				strcpy(temp.word,word);
				strcat(temp.word,ss.word);
				return temp;
			}
			bool operator >(const String &ss)const
			{
				return strcmp(word,ss.word)==1?true:false;
			}
				bool operator <(const String &ss)const
			{
				return strcmp(word,ss.word)==-1?true:false;
			}
				bool operator ==(const String &ss)const
			{
				return strcmp(word,ss.word)==0?true:false;
			}
			String operator +=(String &ss)
			{
				strcat(word,ss.word);
				return (word);
			}
			
			~String(){}
};

int main()
{
	const	String s1("Ahmed");
		String s2,s3;
	s2.getdata();
	
	s3=s1+s2;
	s3.showdata();
	if(s1>s2)
	cout<<"s1 is larger value "<<endl;
else if (s1<s2)
	cout<<"s2 is larger value "<<endl;
	else
	cout<<"both are equal values "<<endl;
	
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
