#include"header.cpp"
void main()
{ clrscr();
   char str[56];
   int i,j,n;
   cout<<"E:";gets(str);n=strlen(str);
   for(i=0,j=n-1;i<n/2;i++,j--)
   { char t=str[i];
     str[i]=str[j];
     str[j]=t;}cout<<"R:";puts(str);
   getch();
  }