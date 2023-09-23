#include<iostream>
using namespace std;

class A{
	
	public:
		void get()
		{
			cout<<"In A Class !"<<endl;
		}
		
	class B{
		public:
			
			void getB()
			{
				cout<<"In B Class !"<<endl;
			}
	};
};


int main()
{
	A::B bobj;
	bobj.getB();
	
	A aobj;
	aobj.get();
//	A::aobj.getB();//not allowed
}
