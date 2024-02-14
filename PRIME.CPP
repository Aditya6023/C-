#include"header.cpp"
void main()
{ clrscr();
  int n,i; do{ clrscr();
  cout<<"Enter the number:";
  cin>>n;
  for(i=2;i<=n;i++)
  { if(n%i==0)
    break;
  } if(n==i)
    { cout<<"\nIt's a prime number";
    }
    else
    { cout<<"\nIt's not a prime number";
    }getch();}while(n!=0);
    getch();
}