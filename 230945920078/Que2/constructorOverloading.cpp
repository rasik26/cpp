//Constructor Overloading (Q2 e)

#include<iostream>
using namespace std;

class A{
 	int a,b, sum;
	public:
		A()						//having zero parameter
		{
			cout<<"in default of A\n"<<endl;
			
		}
		
		A(int a)				//having single parameter
		{
			cout<<"single parameter"<<endl;
			this->a=a;
		}
		A(int a, int b){		// having two parameters
			this->a=a;
			this->b=b; 
			sum= a+b;
			cout<<"with 2 parameter, sum of 2 number is ="<<sum<<endl;
		}
		void display()
		{
			cout<<"in display of class A\n"<<endl;
			cout<<this->a<<endl;
		}
	
};

int main(){
	A a(10);		// passing 1 parameter 
	a.display();
	A a1(1,3);		// passing 2 parameter
	a1.display();
	A a2();			// passing 0 parameter
	a1.display();
}
