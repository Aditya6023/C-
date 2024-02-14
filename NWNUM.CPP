#include"header.cpp"
void main()
{ clrscr();
  int a,re,rev,i,s=9,l=0,nm;
  cout<<"Enter the number:";cin>>a;  i=a;
  while(a!=0)
  { re=a%10;
    if(a>l)l=re;
    if(a<s)s=re;
    a/=10;
  }
  cout<<"Small:"<<s<<"\nLarge:"<<l;
  rev=l*10+s;
  cout<<"\nOriginal number:"<<i<<"\nNew number:"<<rev;
  getch();
  }