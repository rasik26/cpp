#include<iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"Enter the number of element: "<<endl;
	cin>>n;
	int* p=new int[n];
	cout<<"Enter the element ";
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	
	cout<<"Entered element is "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
}
