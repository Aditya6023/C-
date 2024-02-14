#include"header.cpp"
void main()
{ clrscr();
   int ma=0,mi,n[5],i;
   cout<<"Enter the values:";
   for(i=0;i<5;i++)
   { cin>>n[i];
     if(n[i]>ma)ma=n[i];
     if(n[i]<mi)mi=n[i];}
     cout<<ma<<"\n"<<mi;getch();}
