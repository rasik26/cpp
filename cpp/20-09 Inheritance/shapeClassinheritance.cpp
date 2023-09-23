#include<iostream>
using namespace std;

class Shape
{
	public:
		Shape()
		{
			cout<<"in default const of shape"<<endl;
		}
		virtual void findArea()
		{
			cout<<"in find Area of shape !"<<endl;
			int area=0;
			cout<<area<<endl;
		}
		//virtual void findArea()=0;
	
};
class Circle:public Shape
{
	int r;
	const double pi=3.142;
	
	public:
		
		Circle(int r)
		{
			cout<<"in para  constructor of circle !"<<endl;
			this->r=r;
		}
		void findArea(){
			double area=pi*r*r;
			cout<<"Area of circle :"<<area;
		}
		
};

class Rectangle: public Shape
{
	int len,brea;
     public:
	 Rectangle(int len,int brea)
	 {
	 	cout<<"in para constructor of ractangle !"<<endl;
	 	this->len=len;
	 	this->brea=brea;
	 }	
	 void findArea(){
	 	double area=len*brea;
	 	cout<<"Area of rectangle="<<area<<endl;
	 }

}; 

int main()
{
	/*Shape *ptr=new Shape();
	Shape sh1;
	ptr=&sh1;
	ptr->findArea();*/
	
	Shape *ptr=new Rectangle(4,6);
	/*Rectangle re1(2,3);
	ptr=&re1;*/
	ptr->findArea();

}
