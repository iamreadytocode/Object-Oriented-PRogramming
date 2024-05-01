#include<iostream>
#include<stdexcept>
using namespace std;

class Distance
{
    private:
        int feets;
        float inches;
    public:
        Distance(): feets(0),inches(0.0f){}
        friend istream& operator>>(istream&, Distance&);
        friend ostream& operator<<(ostream&,Distance&);

        Distance& operator / (const Distance& d)
        {
            if(d.feets == 0 || d.inches == 0.0f)
                throw "/ by zero (Denominator)";

            feets = feets / d.feets;
            inches = inches / d.inches;
            return *this ;
        }
};
istream& operator >>(istream& in, Distance& d)
{
    cout<<"Enter Feets ";
    in>>d.feet;
    if(in.fail())
        throw runtime_error("Feets must be Integer");
        //throw "Feets must be Integer";

    cout<<"Enter Inches ";
    in>>d.inches;
    if(in.fail())
        throw runtime_error("Feets must be Integer ");
        //throw "Inches must be Float";
}

ostream& operator << (ostream& out, Distance& d)
{
    out<<"Distance is "<<d.feets<<'\''<<d.inches<<'\"'<<endl;
}

int main()
{
    try
    {
        Distance d1, d2, d3;
        cin >> d1;
        cin >> d2;
        d3 = d1 / d2;

        cout<<"\nDivision result is "<<endl;
        cout << d3;
    }
    catch(const char* msg)
    {
        cout<<"Error."<<msg<<endl;
    }
    catch(runtime_error& e)
    {
        cout<<"Error....."<<e.what()<<endl;
    }
    return 0;
}
