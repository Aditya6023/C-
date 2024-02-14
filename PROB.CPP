#include"header.cpp"
void main()
{ clrscr();
  int m[5],i,n;
  cout<<"Enter the no. of elements required(max.5):";cin>>n;
  cout<<"Enter your marks:";
  while(n!<6)
  { {cout<<"Enter no. of elements required again:";
    cin>>n;
  }}
   for(i=0;i<n-1;i++)
   { cin>>m[i];
   }
   for(i=0;i<n-1;i++)
   { cout<<"\n"<<m[i];
   }
   getch();
}