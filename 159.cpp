/// stack Class with build in Exception (inherited)
#include <iostream>
#include <stdlib.h>
#include <stdexcept>
using namespace std;

class Stack : runtime_error
{
    private:
        int arr[5];
        int top;
    public:
        Stack(): runtime_error(""), top(-1){}
        void Push(int var)
        {
            if(top >= 4)
            {
                throw runtime_error ("Stack overflow");
            }
            arr[++top] = var;
        }
        int pop()
        {
            if(top == -1)
            {
                throw runtime_error ("Stack under flow");
            }
            return arr[top--];
        }
};
int main()
{
    Stack s;
    try
    {
        s.Push(11);
        s.Push(12);
        s.Push(13);
        s.Push(14);
        s.Push(15);
        s.Push(16);
        cout<<"value is "<<s.pop()<<endl;
        cout<<"value is "<<s.pop()<<endl;
        cout<<"value is "<<s.pop()<<endl;
        cout<<"value is "<<s.pop()<<endl;
        cout<<"value is "<<s.pop()<<endl;
        ///cout<<"value is "<<s.pop()<<endl;
    }
    catch(runtime_error& e)
    {
        cout<<"Error..."<<e.what()<<endl;
    }
    cout<<"Bye Bye"<<endl;
    return 0;
}
