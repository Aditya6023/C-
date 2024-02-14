#include"header.cpp"
void main()
{ clrscr();
  int m[5],n,i,p;
  cout<<"Enter no. of elements required(max.5):";cin>>n;p=n;
  if(n>5)
  { cout<<"Enter the required elements again(max.5):";
    cin>>p;
  }
  else
  { cout<<"Enter your marks:";
  }
  for(i=0;i<=n-1;i++)
  { cin>>m[i];
  }
  cout<<"\nDisplaying...";
  for(i=0;i<=n-1;i++)
  { cout<<"\n"<<m[i];
  }
  getch();
 }