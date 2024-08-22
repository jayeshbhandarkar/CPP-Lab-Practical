#include<iostream>
using namespace std;
class DB;
class DM
{
	
	float m,cm;
	public:
	void input()
 {
	 cout<<"\n Enter Distance in Meter and Centimeter: ";
	 cin>>m>>cm;
 }
 void display()
 {
  cout<<"\n Distance in Meter and Centimeter";
  cout<<"\n Meter = "<<m<<" and Centimeter = "<<cm;
 }
	friend void addition(DM,DB);
};

class DB 
{
	float f,i;
	public:
	void input()
 {
	 cout<<"\n Enter Distance in Feet and  Inches: ";
	 cin>>f>>i; 
 }
 void display()
 {
  cout<<"\n Distance in Feet and Inches";
  cout<<"\n Feet = "<<f<<" and Inches = "<<i;
 }
	friend void addition(DM,DB);
};

void addition(DM a,DB b)
{
	int ch;
	int m,cm,feet,inch;
	
	cout<<"\n 1. Distance in Meter and Centimeter";
	cout<<"\n 2. Distance in Feet and Inches"<<endl;
	cout<<"\n Enter your choice: ";
	cin>>ch;
	
	if(ch==1)
	{
	 cm=(a.m*100)+a.cm;
	 inch=(b.f*12)+b.i;
	 cm=cm+(inch*2.54);
	 a.m=cm/100;
	 a.cm=cm%100;
	 
	 cout<<"\n Addition of Distance in Meter & Centimeter: ";
	 cout<<"\n Meter = "<<a.m<<" and Centimeter = "<<a.cm;
 }
 else
 {
  cm=(a.m*100)+a.cm;
	 inch=(b.f*12)+b.i;
	 inch=inch+(cm*0.394);
	 b.f=inch/12;
	 b.i=inch%12;
	 
	 cout<<"\n Addition of Distance in Feet & Inches: ";
	 cout<<"\n Feet = "<<b.f<<" and Inches = "<<b.i;
 } 
}
int main()
{
	DM dm;
	DB db;
	dm.input();
	db.input();
	addition(dm,db);

	return 0;
}
