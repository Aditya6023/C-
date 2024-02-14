#include"header.cpp"
void main()
{ clrscr();int n,i;
  cout<<"Enter the no.:";cin>>n;
  if(n%2==0)
  {  cout<<"Even";
  }
  else
  { cout<<"Odd";
  }
  for(i=2;i<=n;i++)
  { if((n%i)==0)break;
   } if(n==i)
    {
     cout<<"\nIt's a prime number";
    }
    else
    {
     cout<<"\nIt's not a prime number";
    }
  getch();
}