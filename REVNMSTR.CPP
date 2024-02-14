#include"header.cpp"
void main()
{ clrscr();
  long  a,i,re,rev=0;char b[50];
  cout<<"Enter the number:";cin>>a;i=a;
  for( ;a!=0;) //while(a!=0)
  { re=a%10;
    rev=rev*10+re;
    a=a/10;
  }
    cout<<"Original:"<<i<<"\nRev:"<<rev;cout<<"\nEnter the character:";gets(b);cout<<"Rev:";puts(strrev(b));
    getch();
}