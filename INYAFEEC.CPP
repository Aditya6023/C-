#include"header.cpp"
void main()
{ clrscr();
  float c,f,i,y;
  cin>>c;
  f=c/(2.54*12);
  i=c/2.54;
  y=c/(2.54*36);
  cout<<"feet:"<<f<<"\nyards:"<<y<<"\ninches:"<<i;getch();}