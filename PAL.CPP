#include"header.cpp"
void main()
{ clrscr();
  char n[10],m[10];
  cout<<"Enter your name:";gets(m);
  n[10]=m[10];
  cout<<"Reversed name:";cout<<strrev(m);
  if(n[10]==m[10])
  {cout<<"\nok";}
  else {cout<<"\noh no";}getch();}