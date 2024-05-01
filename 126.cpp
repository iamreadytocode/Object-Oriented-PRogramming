/// static varibale
#include <iostream>
using namespace std;

class Race
{
    private:
        int id;
        static int total;
    public:
        Race()
        {
            total ++;
            id = total;
        }
        void Showid()
        {
            cout<<"My id is "<<id<<endl;
//            cout<<"Total is "<<total<<endl;
        }
        static void Showtotal()
        {
            //cout<<"My id is "<<id<<endl;
            cout<<"Total is "<<total<<endl;
        }
        ~Race()
        {
            cout<<"My id was "<<id<<endl;
            cout<<"Total left "<<--total<<endl;
        }
};
int Race::total = 0;
int main()
{
    Race::Showtotal();
    Race r1, r2, r3, r4;
    r1.Showid();
    r1.Showtotal();

    r4.Showid();
    r4.Showtotal();
    
    return 0;
}
