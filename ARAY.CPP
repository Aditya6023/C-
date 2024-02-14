#include"header.cpp"
void main()
{ clrscr();
  int n[50],i,a;
  cout<<"Enter no.of elements required:";cin>>a;
  cout<<"Enter the values:";
  for(i=0;i<a;i++)
  { cin>>n[i];
    if(n[i]%2==0)
    n[i]*=5;
    else n[i]*=3;
    }
    for(i=0;i<a;i++)
    { cout<<"\n"<<n[i];}getch();}