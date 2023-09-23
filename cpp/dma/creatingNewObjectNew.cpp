//dma object
#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	public:
		Complex()
		{
			real=img=6;
		}
		Complex(int r,int i)
		{ 
		  this->real=r;
		  this->img=i;
		}
		void show()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
}; 
int main()
{
	Complex* ptr=new Complex();
	ptr->show();
	Complex* ptr1=new Complex(10,6);
	ptr1->show();
	
}
