#include"header.cpp"
void main()
{ clrscr();
  int m[5],a,i;
  cout<<"Enter how many elements(max.5):";cin>>a;
  for(i=0;i<a;i++)
  { cout<<"Enter the value:";cin>>m[i];
  }
  cout<<"Displaying...";
  for(i=0;i<a;i++)
  { cout<<"\n"<<m[i];
  }
  getch();
}
