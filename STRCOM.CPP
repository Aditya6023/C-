#include"header.cpp"
void strcom()
{
clrscr();
char str1[80],str2[80];int n1,n2,status=0;
cout<<"Enter the first string:";gets(str1);
cout<<"Enter the second string:";gets(str2);
n1=strlen(str1); //length of string1
n2=strlen(str2);// length of string2
if(n1!=n2)
	{	cout<<"The string are of not the same length";
		getch();
		return;
	}
for(int i=0; i<n1; i++)
	{
	if(str1[i]!=str2[i])
			{
			status=1;break;
			}
	}

if(status==0)
	cout<<"The strings are identical";
else
	cout<<"The strings are not identical";
	cout<<"\n\nPress any button to go back";
}

