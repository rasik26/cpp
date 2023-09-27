#include<iostream>
using namespace std;

template <class T>
T GetMax (T a, T b)
{
	T result = (a>b) ? a:b;
	return (result);
	
}

int main()
{
	int i= 6, j=8, k;
	long l = 12,m = 76,n;
	k = GetMax<int>(i,j);
	n = GetMax<long>(l,m);
	cout<<k<<endl;
	cout<<n<<endl;
	return 0;
}
