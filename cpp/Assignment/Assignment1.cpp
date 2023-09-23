#include<iostream>
using namespace std;

class Student{
	
	int marks1,marks2,rollNo;
	public:
		Student(int marks1,int marks2,int rollNo)
		{
			this->marks1=marks1;
			this->marks2=marks2;
			this->rollNo=rollNo;
		}
		
		int getMarks(){
			return this->marks1+this->marks2;
		}
};

class Sport{
	
	int sport_marks;
	public:
		Sport(int sport_marks)
		{
			this->sport_marks=sport_marks;
		}
		int getMarks(){
			return  this->sport_marks;
		}
};


class Result:public Student,public Sport{
	
	public:
		Result(int marks1,int marks2,int rollNo,int sport_marks):Student(marks1,marks2,rollNo),Sport(sport_marks)
		{
		}
				int getResult()
		{
		
			int student_Marks=Student::getMarks();
			int sport_Marks=Sport::getMarks();
			return student_Marks+sport_Marks ;
		}
		
};

int main()
{
	
	Result r1(98,92,1,89);
	int total_marks = r1.getResult();
	cout<<"Total Marks : "<<total_marks<<endl;
	double avg=(double)total_marks/2;
	cout<<"Average is "<<avg;
	
}
