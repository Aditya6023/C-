#include<iostream.h>
#include<conio.h>
void main()
{
 int i,n;
 int first=0,second=1,third;
 clrscr();
 cout<<"Enter the total terms:"; cin>>n;
 cout<<first<<","<<second<<",";
 for(i=3;i<=n;i++)
 {
 third=first+second;
 cout<<third<<',';
 first=second;
 second=third;
 }
getch();
}