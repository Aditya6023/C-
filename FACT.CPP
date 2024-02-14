#include"header.cpp"
void main()
{ clrscr();
  int a,c,b,f=1;
  cout<<"Enter the value:";cin>>a;b=a;
  for(c=a;c!=1;c--,a--)
  { f*=a;
  }cout<<"The factorial of "<<b<<" is:- "<<f;
    getch();
}