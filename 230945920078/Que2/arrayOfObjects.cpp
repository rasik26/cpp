//Array of Objects (Q2 f)
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
int main(){
	int x[10];
	for(int i = 0 ; i<10; i++){
		A x[i];
	
	}
}
