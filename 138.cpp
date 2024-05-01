#include<iostream>
using namespace std;

class Time {
	private:
		int hours;
		int mins;
		bool am;

	public:
		Time() : hours(12), mins(0), am(true) {}

		Time(int h, int m, bool a):hours(h),mins(m),am(a) 
{
			if (m >= 60) 
{
				h += m / 60;
				m %= 60;
			}

			if (!=a) {
				if (h >= 1 && h <= 12) {
					h += 12;
				}
				else if (h == 12) {
					h = 0;
				}
			}

			
		}

		void showtime() {
			cout << "The military time is " << hours << ":" << mins << endl;
		}
};

int main() {
	Time t(5, 45, false);
	t.showtime();
	
	return 0;
}
