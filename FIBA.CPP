#include"header.cpp"
void main()
{ clrscr();
  int a,b,c,n;
  cout<<"Enter two values:";cin>>a>>b;
  cout<<"How much values to print?:";cin>>n;
  for(int i=a;i<=n;++i)
  {  c=a+b;
     a=b;b=c;cout<<c<<",";}getch();}