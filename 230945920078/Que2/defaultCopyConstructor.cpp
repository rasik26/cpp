//defaultCopyConstructor (Q2 d)

#include<iostream>
using namespace std;
class Date{
	int dd,mm,yy;
	
	public:	
		Date(int,int,int);
		void show();
};

Date :: Date(int dd,int mm,int yy){
	
	this->dd=dd;
	this->mm=mm;
	this->yy=yy;
}

void Date :: show(){
	
	cout<<"The Date is : ";
	cout<<dd<<"/"<<mm<<"/"<<yy;
}

int main(){
	Date d(30,10,2000);
	d.show();
	
	cout<<endl<<endl<<"After Copying the date using compiler default Copy Constructor : "<<endl;
	Date d1(d);
	d1.show();
}
