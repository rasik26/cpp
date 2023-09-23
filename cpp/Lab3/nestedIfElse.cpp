#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	cout<<"Enter num1= ,num2=";
	cin>>num1>>num2;
	
	if(num1<num2){
		cout<<"NUM2 IS GREATER !";
	}else if (num1>num2){
		cout<<"NUM1 IS GREATER !";
	}else{
		cout<<"BOTH ARE EQUAL !";
	}
	
}
