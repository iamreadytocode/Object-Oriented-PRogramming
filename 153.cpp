#include <iostream>
using namespace std;

class Distance
{
    private:
        int feets;
        float inches;
    public:
        Distance(): feets(0), inches(0.0f) {} /// No arg constructor
        Distance(int f, float inc): feets(f), inches(inc) {} /// Two arg constructor
        Distance(float tfeets) /// one argument (conversion constructor)
        {
            feets = tfeets;
            inches = (tfeets-feets)*12.0f;
        }
        void setdist (int f, float inc)
        {
            feets = f;
            inches = inc;
        }
        void getdist() //get length from user
        {
            cout << "\nEnter feet: ";
            cin >> feets;
            cout << "Enter inches: ";
            cin >> inches;
        }
        void Showdist () const
        {
            cout<<"Distance is "<<feets<<'\''<<inches<<'\"'<<endl;
        }
        /// d3 = 10.1 + d2;
        friend Distance operator + (Distance, Distance);
        ~Distance() {}
};
int main()
{
    Distance d1(1, 1.1f), d2(2, 2.1f), d3, d4, d5, d6;

    d1.Showdist();
    d2.Showdist();
    cout<<endl;

    d3 = d1 + 10.1f;
    cout<<"Result is "<<endl;
    d3.Showdist();

    cout<<endl;

    d4 = 10.1f + d2;
    cout<<"Result is "<<endl;
    d4.Showdist();

    cout<<endl;
    d5 = 10.1f + 20.1f;
    cout<<"Result is "<<endl;
    d5.Showdist();

    cout<<endl;
    d6 = d1 + d2;
    cout<<"Result is "<<endl;
    d6.Showdist();
    
    return 0;
}        ///                  10.1          20.1
Distance operator + (Distance dd1, Distance dd2)
{
    Distance temp;
    temp.feets =  dd1.feets + dd2.feets;
    temp.inches = dd1.inches + dd2.inches;

    while(temp.inches >= 12.0f)
    {
        temp.inches -= 12.0f;
        temp.feets++;
    }
    return temp;
}
  
