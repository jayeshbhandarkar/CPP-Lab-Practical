#include<iostream>
using namespace std;
class Father
{
	protected:
	 int age;
	public:
	 Father(int x)
  {
		 age=x;
	 }	
	 virtual void iam()
  {
	  cout<<"Inside Father class \nMy age is:"<<age<<endl;
	 }
};
class Son:public Father
{
	protected:
	 int ages;
	public:
	 Son(int x,int y):Father(x)
  {
	  ages = y;
	 }
	 void iam()
  {
	  cout<<"Inside Son class \nMy age is:"<<ages<<endl;
	 }
};
class Daughter:public Father
{
	protected:
	 int aged;
	public:
	 Daughter(int x,int y):Father(x)
  {
	  aged = y;
	 }
	 void iam()
  {
	  cout<<"Inside Daughter class \nMy age is:"<<aged<<endl;
	 }
};
int main()
{
	Father f(44);
	Son s(44,19);
	Daughter d(44,16);
	Father *ptr;
	
	ptr = &f;
	ptr->iam();
 ptr = &s;
	ptr->iam();
	ptr = &d;
	ptr->iam();
	return 0;
}
