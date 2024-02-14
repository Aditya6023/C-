#include"header.cpp"
void main()
{ clrscr();
  char n[34];int i,l=0 ,b=0;
  cout<<"Enter the string:-";gets(n);
  for(i=0;n[i]!='\0';i++)
  cout<<"\nLength of strings:-"<<i;l+=i;cout<<"\nNumber of strings:-"<<l;
  if(n[i]==" ")b++;cout<<"\nNumber of backspaces:-"<<b;
  getch();
  }
