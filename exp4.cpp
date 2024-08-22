#include<iostream>
using namespace std;

struct Phone
{
 int areacode, exchange, number;
};

int main()
{
 Phone p1 = {212,767,8900};
 Phone p2;
 cout<<"\n Enter your area code, exchange and number: ";
 cin>>p2.areacode>>p2.exchange>>p2.number;
 cout<<"\n My number is ("<<p1.areacode<<")"
     <<p1.exchange<<"-"<<p1.number<<"\n";
 cout<<"\n Your number is ("<<p2.areacode<<")"
     <<p2.exchange<<"-"<<p2.number;
 return 0;
}
