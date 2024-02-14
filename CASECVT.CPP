#include"header.cpp" 
void casecvt()
{ clrscr();
  char str[20]; int i;
  cout<<"Enter the String:"; gets(str);
  for(i=0;i<=strlen(str);i++)
 { if(str[i]>=65 && str[i]<=92)
   { str[i]=str[i]+32; }
   else
   if(str[i]>=97 && str[i]<=122)
   { str[i]=str[i]-32; }
 }
  cout<<"The Converted String:"<<str;
  cout<<"\n\nPress any button to go back" ;
}
