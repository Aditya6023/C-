#include"header.cpp"
void inot1()
{ clrscr();
  int m[20],i,n;
  cout<<"Enter the no. of elements required(max.20):";
  cin>>n;
    {
     for(i=0;i<n;i++)
       { cout<<"Enter the value:";cin>>m[i];
       }
    }
  cout<<"Displaying....";
  for(i=0;i<n;i++)
  { cout<<"\n"<<m[i];
  }
  cout<<"\n\nPress any button to go back";
}