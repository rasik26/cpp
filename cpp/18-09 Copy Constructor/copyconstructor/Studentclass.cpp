#include<iostream>
using namespace std;
#include<string.h>

class Student{
	int rollNo;
	char name[32];
	int fees;
	
	public:
		Student(int,char*,int);
		void display(); 
		Student(Student &);
	
};

Student::Student(int rollNo,char* name,int fees){
	this->rollNo=rollNo;
	strcpy(this->name,name);
	this->fees=fees;
}

void Student::display(){
	cout<<"student details ";
	cout<<rollNo<<","<<name<<","<<fees<<endl;
}

Student::Student(Student &Student_1){
	this->rollNo=Student_1.rollNo;
	strcpy(this->name,Student_1.name);
	this->fees=9000;
}


int main()
{
	Student s1(54,"ganesh",5000);
	s1.display();
	
	Student s2(s1);
	s2.display();
}
