#include<iostream>
#include<string.h>

using namespace std;
class Person
{
  private:
    int id;
    string name;
  public:
    Person(): id(0), name("") {}
    Person(int i, char na[]): id(i)
    {
        name= na;
    }
    void showdata1()
    {
        cout<<"Id is "<<id<<endl;
        cout<<"Name is "<<name<<endl;
    }
    void getdata1()
    {
        cout<<"Enter id ";
        cin>>id;
        cout<<"Enter name ";
        cin>>name;
    }
};
class Teacher : public Person
{
    private:
        int salary;
        int publ;
    public:
       Teacher(): Person(), salary(0),publ(0) {}
        Teacher(int i, char na[], int sal,int pub): Person(i, na),  salary(sal),publ(pub) {}
        void showdata2()
        {
            cout<<"The salary is "<<salary<<endl;
            cout<<"The publications of the teacher are "<<publ<<endl;
        }
        void getdata2()
        {
             cout<<"Enter the salary ";
			 cin>>salary;
            cout<<"Enter the publications of the teacher  ";
			cin>>publ;
        }
};
int main()
{
    Teacher s1;
    s1.getdata1();
    s1.getdata2();

    cout<<endl;
    s1.showdata1();
    s1.showdata2();

    return 0;
}
