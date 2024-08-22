#include<iostream>
using namespace std;

struct Point 
{
 int x;
 int y;
};

int main()
{
 Point p1,p2;
 cout<<"\n Enter First Cordinate for Point P1: ";
 cin>>p1.x>>p1.y;

 cout<<"\n Enter Second Cordinate for Point P2: ";
 cin>>p2.x>>p2.y;

 cout<<"\n Coordinates of P1 + P2 are: "<<(p1.x+p2.x)
     <<","<<(p1.y+p2.y);

 return 0;
}
