#include<iostream>
using namespace std;

class Rational 
{
  private:
         double num,den;
  public:
         Rational ()
         {
          num = 1.0;
          den = 1; 
         }
         Rational (double x,double y)
         {
          num = x;
          den = y;
         }
         void reduce()
         {
          int count1 = num>den?num:den;
          int factor;
          if(num==den)
            num=den=1;
          else
          {
            for(int i=2;i<=count1;i++)
              if((int)num%i==0 && (int)den%i==0)
                factor=i;
            num = num / factor;
            den = den / factor;
          }
         }
         Rational operator+ (Rational z)
         {
          Rational res;
             if(den == z.den)
             {
               res.num=num + z.num;
               res.den=den;
             }
             else
             {
               res.num = num * z.den + z.num * den;
               res.den = den * z.den;
             }
          res.reduce();
          return res;
         }
  friend istream& operator- (istream &,Rational&);
  friend ostream& operator* (ostream &, Rational&);
};
istream& operator- (istream &in,Rational&z)
{
  cout<<"\n Numerator:";
  in>>z.num;
  cout<<"\n Denominator:";
  in>>z.den;
  return in;
}
ostream& operator* (ostream &out,Rational&z)
{
  out<<z.num<<"/"<<z.den;
  return out;
}
int main()
{
  Rational r1,r2,r3;
  cout<<"\n Enter First Rational Number ";
  cin-r1;
  cout<<"\n Enter Second Rational Number ";
  cin-r2;
  cout<<"\n Reduced First Rational Number ";
  r1.reduce();
  cout*r1;
  cout<<"\n Reduced Second Rational Number";
  r2.reduce();
  cout*r2;
  cout<<"\n Addition of Rational Number: ";
  cout*r1;cout<<" + ";
  cout*r2;cout<<" = ";cout*r3;
  
  cout<<endl;     
  return 0;
}
