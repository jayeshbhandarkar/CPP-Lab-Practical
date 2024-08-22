#include<iostream>
using namespace std;
double power(double,int =2);
int main()
{
   int pow;
   double num;
   char ch;
   cout<<"\n Enter a Number : ";
   cin>>num;
   cout<<"Menu:";
   cout<<"\n A. Calculate Square";
   cout<<"\n B. Calculate Higher Power";
   cout<<"\n Enter Your Choice: ";
   cin>>ch;
   
   if(ch=='A'||ch=='a')
   {
      cout<<"\n Square of"<<num<<":"<<power(num);
   }
   else
   {
      cout<<"Enter Power Value: ";
      cin>>pow;
      cout<<"\n"<<pow<<"th power of"<<num
          <<":"<<power(num,pow);
   }
   return 0; 
}
double power (double n,int p)
{
   double result=1;
   for(int i=1;i<=p;i++)
    result = result*n;
   return result;
}
