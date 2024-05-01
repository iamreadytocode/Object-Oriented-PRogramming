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

        /// declaration of M.F
        void setdist (int f, float inc);
        void getdist();
        void Showdist () const;
        /// Distance d3 = d1 + d2;
        Distance operator +(const Distance& dd) const
        {
            cout<<"operator +"<<endl;
            Distance temp;
            temp.feets =  feets + dd.feets;
            temp.inches = inches + dd.inches;

            while(temp.inches >= 12.0f)
            {
                temp.inches -= 12.0f;
                temp.feets++;
            }
            return temp;
      }
      /// Distance d3 = d1 - d2;
        Distance operator - (const Distance& dd) const
        {
            cout<<"operator -"<<endl;
            Distance temp;
            temp.feets =  feets - dd.feets;
            temp.inches = inches - dd.inches;

            while(temp.inches >= 12.0f)
            {
                temp.inches -= 12.0f;
                temp.feets++;
            }
            return temp;
      }
    /// Distance d3 = d1 * d2;
        Distance operator * (const Distance& dd) const
        {
            cout<<"operator *"<<endl;
            Distance temp;
            temp.feets =  feets * dd.feets;
            temp.inches = inches * dd.inches;

            while(temp.inches >= 12.0f)
            {
                temp.inches -= 12.0f;
                temp.feets++;
            }
            return temp;
      }
       bool operator > (const Distance& dd) const
        {
            cout<<"operator >"<<endl;
            float tfeets1 = feets + inches/12.0f;
            float tfeets2 = dd.feets + dd.inches/12.0f;

            return tfeets1>tfeets2?true:false;
      }
      bool operator < (const Distance& dd) const
        {
            cout<<"operator <"<<endl;
            float tfeets1 = feets + inches/12.0f;
            float tfeets2 = dd.feets + dd.inches/12.0f;

            return tfeets1<tfeets2?true:false;
      }
      bool operator == (const Distance& dd) const
      {
            cout<<"operator =="<<endl;
            float tfeets1 = feets + inches/12.0f;
            float tfeets2 = dd.feets + dd.inches/12.0f;

            return tfeets1 == tfeets2?true:false;
      }
      /// arithmatic assignment opt
      /// d3 += d2;
        Distance operator +=( const Distance& dd)
        {
            cout<<"operator +="<<endl;
            feets += dd.feets;
            inches += dd.inches;

            while(inches >= 12.0f)
            {
                inches -= 12.0f;
                feets++;
            }
            return Distance(feets, inches);
      }


      ~Distance() {}/// destructor
};
int main()
{
    const Distance d1(1, 1.1f);
    Distance d2, d3(2, 2.1f), d4(5, 1.5f);
    d2.getdist();

    d1.Showdist();
    d2.Showdist();
    d3.Showdist();
    d4.Showdist();


    Distance d5 = d1 + d2 - d3 * d4;

    cout<<"Result is "<<endl;
    d5.Showdist();

    cout<<endl;

    if(d1 > d2)
        cout<<"d1 is largest distance"<<endl;
    else if (d1 < d2)
        cout<<"d2 is largest distance"<<endl;
    else
         cout<<"d1 and d2 are equals distance"<<endl;

    Distance d6;
    d6 = d3 += d2;
    d3.Showdist();

    return 0;
}

void Distance::setdist (int f, float inc)
{
    feets = f;
    inches = inc;
}
void Distance::getdist() //get length from user
{
    cout << "\nEnter feet: ";
    cin >> feets;
    cout << "Enter inches: ";
    cin >> inches;
}
void Distance::Showdist () const
{
    cout<<"Distance is "<<feets<<'\''<<inches<<'\"'<<endl;
}
