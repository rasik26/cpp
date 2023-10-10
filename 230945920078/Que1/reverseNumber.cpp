#include<iostream>
using namespace std;
int main(){
	int num, len=0, revNum=0,x=0;
	cout<<"enter the no";
	cin>>num;	//accepting a no
	
	while(num!= 0){
		x=num%10;	//taking the digit
		len=len+1; //for calculating length
		revNum= revNum*10 + x;	//adding the digit to the reverse no
		num=num/10;
	}
	
	cout<<"length of number = "<<len;
	cout<<"reverse of the number = "<<revNum;
	
}
