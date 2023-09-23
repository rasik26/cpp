#include<iostream>
using namespace std;
int ustrCmp(char* a,char* b,int n)
{
    for(int i=0;i<n;i++)
    {
       if(a[i]!=b[i])
	   return 0;	
	}
	
	return 1;
	
}
int main(){
   int n;
   cout<<"Enter length of String "<<endl;
   cin>>n;
  char str1[n];
  char str2[n];
  
  cout<<"Enter two String : "<<endl;
  cin>>str1>>str2;
  
  int result = ustrCmp(str1,str2,n);
  
  if(result)
    cout<<"Equal String "<<endl;
  else
    cout<<"Different String"<<endl;
}
