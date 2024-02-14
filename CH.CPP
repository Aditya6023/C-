#include"header.cpp"
void main()
{clrscr();
 char ch,ch1;do{
 cout<<"\nEnter the character:";cin>>ch;
 if(ch>=48 && ch<=57)
 {cout<<"You entered a digit";}
 else if(ch>=65 && ch<=90)
 {cout<<"You entered a uppercase";}
 else if(ch>=97 && ch<=122)
 {cout<<"You entered a lowercase";}
 else
 {cout<<"Some special symbol";}cout<<"\nWant to enter again?:";cin>>ch1;
 if(ch1=='y'||ch1=='Y')
 {}else if(ch1!='y'||ch1!='Y')exit(0);
  }while(ch1=='y'||ch1=='Y');
  getch();}