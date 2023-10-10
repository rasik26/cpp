#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char* a[3]={"shah","shka","shkag"};
	//cout<<a[2];
	char *ptr[3];
	char a1[10];
	char a2[10];
	char a3[10];
	cin>>a1>>a2>>a3;
	
	ptr[0]=a1;
	ptr[1]=a2;
	ptr[2]=a3;
	
for(int a=0;a<3;a++){
cout<<ptr[a]<<"\n";
	
}
	
	
	
	
}
