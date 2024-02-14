#include"header.cpp"
void main()
{ clrscr();
  int billamt,u;char n[50];
  cout<<"Enter the name of the customer:";gets(n);
  cout<<"Enter the units consumed by customer:";
  cin>>u;
  if(u<=100)
  { billamt=u*4;
  }
 else if(u<=200)
  { billamt=100*4+(u-100)*6;
  }
 else if(u<=300)
  { billamt=100*4+200*6+(u-200)*8;
  }
  cout<<"\nCustomer name:";puts(n);
  cout<<"Amount to be paid by customer:"<<billamt;
  getch();
}