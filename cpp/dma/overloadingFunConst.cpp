#include<iostream>
using namespace std;
 
 class Complex
 {
   public: 
 	void show()const{
         cout<<"hellow";
    }
 	void show(){
 	    cout<<"bye";
 	}
 };
 int main(){
 	Complex c1;
 	c1.show();
 	
 	return 0;
 	
 }
