#include <iostream>
#include <string.h>

using namespace std;
class Employee
{
private:
    int id;
    string name;
    int Salary;
public:
    Employee():id(0),name(""),Salary(0)
    {
        cout<<"i am no argument constructor"<<endl;
    }
    Employee(int i, string na, int sal):id(i),Salary(sal)
    {
        name= na;
        cout<<"i am Two arguments constructor"<<endl;
    }
    void GetData()
    {
        cout << "Enter Employee  ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Employee  Name: ";
        cin>>name;
        cout << "Enter Employee  Salary: ";
        cin >> Salary;
        cin.ignore();
    }
    void Display()
    {
        cout << "The Employee ID: " << id << endl;
        cout << "The Employee Name: " << name << endl;
        cout << "The Employee Salary: " << Salary << endl ;
    }
    ~Employee()
    {
        cout<<"i am Destructor "<<endl;
    }
};
void MyFunction(Employee *ptr)
{
    ptr->Display();
    cout<<ptr<<endl;
}

Employee* Function()
{
    Employee *ptr = new Employee(1, "Ali", 250000);
    return ptr;
}

int main()
{
    int *ptrint = new int;
    *ptrint = 100;
    cout<<100<<endl;

    Employee *ptremp = new Employee();
    ptremp->GetData();
    cout<<ptremp<<endl;
    MyFunction(ptremp);
    delete ptremp;

    Employee *ptremp1=Function();
    ptremp1->Display();
    delete ptremp1;

    return 0;
}
