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
		   return(pgc>500)?true:false;
			}
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
	 char choice ;
	 do{  
      		cout<<"B for books"<<endl;
	 	cout<<"T for tape"<<endl;
	 	cout<<"Enter your choice ";
	 	cin>>choice;
	 	if(choice=='t'||choice=='T'){
	 		ptr[i]=new Tape();
	 		ptr[i++]->getdata();
					 } 		
	 	else if(choice=='b'||choice=='B'){
	 	ptr[i]=new Book();
		ptr[i++]->getdata();
					 } 	
		else
		cout<<"Invalid option";
		cout<<"Do you want to continue y/n";
		cin>>choice;
		             
		 }while(choice=='y'||choice=='Y');
	 
	 for(int j=0;j<i;j++){
	 	if(ptr[j]->Oversize()==true)
	 	cout<<"OVERSIZE"<<endl;
	 	ptr[j]->putdata();
	 	cout<<endl;
	}
	 	
	return 0;
}

//: A publishing company that markets both book and audiocassette versions of its works. Create a class called publication that stores the title (a string or c-string)
// and price (type float) of a publication. From this class derive two classes: book, which has a page count (type int) and tape: which has a playing time in minutes
//  (type float). Each of the three classes should have a getdata() function to get its data from the user at the keyboard, and a putdata () function to display the data.
//   Add a member function Oversize () to the book and tape classes. Let’s say that a book with more than 500 pages, or a tape with a playing time longer than 90 minutes,
//    is considered oversize. You can access this function from main () and display the string “Oversize” for oversized books and tapes when you display their data.
//	 Define appropriate constructors and detractor into the above said classes. 
//Write a main () program that creates an array of pointers to publication. In a loop, ask the user for data about a particular book or tape.
