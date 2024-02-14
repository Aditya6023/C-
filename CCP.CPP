#include"header.cpp"
const int n=3;
struct info
{
  char cnt[15];
  char cap[15];
  float inc;
};
void searchbycountry(info a[50],char it[]);
void searchbycapital(info a[50],char it[]);
void ccp()
{ clrscr();
info in[50];
int i;
int ch;
char item[15];
for(i=0;i<n;i++)
   {
   cout<<"Enter the country name:"; gets(in[i].cnt);
   cout<<"Enter the capital city :"; gets(in[i].cap);
   cout<<"Enter the per capita income:"; cin>>in[i].inc;
   }
 do
   {
   clrscr();
   cout<<setw(45)<<"Search Menu";
   cout<<"\n\n"<<setw(50)<<"1. Search by Country name ";
   cout<<"\n"<<setw(50)<<"2. Search by Capital City ";
   cout<<"\n"<<setw(31)<<"3. Exit";
   cout<<"\n\n"<<setw(42)<<"Enter the choice:";
   cin>>ch;
     switch(ch)
     {
     case 1:   cout<<"\nEnter the country name to search :";
	  gets(item);
	  searchbycountry(in,item); break;
     case 2:   cout<<"\nEnter the capital city to search :";
	  gets(item);
	  searchbycapital(in,item); break;
     case 3: break;
     default: cout<<"\nInvalid Choice pl. try again...";
     }
     cout<<"\nPress any key to continue....";
     getch();
  }while(ch!=3);
}
void searchbycountry(info in[],char cntry[])
{
int status=0;
for(int i=0;i<n;i++)
   {
    if(strcmpi(in[i].cnt,cntry)==0)
	{
	 cout<<"\nThe Capital city of "<<cntry<< " is= "<<in[i].cap<<endl;
	 cout<<"\nThe Per Capita income is :"<<in[i].inc;
	 status=1;
	 break;
	}
    }
if(status==0)
cout<<"\nSorry no such record is available....";
getch();
}

void searchbycapital(info in[],char cp[])
{
int status=0;
 for(int i=0;i<n;i++)
  {
    if(strcmpi(in[i].cap,cp)==0)
	{
	 cout<<"\nThe Country belonging to "<<cp<< " is= "<<in[i].cnt<<endl;
	 cout<<"\nThe Per Capita income is"<<in[i].inc;
	 status=1;
	 break;
	}
  }
if(status==0)
cout<<"\nSorry no such record is available....";

}
