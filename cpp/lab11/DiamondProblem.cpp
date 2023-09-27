/* Implement diamond problem with real life example */
#include<iostream>
using namespace std;
#include<string.h>
class Vehicle
{
	char* typeOfVehicle[2]={"CAR","Bike"};
	int index;
	public:
		Vehicle()
		{
		//	cout<<"in vehicle";
		}
		Vehicle(int);
		void display(); 		
};
Vehicle::Vehicle(int index)
{
	this->index=index;
	if(index==1)
	cout<<"Bike";
	else
	cout<<"Car";
}
void Vehicle::display()
{
		cout<<"Type Of vechicle ! "<<typeOfVehicle[index]<<endl;

}
class Car: virtual public Vehicle
{
	char C_name[10];
	char C_color[10];
	int gear;
	public:
		Car(char*,char*,int,int);
		void display();
};

Car::Car(char* C_name,char* C_color,int gear,int index):Vehicle(index)
{
	Vehicle::display();
	strcpy(this->C_name,C_name);
	strcpy(this->C_color,C_color);
	this->gear=gear;
}

void Car::display()
{
	cout<<"Details !"<<endl;
	cout<<"Car Name : "<<C_name<<" Car Color : "<<C_color<<" Number of Gears : "<<gear<<endl;
}

class Bike:virtual public Vehicle
{
	char B_name[10];
	char B_color[10];
	int gear;
	public:
		Bike(char*,char*,int,int);
		void display();
};
Bike::Bike(char* B_name,char* B_color,int gear,int index):Vehicle(index)
{
	strcpy(this->B_name,B_name);
	strcpy(this->B_color,B_color);
	this->gear=gear;
}

void Bike::display()
{
	cout<<"Details !"<<endl;
	cout<<"Bike Name : "<<B_name<<" Bike Color : "<<B_color<<" Number of Gears : "<<gear<<endl;
}
class Passenger: public Car,public Bike
{
	int noOfPassenger;
	//int choiceOfVechicle;
	public:
		Passenger(int,int,char*,char*,int,char*,char*,int);
		void display();
		
	
};

Passenger::Passenger(int noOfPassenger,int vehicleMode,char* cname,char* ccolor,int cgear,char* bname,char* bcolor,int bgear):Car(cname,ccolor,cgear,vehicleMode),Bike(bname,bcolor,bgear,vehicleMode)
{
	this->noOfPassenger=noOfPassenger;
	//this->choiceOfVechicle=choiceOfVechicle;
}

void Passenger::display(){
	Car::display();
	cout<<"Number Of Passenger : "<<noOfPassenger<<endl;
	cout<<"Destination Arrived !"<<endl;
}

int main()
{
	Passenger p1(12,0,"Verna","Red",6,"FZ-5","Blue",5);
	p1.display();
}

