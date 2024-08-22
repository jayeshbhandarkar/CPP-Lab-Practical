#include<iostream>
using namespace std;
class Tollbooth
{
 unsigned int car;
 double amt;
 public:
 tollbooth()
 {
  car=0;
  amt=0;
 }
 
 void payingcar()
 {
  car++;
  amt+=0.50;
 }
 
 void nopayingcar()
 {
  car++;
 }
 
 void display()
 {
  cout<<"\n Total Cars Visited at Tollbooth: "<<car;
  cout<<"\n Total Amount Collected at Tollbooth: "<<amt;
 }
};

int main()
{
 char ch,c;
 Tollbooth t;
 do{
  cout<<"\n 1. Paying Car";
  cout<<"\n 2. Non-Paying Car"; 
  cout<<"\n 3. Exit \n";
  cout<<"\n Enter choice : ";
  cin>>ch;

 switch(ch)
 { 
  case'1':
  t.payingcar();
  cout<<"\n Paying Car Added"<<endl;
  break;

  case'2':
  t.nopayingcar();
  cout<<"\n Non-Paying Car Added"<<endl;
  break;

  case'3':
  t.display();
  exit(0);
  break;

  default:
  cout<<"\n Invalid Input";
 }
 
 cout<<"\n Do you want to continue (Y:N): ";
 cin>>c;

}while(c=='y'||c=='Y');

 return 0;
}
