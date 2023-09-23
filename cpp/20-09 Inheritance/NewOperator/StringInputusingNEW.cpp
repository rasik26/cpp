#include<iostream>
using namespace std;

int main(){
	char* ptr;
	int n;
	cout<<"Enter the number of characters: "<<endl;
	cin>>n;
	ptr = new char[n+1];
	cout<<"Enter the string: "<<endl;
	cin>>ptr;
	cout<<ptr;
}

