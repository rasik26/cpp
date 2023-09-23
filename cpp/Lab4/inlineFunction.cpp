#include<iostream>
using namespace std;

class Student{
	
	int rollNo;
	char* ptr;
	
	public:
	   Student(int rollNo,char* ptr)
	   {
	   	  this->rollNo=rollNo;
	   	  this->ptr=ptr;
	   }
	   
	   void display(){ //inline Function
	   	cout<<"Student Details : "<<endl;
	   	cout<<"Roll No : "<<rollNo<<" Name: "<<ptr<<endl;
	   }
};

int main(){
	Student s1(4,"Rishi");
	s1.display();
}
