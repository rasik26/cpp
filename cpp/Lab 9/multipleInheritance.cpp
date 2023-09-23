/*"	Design a hierarchy of computer printers. Use multiple inheritance in your hierarchy. 
also use friend functions and classes in your program."*/

#include<iostream>
using namespace std;

#include<string.h>

class Device{
	char deviceName[20];
	public:
		Device(char []);
		void display();
		friend void getDetails(Device &);
};
Device::Device(char deviceName[])
{
	strcpy(this->deviceName,deviceName);
}
void Device::display(){
	cout<<"Device Name "<<deviceName<<endl;
}

class Computer: public Device{
	char cAccName1[10];
	char cAccName2[10];
	char cAccName3[10];
	public:
		Computer(char[],char[],char[],char []);
		void display();
		friend void getDetails(Computer &);
};
Computer::Computer(char cAccName1[],char cAccName2[],char cAccName3[],char deviceName[]):Device(deviceName)
{
	strcpy(this->cAccName1,cAccName1);
	strcpy(this->cAccName2,cAccName2);
	strcpy(this->cAccName3,cAccName3);
}
void Computer::display()
{
	Device::display();
	cout<<"My Computer Accessosries !"<<endl;
	cout<<cAccName1<<" "<<cAccName2<<" "<<cAccName3<<endl;
}

class Printer: public Device,public Computer{
	char pAccName1[10];
	char pAccName2[10];
	char pAccName3[10];
	public:
		Printer(char[],char[],char[],char[],char[],char[],char []);
		void display();
		friend void getDetails(Printer &);
};
Printer::Printer(char pAccName1[],char pAccName2[],char pAccName3[],char cAccName1[],char cAccName2[],char cAccName3[],char deviceName[]):Device(deviceName),Computer(cAccName1,cAccName2,cAccName3,deviceName)
{
	strcpy(this->pAccName1,pAccName1);
	strcpy(this->pAccName2,pAccName2);
	strcpy(this->pAccName3,pAccName3);
}
void Printer::display()
{
	Computer::display();

	cout<<"My Printer Accessosries !"<<endl;
	cout<<pAccName1<<" "<<pAccName2<<" "<<pAccName3<<endl;
}

void getDetails(Printer &p1)
{
	//cout<<p1.deviceName<<endl;
	cout<<p1.pAccName1<<" "<<p1.pAccName2<<" "<<p1.pAccName3<<" "<<endl;
}

void getDetails(Computer &c1)
{
	cout<<c1.cAccName1<<" "<<c1.cAccName2<<" "<<c1.cAccName3<<endl;
}

int main(){
		Printer p1("Canon","Toner","Cable","Hp","Keyboard","Cpu","Printer");
		p1.display();
		
		//getDetails(p1); //friend function calling
		
		Computer c1("Dell","keyboard","Cpu","Computer");
	//	c1.display();
	    getDetails(c1); //friend function calling
}


