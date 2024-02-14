#include"header.cpp"
void strrev1()
{ clrscr();
   char str[56];
   int i,j,n;
   cout<<"Enter the string:";gets(str);
   n=strlen(str);
   for(i=0,j=n-1;i<n/2;i++,j--)
   { char t=str[i];
     str[i]=str[j];
     str[j]=t;
   }
     cout<<"Reversed string:";puts(str);
     cout<<"\n\nPress any button to go back";
}