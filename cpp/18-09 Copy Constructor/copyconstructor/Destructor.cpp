#include<iostream>
using namespace std;

#include<string.h>

class String1{
	int len;
    char* ptr;
	
	public:
		String1(int jh,char* ptr){
			cout<<"Constructor called"<<endl;
			len=jh;
			this->ptr=new char[len+1];
			strcpy(this->ptr,ptr);
			
		}
		
		void display(){
			//cout<<"HIIII "<<endl;
			cout<<len<<","<<ptr<<endl;
		}
		
		~String1(){
			cout<<"Destructor is called"<<endl;
			if(ptr)
			delete[] ptr;
			ptr=NULL;
		}
};

int main(){
	String1 s(6,"sandesh");
	s.display();
	{
		String1 s2(s); // cpy const
		s2.display();
    	s2.~String1();
	}

	s.display(); 
}
