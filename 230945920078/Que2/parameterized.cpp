//Parameterized Constructor (Q2 c)
#include<iostream>
using namespace std;

class A
{ int a;
	public:
		A()
		{
			cout<<"in default of A\n";
			
		}
		
		A(int a)
		{
			cout<<"in parametrized constructor of A\n";
			this->a=a;
		}
		void display()
		{
			cout<<"in display of class A\n";
			cout<<this->a<<endl;
		}
};

class B: public A
{	int b;
	public:
		B()
		{
			cout<<"in default of B\n";
		}
		B(int b):A(10) // base class initialisation list only for constructor
		{
			cout<<"in parametrized constructor of B\n";
			this->b=b;
		}
		
		
		void display()
		{
			A::display();
			cout<<"in display of class B\n";
			cout<<b<<endl;
		}
};

int main()
{
	B b1(10);	// object creation of class B
	b1.display();
}
