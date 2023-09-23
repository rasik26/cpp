/*"	Write Date and Time classes that allow you to add, subtract, 
read and print simple dates in dd/mm/yyyy and time in hh:mm:ss formats. 
Use function overloading in your program.
"	Assignments to overload =, ==, +, ++, --, <<, >> and [ ]operators.*/

#include<iostream>
using namespace std;

class Time
{
	int hh,mm,ss;
	public:
		Time();
		Time(int,int,int);
		void Timedisplay();
		friend void operator+(Time&,int);
		friend void operator-(Time&,int);
};

Time::Time()
{
	//cout<<""<<endl;
}

Time::Time(int h,int m,int s){
	cout<<"Have a good day!"<<endl;
	hh=h;
	mm=m;
	ss=s;
	
}

void Time::Timedisplay(){
	cout<<"Current time is :"<<endl;
	cout<<hh<<"/"<<mm<<"/"<<ss<<endl;
}

void operator+(Time &t1,int x)
{
    t1.hh=t1.hh+x;
	t1.mm=t1.mm;
	t1.ss=t1.ss;
	
	//Date::datedisplay();	
}

void operator-(Time &t1,int x)
{
    t1.hh=t1.hh-x;
	t1.mm=t1.mm;
	t1.ss=t1.ss;
	
	//Date::datedisplay();	
}

int main()
{
	Time t1(13,44,53);
	t1.Timedisplay();
	
	t1+5; //addition operator overloaded
	t1.Timedisplay();
	
	t1-5; //substraction operator overloaded
	t1.Timedisplay();
}
