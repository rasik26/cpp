#include<iostream>
using namespace std;

class A
{
	int a;
	public:
	A()
	{
		cout<<"in default of A \n";
	}
	A(int a)
	{
		cout<<"in para of A \n";
		this->a=a;
	}
	void display()
	{
		cout<<"in display of A class |n";
		cout<<"value of A";
	}
};

class B: public A
{
	public:
	B()
	{
		//implictly compiler will call parent defalut constructor
		cout<<"in default of B \n";
	}
	void display()
	{
		cout<<"in display of B class |n";
	}
}; 
 
int main()
{
	B bobj;
	bobj.display();
}

