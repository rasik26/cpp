#include<iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"Enter the number of element: "<<endl;
	cin>>n;
	char* p=new char[n];
	cout<<"Enter the characters ";
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	
	cout<<"Entered character is "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	
	delete[] p;
}
