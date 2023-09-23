#include<iostream>
using namespace std;
int add(){ //No Argument function
	int a=5;
	int b=6;
	
	return a+b;
}

int add(int a,int b){ //argument function
	
	return a+b;
}

int main(){
	
	int sum1 = add();
	cout<<"Sum of Noarrugemnet Function calling ";
	cout<<sum1<<endl;
	int sum2 = add(10,6);
	cout<<"Sum of arrugemnet Function calling ";
	cout<<sum2<<endl;
	
}
