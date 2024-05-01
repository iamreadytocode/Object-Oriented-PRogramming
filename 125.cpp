#include<iostream>
using namespace std;

class Rational
{
    private:
        int num,dnum;
	public:
        void getdata();
        void ShowRational();
        Rational():num(0),dnum(1) {}

        Rational(int n,int dn):num(n),dnum(dn) {}
        Rational addrational(const Rational rr2)const;
};

int main()
{
	const Rational r1(5,6);
	Rational r2,r3;
	r2.getdata();

	r3 = r1.addrational(r2);

	r3.ShowRational();
	return 0;
}
	void Rational::getdata(){
		cout<<"Enter the number ";
        cin>>num;
		cout<<"Enter the D number ";
        cin>>dnum;
	}
		void Rational::ShowRational(){
		cout<<"The numer in p/q form is "<<num<<'/'<<dnum<<endl;
	}
  Rational	Rational::addrational	(const Rational rr2)const
	{
		Rational temp;
		temp.num = num*rr2.dnum + rr2.num * dnum;
		temp.dnum = dnum * rr2.dnum;
		return temp;
	}
