#include"header.cpp"
void main()
{ clrscr();
 int a,n1=0,n2=0,n3=0,n4=0,n5=0;
 do{cout<<"\nEnter the age:";cin>>a;
    if (a>=1&&a<=17){cout<<n5++<<"Not eligable to vote!!!";}
   else if(a>=18&&a<=30){n1++;}
   else if(a>=31&&a<=50){n2++;}
   else if(a>=51&&a<=80){n3++;}
   else if(a>80){n4++;}}while(a!=0);
   cout<<"\nAge between(1-17):"<<n5;
   cout<<"\nAge between(18-30):"<<n1;
   cout<<"\nAge between(31-50):"<<n2;
   cout<<"\nAge between(51-80):"<<n3;
   cout<<"\nAge between(above 80):"<<n4;getch();}
