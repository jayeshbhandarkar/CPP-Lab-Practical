#include<iostream>
using namespace std;
struct date
{
	int d;
	int m;
	int y;
};
class Patient
{
 protected:
 	char name[20];
	 date d_adm;
	 date d_dis;
	 char disease[20];
	 short int no;
	
	public:
	 void insert(short n)
  {
  no=n;
   cout<<"\n Enter Details for Patient No. "<<no;
 	 cout<<"\n Enter Name of Patient: ";
 	 cin>>name;
 	 cout<<"\n Enter Name of Disease: ";
 	 cin>>disease;
 	 cout<<"\n Enter Date of Admission: ";
 	 cin>>d_adm.d>>d_adm.m>>d_adm.y;
 	 cout<<"\n Enter Date of Discharge: ";
 	 cin>>d_dis.d>>d_dis.m>>d_dis.y;
  }
	 void display()
  {
   cout<<"\n PatientNumber: "<<no;
	  cout<<"\n Patient Name: "<<name<<endl;
	  cout<<"\n Disease Name: "<<disease<<endl;
	  cout<<"\n Date of Admission: "<<d_adm.d<<"-"
       <<d_adm.m<<"-"<<d_adm.y<<endl;
	  cout<<"\n Date of Discharge: "<<d_dis.d<<"-"
       <<d_dis.m<<"-"<<d_dis.y<<endl;
  }
};
class Record:public Patient 
{
 protected:
	 int age;
	public:
	 void get(short int n)
  {
   insert(n);
	  cout<<"\n Enter Age: ";
	  cin>>age;
  }
	 void put()
  {
	  if(age<12)  
   {
	   display();
	   cout<<"\n Patient Age: "<<age;
   } 
   else
   {
    cout<<"\n Patient Age is Above 12 Years !!";
   }
  }
};

int main()
{
	Record *r;
	short int count=0;
	
	cout<<"\n Enter Number of Records want to create: ";
	cin>>count;
	
	r=new Record[count];
	for(int i=0; i<count; i++)
	{
	 r[i].get(i+1);
 }
	
	cout<<"\n List of all the paediatric patients :";
	for(int i=0; i<count; i++)
	{
	 r[i].put();
 }
	
	return 0;
} 
