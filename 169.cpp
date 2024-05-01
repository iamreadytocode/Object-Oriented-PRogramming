#include<iostream>
using namespace std;

class Publication{
	protected:
		string name;
	    float price ;
	    public:
	    	Publication():name(""),price(0.0f){}
	    	virtual void getdata(){
			cout<<"Enter the name ";
			cin>>name;
			cout<<"Enter the price ";
			cin>>price;

			}
	        virtual void putdata(){
	        	cout<<"The name is "<<name<<endl;
	        	cout<<"The price is "<<price<<endl;
			}
			virtual bool Oversize(){}
	        ~Publication(){}
};

class Book:public Publication{
	int pgc;
	public:
            Book():Publication(),pgc(0){}
	    	void getdata(){
			Publication::getdata();
			cout<<"Enter the page count ";
			cin>>pgc;
			}
	        void putdata(){
	        	Publication::putdata();
	        	cout<<"The page count is "<<pgc<<endl;

			}
		    bool Oversize(){
		   return(pgc>500)?true:false;			}
	        ~Book(){}
};
class Tape:public Publication{
	float pt;
	public:
            Tape():Publication(),pt(0.0f){}
	    	void getdata(){
			Publication::getdata();
			cout<<"Enter the play time ";
			cin>>pt;
			}
	        void putdata(){
	        	Publication::putdata();
	        	cout<<"The play time is "<<pt<<endl;
			}
		    bool Oversize(){
		    	return (pt>90)?true:false;
			}
	        ~Tape(){}
};
int main (){
	Publication *ptr[50];
	int i=0;
	char ch;
	do{
		cout<<"b for book"<<endl;
		cout<<"t for tape"<<endl;
		
		cout<<"Enter your choice ";
		cin>>ch;
		if(ch=='t'||ch=='T')
		{
			ptr[i]=new Tape;
			ptr[i++]->getdata();
		}
		else if(ch=='b'||ch=='B')
		{
			ptr[i]=new Book;
			ptr[i++]->getdata();
		}	
		else
		cout<<"Invalid option ....."<<endl;
		cout<<"Do you want to contijnue....";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	
	for(int k=0;k<50;k++){
		if(ptr[k]->Oversize()==true)
		cout<<"OVERSIZE......"<<endl;
		ptr[k]->putdata();
		cout<<endl;
	}
	 	
	return 0;
}

