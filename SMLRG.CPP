#include"header.cpp"
void main()
{ clrscr();
  long a,s,l=0,r;
  cout<<"Enter the number:";cin>>a;
  while(a!=0)
  {r=a%10;
   if(a>l)l=r;
   if(a<s)s=r;
   a=a/10;}cout<<"Max:"<<l<<"Min:"<<s;getch();}