//Constructor Destructor and Conter  (Q2 a, b)
#include<iostream>
using namespace std;
int counter=0;

class A
{	
 public :
    A()
    {
 		cout << "Inside const A " << endl;
 		counter++;
	} 
	~A()
	{
	   cout << "Inside dest A " << endl;	
	}
	
};
class B : public A
{
	public :
   		B()
   		{
   			cout<< "Inside const B " << endl;
   			counter ++;
   		}
   ~B()
   {
   		cout << "Inside dest B " << endl;	
   }
	
};
class C : public B
{
	public:
   		C()
   		{
   			cout<< "Inside const C " << endl;
   			counter ++;
		}
   		~C()
   		{
   			cout << "Inside dest C " << endl;	
   		}
};

int main()
{

	B b;
	C c;
	
	cout<<"Number of function calls ="<<counter<<endl;
}


