#include<iostream>
using namespace std;
//swap of two number
int main()
{
	int num1,num2;
	cout<<"Enter two Numbers";
	cin>>num1>>num2;
	cout<<endl<<"Before Swapping Value of "<<num1<<"and"<<num2<<"is :"<<endl;
	/*int temp=num1;
	num1=num2;
	num2=num1;*/
	
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	
	cout<<"After Swapping : "<<"num1="<<num1<<" "<<"num2="<<num2; 
}
