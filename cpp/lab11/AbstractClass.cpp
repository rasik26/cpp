/* Implement Abstract classes in your program	*/

#include<iostream>
using namespace std;

class Shape{  //abstract class
	double thickness;
	
	public:
		Shape(double);
	    virtual void findArea()=0; //pure virtual function
		
}; 

Shape::Shape(double thickness)
{
	this->thickness=thickness;
	cout<<"Thickness is "<<thickness<<endl;
}

class Circle: public Shape
{
	int radius;
	double PI=3.142;
	
	public:
		Circle(int,double);
		 void findArea();
};

Circle::Circle(int radius,double thickness):Shape(thickness)
{
	this->radius=radius;
}

void Circle::findArea(){
	double area=PI*radius*radius;
	cout<<"Area of Circle is : "<<area<<endl;
}


int main()
{
	Circle c1(4,4.2);
    c1.findArea();	
}
