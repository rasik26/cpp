#include<iostream>
using namespace std;

class A{
        			
	protected:
	    int a;
	
	public:
		A(){
			cout<<"In default of A \n";
		}
		A(int p,int q,int r){
			cout<<"In para of A \n";
			a=p;
			
		}
		void display(){
			cout<<a<<b<<c<<endl;
		}
};


class B :protected A{
	
	public:
		B(int p,int q):A(p){
			cout<<"In para of B"<<endl;
			b=q;
		}
		void display(){
			A::display();
			cout<<b<<endl;
			cout<<a<<endl;
		}
};

class C :protected A{
	
	public:
		B(int p,int q):A(p){
			cout<<"In para of B"<<endl;
			b=q;
		}
		void display(){
			A::display();
			cout<<b<<endl;
			cout<<a<<endl;
		}
};


int main(){
	B bobj(10,20);
	bobj.display();
}
	
	
	
	
	
	
	
	
	
	
	
