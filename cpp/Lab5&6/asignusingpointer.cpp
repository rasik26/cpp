//"	Assignments using pointers, arrays of pointers
#include<iostream>
using namespace std;

void assign(int* A,int n){
	int* arr[n];
	for(int i=0;i<n;i++)
		arr[i]=&A[i];
	
	
	cout<<"Marks Entered "<<endl;
	
	for(int i=0;i<n;i++)
	{
	 	cout<<*arr[i]<<" ";
		 	
	}
}

int main(){
	
	int n;
	cout<<"Enter the Value of N"<<endl;
	cin>>n;
	int marks[n];
	cout<<"Enter marks of the student "<<endl;
	
	for(int i=0;i<n;i++)
		cin>>marks[i];
		
	assign(marks,n);
		
	
}
