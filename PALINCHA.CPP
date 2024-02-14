//Program to check a string is palindrom or not
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char str1[80],str2[80];
int i,j,len;
char t;
cout<<"Enter the string:"; gets(str1);
strcpy(str2,str1);
len=strlen(str2);
for(i=0,j=len-1; i<len/2; i++, j--)
{
t=str2[i];
str2[i]=str2[j];
str2[j]=t;
}
if(strcmpi(str1,str2)==0)
cout<<"The string is palindrom...";
else
cout<<"The string is not palindrom...";
getch();
}