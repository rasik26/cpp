#include<iostream>
using namespace std;

class Date{
	int dd;
	int mm;
	int yy;
	
	public:
	Date(int,int,int); //outline function
	void display();
	Date(Date &); //declaration of copy constructor
};

	Date::Date(int dd,int mm,int yy)
	{
		this->dd=dd;
		this->mm=mm;
		this->yy=yy;
	}
	void Date::display(){
		cout<<"current date is";
		cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
	}
	
	Date::Date(Date &original_Obj){
		this->dd=12;//original_Obj.dd;
		this->mm=original_Obj.mm;
		this->yy=original_Obj.yy;
	}
	
	int main(){
		Date d1(18,8,23);
		d1.display();
		
		Date d2(d1);
		d2.display();
		
	}
