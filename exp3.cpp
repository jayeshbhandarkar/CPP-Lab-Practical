#include<iostream>
using namespace std;

float add(float x,float y)
{
 return(x+y);
}

float sub(float x,float y)
{
 return(x-y);
}

float mul(float x,float y)
{
 return(x*y);
}

float div(float x,float y)
{
 return(x/y);
}

int main() 
{
 float n1,n2;
 char ch='Y',opr;
	
 do
 {
  cout<<"Enter First No, Operator & Second No:";
  cin>>n1>>opr>>n2;
  switch(opr)
  {
   case '+':
   cout<<"Addition is "<<add(n1,n2);
   break;
   case '-':
   cout<<"Subtraction is "<<sub(n1,n2);
   break;
   case '*':
   cout<<"Multiplication is "<<mul(n1,n2);
   break;
   case '/':
   cout<<"Divsion is "<<div(n1,n2);
   break;
   default:
   cout<<"Invalid Operator or Operand";
  }
  cout<<"Do you want to continue Y or N?";
  cin>>ch;

 }while(ch!='N'&& ch!='n');
 return 0;
}
