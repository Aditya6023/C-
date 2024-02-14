#include"header.cpp"
void main()
{ clrscr();
  int s=0,m[5],i;
  cout<<"Enter the marks:";
  for(i=0;i<5;i++)
  { cin>>m[i];
   }for(i=0;i<5;i++)
    {cout<<"Displaying Marks:"<<m[i]<<"\n";s=s+m[i];}cout<<"Sum:"<<s;
   getch();}