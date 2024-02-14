#include"header.cpp"
void main()
{ clrscr();
  char n[34];int i,b=0;
  cout<<"Enter the string:-";gets(n);
  for(i=0;n[i]!='\0';i++)
  if(n[i]==' ')b++;cout<<"\nNumber of backspaces:-"<<b;
  getch();
  }
