#include"header.cpp"
void main()
{ clrscr();
  int m[5],i,n;
  cout<<"Enter number of elements:";
  cin>>n;
  if(n>5)
  cout<<"Enter your marks:";
  for(i=0;i<n;i++)
  { cin>>m[i];
  }
  cout<<"Displaying....";
  for(i=0;i<n;i++)
  { cout<<"\n"<<m[i];
  }
  getch();
}