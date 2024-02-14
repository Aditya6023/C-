#include"header.cpp"
void count(char str[])
{
int i; char ch;
int digits=0, others=0,vow=0;
for(i=0; str[i]!='\0';i++)
  {
 if(isdigit(str[i]))digits++;
 else if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')vow++;
 else others++;
  }
cout<<"Total digits :"<<digits<<endl;
cout<<"Total vowels :"<<vow<<endl;
cout<<"Total other characters:"<<others;
}

void countdvs()
{ clrscr();
 char str[80];
 cout<<"Enter the string:";
 gets(str);
 count(str);
 cout<<"\n\nPress any button to go back";
}



   