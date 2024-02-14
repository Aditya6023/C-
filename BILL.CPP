// program to print electricity bill..
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 int units;
 float billamt, totamt;
 char name[80];
 cout<<"Enter the name of the customer:";
 gets(name);
 cout<<"Enter the units consumed:";
 cin>>units;
 if(units<=100)
 billamt=units*2.90;
 else if(units<=300)
 billamt=100*2.90+(units-100)*4.80;
 else
 billamt=100*2.90+200*4.80+(units-300)*6.80;
 totamt=billamt+200;
 cout<<"Coustor Name:"<<name<<endl;
 cout<<"Bill to pay:"<<totamt;
 getch();
}