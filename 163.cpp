#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{

    ifstream firead;
    firead.open("D:\\second.txt",ios::in);


    if(firead.fail()==true)
    {
        cout<<"File not opened"<<endl;
        exit(1);
    }
    ofstream fiwrite;
    fiwrite.open("D:\\finding.txt",ios::out);


    if(firead.fail()==true)
    {
        cout<<"File not created"<<endl;
        exit(1);
    }
  char ch[100];
   char finded[10];
    char replaced[10];
    cout<<"Enter the word to find in the file ";
    cin>>finded;
    cout<<"Enter the word to replace ";
    cin>>replaced;
   while(!firead.eof())
   {
    firead>>ch;

    if(strcmpi(ch,finded)==0)
          fiwrite<< replaced;

    else if(strcmpi(ch,finded)!=0)
          fiwrite<<' '<<ch<<' ';
   }

   firead.close();
    fiwrite.close();

    return 0;
}
