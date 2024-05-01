#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
  private:
    int id;
    string name;
  public:
    Employee(): id(0), name("") {}
    Employee(int i, char na[]): id(i)
    {
        name=na;
    }
    void showdata()
    {
        cout<<"Id is "<<id<<endl;
        cout<<"Name is "<<name<<endl;
    }
    void getdata()
    {
        cout<<"Enter id ";
        cin>>id;
        cout<<"Enter name ";
        cin>>name;
    }
};
class Manager : public Employee
{
    private:
        string title;
        int clubd;
    public:
        Manager(): Employee(), title(""),clubd() {}
        Manager(int i, char na[] ,char tit[],int sd): Employee(i, na),clubd(sd), title(tit) {}
        void showdata()
        {
            Employee::showdata();
            cout<<"Title is "<<title<<endl;
            cout<<"club dues are "<<clubd<<endl;
        }
        void getdata()
        {
            Employee::getdata();
            cout<<"Enter title ";
            cin>>title;
            cout<<"Enter club dues ";
            cin>>clubd;
        }
};
class Scientist : public Employee
{
    private:
        int publ;
    public:
        Scientist(): Employee(),publ(0){}
        Scientist(int i, char na[] ,int pub): Employee(i, na),publ(pub) {}
        void showdata()
        {
            Employee::showdata();
            cout<<"Pulications are "<<publ<<endl;
        }
        void getdata()
        {
            Employee::getdata();
            cout<<"Enter publications ";
            cin>>publ;
        }
};
class Labourer: public Employee{
	public:
		Labourer(): Employee() {}
         Labourer(int i, char na[] ): Employee(i, na) {}
	
};
int main()
{
    Manager m1;
    m1.getdata();
    cout<<endl;
    m1.showdata();
    cout<<"\n\nScientist Detail"<<endl;
    Scientist s1(11,"Aslam",12);
    s1.showdata();
    cout<<endl;
    cout<<"\nLabour details"<<endl;
    Labourer l1(123,"Adil");
    l1.showdata();
    return 0;
}
