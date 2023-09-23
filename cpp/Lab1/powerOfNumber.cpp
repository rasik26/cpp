#include<iostream>
using namespace std;
//power of number
int main()
{
	int base,expo,power=1;
	cout<<"Enter base and expo : "<<endl;
	cin>>base>>expo;
    for(int i=1;i<=expo;i++)
    {
    	power*=base;
	}
	
	cout<<"by calculating power ="<<power; 
}
