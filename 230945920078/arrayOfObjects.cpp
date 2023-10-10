//Array of Objects (Q2 f)

#include<iostream>
using namespace std;

class A{
 	int a,b, sum;
	public:
		A()						//having zero parameter
		{
			cout<<"in default of A\n"<<endl;
			
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
	
}
