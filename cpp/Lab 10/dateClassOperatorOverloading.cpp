/*"	Write Date and Time classes that allow you to add, subtract, 
read and print simple dates in dd/mm/yyyy and time in hh:mm:ss formats. 
Use function overloading in your program.
"	Assignments to overload =, ==, +, ++, --, <<, >> and [ ]operators.*/

#include<iostream>
using namespace std;

class Date
{
	int dd,mm,yyyy;
	public:
		Date();
		Date(int,int,int);
		void datedisplay();
		friend void operator+(Date&,int);
		friend void operator-(Date&,int);
};

Date::Date()
{
	//cout<<""<<endl;
}

Date::Date(int d,int m,int y){
	cout<<"Have a good day!"<<endl;
	dd=d;
	mm=m;
	yyyy=y;
	
}

void Date::datedisplay(){
	cout<<"Todays date is :"<<endl;
	cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
}

void operator+(Date &d1,int x)
{
    d1.dd=d1.dd+x;
	d1.mm=d1.mm;
	d1.yyyy=d1.yyyy;
	
	//Date::datedisplay();	
}

void operator-(Date &d1,int x)
{
    d1.dd=d1.dd-x;
	d1.mm=d1.mm;
	d1.yyyy=d1.yyyy;
	
	//Date::datedisplay();	
}

int main()
{
	Date d1(23,9,2023);
	d1.datedisplay();
	
	d1+5; //addition operator overloaded
	d1.datedisplay();
	
	d1-5; //substraction operator overloaded
	d1.datedisplay();
}
