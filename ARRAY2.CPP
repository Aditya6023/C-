#include"header.cpp"
void main()
{ clrscr();
  int i,n[5],s1=0,s=0,c=0,c1=0;
  cout<<"Enter the values:";
  for(i=0;i<5;i++)
  { cin>>n[i];
    if(n[i]%2==0)
    {c++;s+=n[i];}
    else
    {c1++;s1+=n[i];}
    }cout<<"Now elements are:";
    for(i=0;i<5;i++)
    { cout<<n[i]<<" ";}cout<<s1<<"\n"<<s<<"\n"<<c<<"\n"<<c1;getch();}