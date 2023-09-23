#include<iostream>
using namespace std;

class A
{
	int c=10;
	public:
		int a=9;
	protected:
		int b=56;
	public:
    A(){
    	cout<<"in A"<<endl;
	}
};

class B: private A{
	public:
	B(){
		cout<<"in B "<<a<<" "<<b<<endl;
	}
};

class C: private B{
	public:
		C(){
			cout<<"In c "<<a<<" "<<b<<endl;
		}
};


int main(){
	B bobj;
	//C cobj;
	
}
