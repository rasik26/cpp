#include<iostream>
using namespace std;
void swap(int &,int &);


int main(){
	int a,b;
	cout<<"Enter two Number :"<<endl;
	cin>>a,b;
	cout<<"Values before Swapping"<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"Values After Swapping"<<a<<" "<<b<<endl;
}

void swap(int &p,int &q){
    p=p+q;
    q=p-q;
    q=p-q;
}
