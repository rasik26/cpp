#include<iostream>
using namespace std;

class employee{
	int id;
	public:
		employee();
		employee(int);
		void display();
		
		virtual int findsalary(){
			return 0;
		}
};

employee::employee(){
	cout<<"In default constructor \n";
	id=0;
}
       
employee::employee(int i){
	cout<<"in Para of employee /n";
	id=i;
}

void employee::display(){
	cout<<"ID of employee is: "<<id<<endl;
}

class wageemp:public employee{
	int hrs,rate;
	public:
		wageemp();
		wageemp(int,int,int);
		void display();
		int findsalary();
};

wageemp::wageemp(){
	cout<<"In default of wage \n";
	hrs=0;
	rate=0;
}

wageemp::wageemp(int i, int h, int r):employee(i){
	cout<<"In para of wage \n";
	hrs=h;
	rate=r;
}

int wageemp::findsalary(){
	return hrs*rate;
}

void wageemp::display(){
	employee::display();
	cout<<hrs<<endl;
	cout<<rate<<endl;
}

class salesmang:public wageemp{
	int sales, com;
	public:
		salesmang();
		salesmang(int,int,int,int,int);
		void display();
		int findsalary();
};

salesmang::salesmang(){
	cout<<"In default of sales \n";
	sales = com = 0;
}

salesmang::salesmang(int i, int h, int r, int s, int c):wageemp(i,h,r){
	cout<<"In para of sales \n";
	sales=s;
	com=c;
}
void salesmang::display(){
	wageemp::display();
	cout<<"Sales of the emp is: "<<sales<<endl;
	
	cout<<"Commition of an emp is"<<com<<endl;
}

int salesmang::findsalary(){
	return(wageemp::findsalary())+ sales*com;
}

int main(){
	
	
	//case-1
	/*employee * ptr;
	employee e1;
	ptr=&e1;
	cout<<ptr->findsalary();*/
	
	//case-2
	//employee * ptr;
	employee *ptr = new wageemp(101,10,500);
	/*wageemp we1(101,10,500);
	ptr=&we1;*/
	cout<<ptr->findsalary();
	
	//case-3
	/*employee * ptr;
	salesmang sm1(101,10,500,2000,1);
	ptr=&sm1;
	cout<<ptr->findsalary();*/
	
	
	
}
