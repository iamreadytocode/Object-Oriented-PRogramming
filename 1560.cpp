#include<iostream>
#include<stdexcept>
using namespace std;

class track:runtime_error
{
	int n;
	int arr[5];
	public:
		track():runtime_error(""),n(-1){}
		void put(int a){
			if(n>4){
				throw runtime_error("overflow");
				
			}
			arr[++n]=a;
		}
			
			int give(){
			if(n<0){
				throw runtime_error("youre finished");
				
			}
		return arr[n--];
		}
};

int main(){
	track t;
	try{
	t.put(5);
	t.put(10);
	t.put(15);
	t.put(20);
	t.put(25);
	cout<<endl;

	cout<<t.give()<<endl;
	cout<<t.give()<<endl;
	cout<<t.give()<<endl;
	cout<<t.give()<<endl;
	cout<<t.give()<<endl;
	cout<<t.give()<<endl;
}
catch(runtime_error& l){
	cout<<l.what()<<endl;
}
	return 0;
}
