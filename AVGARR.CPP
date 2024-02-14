#include"header.cpp"
void main()
{ clrscr();
  int m[50],a,i;float av,s1=0;
  cout<<"Enter how many elements(max.50):";cin>>a;
  for(i=0;i<a;i++)
  { cout<<"Enter the value:";cin>>m[i];
    s1+=m[i];
    av=(s1/2);
  }
  cout<<"Displaying...";
  for(i=0;i<a;i++)
  { cout<<"\n"<<m[i];}cout<<"\nAverage is:"<<av;
    cout<<"\n\nPress any button to go back";
  getch();
  }
