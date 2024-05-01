//Question 11	Define a class BOOK with the following specifications :
//Private members of the class BOOK are
//BOOK NO	integer type
//BOOKTITLE	20 characters
//PRICE	float (price per copy)
//TOTAL_COST()	A function to calculate the total cost for N number of  
// 	copies where N is passed to the function as argument. 
//Public members of the class BOOK are
//INPUT ()	function to read BOOK_NO. BOOKTITLE, PRICE
//PURCHASE ()	function to ask the user to input the number of copies to be
// 	purchased. It invokes TOTAL_COST() and prints the total 
// 	cost to be paid by the user. 
//Note: You are also required to give detailed function definitions. 

#include<iostream>
using namespace std;

class book{
	private:
		int bno;
		char btl[20];
		float pr;
		float total_cost(int nb){
			float total=nb*pr;
			return total;			
		}
	public:
	   void INPUT (){
	   	cout<<"Enter the book number ";
        cin>>bno;
		cout<<"Enter the book title ";
        cin>>btl;
	   	cout<<"Enter the book price ";
        cin>>pr;
        cout<<endl;
	   }
	void PURCHASE (){
		int no;
		cout<<"Enter the number of copies required ";
		cin>>no;
		cout<<"The book number is "<<bno<<endl;
		cout<<"The book title is "<<btl<<endl;
		cout<<"The book price is "<<pr<<endl;
		cout<<"The total cost  is "<<total_cost(no)<<endl;
		cout<<endl;
	}
};

int main(){
	book b1,b2;
	
	cout<<"For the first book"<<endl;
    b1.INPUT();
	cout<<"For the second book"<<endl;
	b2.INPUT();	
	cout<<"For the first book"<<endl;
	b1.PURCHASE();
	cout<<"For the second book"<<endl;
	b2.PURCHASE();
	return 0;
}
