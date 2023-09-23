#include<iostream>
using namespace std;

#include<cmath>
//calculating compound interest
//P(1 + r/100)n CI = Amount – Principal
int main()
{
	float p,r,n,ci;
	cout<<"Enter principal amount :"<<endl;
	cin>>p;
	cout<<"Enter rate :"<<endl;
	cin>>r;
	cout<<"Enter time : "<<endl;
	cin>>n;
	
	cout<<"Calculating Compound interest........."<<endl;
	
	float amount=p*(pow((1 + r/100),n));
	ci=amount-p;
	
	cout<<"Calculated compound interest is: "<<ci<<endl;
	
}
