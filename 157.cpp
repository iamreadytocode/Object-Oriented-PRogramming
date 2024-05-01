#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string word;
	ofstream gout("word.text");
	cout<<"Enter the word ";
	getline(cin,word);
	gout<<word;
	
	
	ifstream gin("word.text");
	gin>>word;
	return 0;
}
