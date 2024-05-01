#include <iostream>
#include <string.h>

using namespace std;

struct Computer
{
    int bno;
    float price;
    char companyname[50];
};

int main()
{                      /// initilization of structure variable
    Computer c1, c2 = {11, 45000, "Del"};

    cout<<"\tEnter Computer-1 details"<<endl;
    cout<<"Enter Brand No ";
    cin>>c1.bno;
    cout<<"Enter Price ";
    cin>>c1.price;
    cin.ignore();
    cout<<"Enter Company Name ";
    cin.getline(c1.companyname, 50);

    ///c2 = c1;

    if (strcmp(c1.companyname, c2.companyname) == 0)
    {
        cout<<"Equals"<<endl;
    }
    else
    {
       cout<<"Not Equals"<<endl;
    }
    return 0;
}
