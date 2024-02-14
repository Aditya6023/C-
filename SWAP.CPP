#include"header.cpp"
int s(int,int);
void main()
{ clrscr();
  int a,b;
  cin>>a>>b;
  cout<<"Original values are:"<<a<<","<<b;
  s(a,b);
  cout<<"\nChanged values:"<<a<<","<<b;
  getch();
}
int s(int x,int y)
 { int t;
   t=x;
   x=y;
   y=t;
   cout<<"\nChanged values are:"<<x<<","<<y;
   return(0);
   }
