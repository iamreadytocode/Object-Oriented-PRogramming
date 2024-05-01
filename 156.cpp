#include <iostream>
using namespace std;

class Myclass
{
    private:
        int no;
    public:
        Myclass() : no(0)
        {
            cout<<"i am no argument constructor "<<this<<endl;
        }
        Myclass(int n) : no(n)
        {
            cout<<"i am one argument constructor "<<this<<endl;
        }
        Myclass(Myclass& m)
        {
            cout<<"Copy Constructor"<<endl;
            this->no = m.no;
        }
        /// obj3 = obj4 = obj1;
        Myclass& operator = (Myclass& m)
        {
            cout<<" = operator"<<endl;
            this->no = m.no;
            return *this;
        }
        void get()
        {
            cout<<"Enter No ";
            cin>>no;
        }
        void show()
        {
            cout<<"No is "<<this->no<<endl;
        }
        ~Myclass()
        {
            cout<<"i am destructor "<<this<<endl;
        }
};
int main()
{
    Myclass obj1(11);
    cout<<"In main() "<<&obj1<<endl;

    Myclass obj2(obj1);
    obj2.show();

    Myclass obj3, obj4;
    obj3 = obj4 = obj1;
    return 0;}
