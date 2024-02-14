#include"header.cpp"
void prod()
{ clrscr();
  int m[5],a,i;float n=1;
  cout<<"Enter how many elements(max.5):";cin>>a;
  for(i=0;i<a;i++)
  { cout<<"Enter the value:";cin>>m[i];
    n*=m[i];}
  cout<<"Displaying...";
  for(i=0;i<a;i++)
  { cout<<"\n"<<m[i];}cout<<"\nProduct is:"<<n;
    cout<<"\n\nPress any button to go back";}
