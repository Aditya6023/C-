#include"header.cpp"
void strlen()
{ clrscr();
  char str[13];
  cout<<"Enter your string:";gets(str);
  for(int i=0;str[i]!='\0';i++);
  {
  cout<<"Length of a string:"<<i;
  }
  cout<<"\n\nPress any button to go back";
}