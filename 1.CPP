#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{ clrscr();
  int a=0,b=1,c,n;
  cout<<a<<"\n"<<b;
  cout<<"Enter the limit =";
  cin>>n;
  for(int i=1;i>=0;i++)
  { 
    c=a+b;cout<<c;
     a=b;
     b=c;
  }
    getch();
}
