#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

/*class String
{
    private:
        string str;
    public:
        String():str(""){}
        String(string s):str(s){}
        void getstr()
        {
            cout<<"Enter String ";
            getline(cin,str);
        }
        void showstr()
        {
            cout<<"String is "<<str<<endl;
        }
        String operator + (const String& S) const
        {
            ///String SS;
            ///SS.str = str + S.str;
            return String(str + S.str);
        }
        String operator += (const String& S)
        {
            str += S.str;
            return String(str);
        }
        bool operator > (const String& S) const
        {
            return str > S.str?true:false;
        }
        bool operator < (const String& S) const
        {
            return str < S.str?true:false;
        }
};
*/
const int SIZE = 50;

class String
{
    private:
        char str[50];
    public:
        String():str(""){}
        String(char s[])
        {
            strcpy(str,s);
        }
        void getstr()
        {
            cout<<"Enter String ";
            cin.getline(str, 50);
        }
        void showstr()
        {
            cout<<"String is "<<str<<endl;
        }
        String operator + (const String& S) const
        {
            String temp;
            if(strlen(str) + strlen(S.str) >= SIZE-1)
            {
                cout<<"String length is over flow"<<endl;
                exit(1);
            }
            strcpy(temp.str, str);
            strcat(temp.str, S.str);
            return temp;
        }
        String operator += (const String& S)
        {
            String temp;
            if(strlen(str) + strlen(S.str) >= SIZE-1)
            {
                cout<<"String length is over flow"<<endl;
                exit(1);
            }
            strcat(str, S.str);
            return String(str);
        }
        bool operator > (const String& S) const
        {
            return strcmp(str,S.str) == 1?true:false;
        }
        bool operator < (const String& S) const
        {

            return strcmp(str,S.str) == -1?true:false;
        }
        bool operator == (const String& S) const
        {

            return strcmp(str,S.str) == 0?true:false;
        }
};

int main()
{
    String s1, s2("Ali");
    s1.getstr();

    String s3 =  s1 + s2;
    s3.showstr();

    String s4 = s1 += s3;

    s1.showstr();
    s4.showstr();
    if(s1 > s4)
        cout<<"S1 is largest string"<<endl;
    else if (s1 < s4)
        cout<<"S2 is largest string"<<endl;
    else
        cout<<"Both are equals"<<endl;
	return 0;
}
