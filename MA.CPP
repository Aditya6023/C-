#include"header.cpp"
void main()
{ clrscr();
  long ma=0,mi=9,n,re;
  cout<<"Enter the value:";
  cin>>n;
  while(n!=0)
  { re=n%10;
   if(n>ma){ma=re;}
    if(n<mi){mi=re;}
    n/=10;
  }
  cout<<"Max:"<<ma<<"\nMin:"<<mi;
  getch();
}


