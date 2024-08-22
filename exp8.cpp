#include<iostream>
#include<fstream>
using namespace std;

int main()
{
 int rollno, mark;
 char name[30];
 ofstream fout;
 fout.open("Jayesh.txt",ios::binary|ios::app);
 
 cout<<"\n Enter Details for Students:";
 cout<<"\n Name: ";
 cin>>name;
 cout<<"\n Roll No: ";
 cin>>rollno;
 cout<<"\n Marks: ";
 cin>>mark;
 
 fout<<name<<"\n";
 fout<<rollno<<"\n";
 fout<<mark<<"\n";
 
 ifstream fin;
 fin.open("Jayesh.txt");
 
 cout<<"\n Contents from File:";
 while(fin)
 {
  fin>>name;
  cout<<name;
  fin>>rollno;
  cout<<rollno;
  fin>>mark;
  cout<<mark; 
 } 
 fin.close();
 return 0;
} 
