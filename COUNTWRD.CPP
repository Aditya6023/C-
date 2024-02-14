#include"header.cpp"
void countwrd()
{
clrscr();
char str[80];
int n1=0;
cout<<"Enter the string:";gets(str);
for(int i=0; str[i]!='\0';i++)
	{
	if(str[i]==' ')
	n1++;
	}
cout<<"The total words in the string are :"<<n1+1<<"\n\nPress any button to go back";
}

