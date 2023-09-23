/*"	Implement constructor and destructors through your program
"	Write a program to implement inner class in C++*/


#include<iostream>
using namespace std;
#include<string.h>
class Shop
{
	int totalItem;
	char category[20];
	
	public:
		Shop(); //default constructor
		Shop(int,char*); //parameterize constructor
		void showDetails();
		~Shop(); //destructor
		
};

Shop::Shop()
{
//	cout<<"Welcome Customer!"<<endl;
}

Shop::Shop(int totalItem,char category[])
{
	cout<<"Welcome Customer!"<<endl;
	this->totalItem=totalItem;
	strcpy(this->category,category);
}

void Shop::showDetails()
{
	cout<<"Shop Details !"<<endl;
	cout<<"TotalItems = "<<totalItem<<" category= "<<category<<endl;
}
Shop::~Shop()
{
	cout<<"Happy Customer! Thankyou Visit Again"<<endl;
}

int main()
{
	Shop c1(400,"General Store");
	c1.showDetails();
	c1.~Shop();//Destructor Calling 
	
}
