#include<iostream>

using namespace std;

float division(int x ,int y){
	if(y == 0){
		throw " attempt to divid by zero";
	}
	return x/y;
}
int main(){
	int a,b;
	cout<<"enter a and b";
	cin>>a>>b;
	float x;
	try{
		x = division(a,b);
		cout<< x <<endl;
	}
	catch(const char  *e){
		cout<< e << endl;
	}
	getchar();
}
