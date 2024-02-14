#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char a[10],b[10];
cout<<"Please Enter The String :-";gets(a);
 for(int n=0;n<10;n++)
 { for(int m=9;m>=0;m--)
   {
     a[n]=b[m];
   }
 }
 cout<<"The Reversed String is :- ";puts(b);
 getch();
}