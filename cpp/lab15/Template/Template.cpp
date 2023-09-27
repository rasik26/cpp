#include<iostream>
using namespace std;

/*template<class X,class Y>
void fun(X a, Y b)
{
	cout<<"Value of a is: "<<a<<endl;
	cout<<"Value of b is: "<<b<<endl;
}
int main()
{
	fun(23,65.2);
	return 0;
}*/

template<class T>
class A
{
	public:
		T num1 = 10.3;
		T num2 = 8.2;
		void add()
		{
			cout<<"Addition : "<<num1+num2<<endl;
			
		}
};

int main()
{
	A<float> d;
	d.add();
	return 0;
}
