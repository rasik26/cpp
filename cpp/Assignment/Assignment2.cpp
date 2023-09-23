#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"In Default constructor of A !"<<endl;
		}
		~A()
		{
			cout<<"In Default descructor of A! "<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"In Default constructor of B !"<<endl;
		}
		~B()
		{
			cout<<"In Default descructor of B! "<<endl;
		}
};
class C:public A
{
	public:
		C()
		{
			cout<<"In Default constructor of C !"<<endl;
		}
		~C()
		{
			cout<<"In Default descructor of C! "<<endl;
		}
};

int main()
{
	C cobj;
	B bobj;
}
