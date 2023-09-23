#include<iostream>
using namespace std;

class A{
	int c;
	public:
		int a;
	protected:
		int b;
	public:
		void display()
		{
			cout<<"Diaplay of a "<<endl;
			
		}
	   
		
};

class B:private A{
	public:
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};

class c:private B{
	
	
};

int main()
{
	
	B bobj;
    bobj.show();
	
}



