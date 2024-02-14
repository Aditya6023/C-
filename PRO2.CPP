
#include"masterfile.cpp"

class emp
 {
 int empno;
 char name[10];
 char dept[10];
 char desg[10];
 float sal;
 char mobile[10];
 public:
 int reteno()
 {
 return empno;
 }

float retsal(){return sal;}
char* retdesg(){return desg;}
char* retname(){return name;}
char* retdept(){return dept;}
char* retmob(){return mobile;}
void set_name(char cnm[]){strcpy(name,cnm);}
void set_empno(int bnm){empno=bnm;}
void set_desg(char typ[]){strcpy(desg,typ);}
void set_sal(float pr){sal=pr;}
void set_dept(char av[]){strcpy(dept,av);};
void set_mobile(char f1[]){strcpy(mobile,f1);}
void search_empno();
void search_mob();
void search_name();
void search_desg();
void search_sal();
void search_dept();
void modifyrec();
void input();
void output();
};
void emp::search_empno()
{

 ifstream fin; emp B;int eno;
 fin.open("data.dat",ios::binary);
 cout<<"\nEnter the employ number :";
 cin>>eno;
	while(fin.read((char*)&B,sizeof(B)))
	{
		if(eno==B.reteno())
			{
				cout<<endl;
				B.output();
				getch();
			}
	}
	fin.close();
}
 void emp::search_mob()
{
 ifstream fin; emp B;char mobile[10];
 fin.open("data.dat",ios::binary);
 cout<<"\nEnter the employ number :";gets(mobile);
	while(fin.read((char*)&B,sizeof(B)))
	{
		if(eno==B.retmob())
			{
				cout<<endl;
				B.output();
				getch();
			}
	}
	fin.close();
}

void emp::search_name()
{
 char name[10];
 ifstream fin; emp B;
 fin.open("data.dat",ios::binary);
 cout<<"\nEnter the Employ Name :";gets(name);
 while(fin.read((char*)&B,sizeof(B)))
	{
		if(strcmpi(comp,B.retname())==0)
			{
				cout<<endl;
				B.output();
				getch();
			}
	}
	fin.close();
}

void emp::search_desg()
{
 ifstream fin; emp B;
 char desg[10];
 fin.open("data.dat",ios::binary);
 cout<<"\nEnter the designation :";
 gets(desg);
 while(fin.read((char*)&B,sizeof(B)))
	{
		if(fl<=B.retdesg())
			{
				cout<<endl;
				B.output();
				getch();
			}
	}
	fin.close();
}
void emp::search_sal()
{
ifstream fin; emp B;float sal;
 fin.open("data.dat",ios::binary);
 cout<<"\nEnter the Salary :";cin>>sal;
	while(fin.read((char*)&B,sizeof(B)))
	{
		if(pr<=B.retsal())
			{
				B.output();
				getch();
			}
	}
	fin.close();
}
 void emp::search_dept()
{
 ifstream fin; emp B;
 char dept[10];
 fin.open("data.dat",ios::binary);
 cout<<"\nEnter the department :";
 gets(dept);
 while(fin.read((char*)&B,sizeof(B)))
	{
		if(fl<=B.retdept())
			{
				cout<<endl;
				B.output();
				getch();
			}
	}
	fin.close();
}

void emp::modifyrec()
{
	 fstream file("data.dat",ios::binary|ios::in|ios::out);
	 bike B; char ch;
	 char found='f';
	 int empno;
	 char name[10];
	 char dept[10];
	 char desg[10];
	 float sal;
	 char mobile[10];
	 int rec;
	 cout<<"\nEnter record Number to modify :"; cin>>rec;
	 int cnt=0;
	 while(file.read((char*)&B,sizeof(B)))
	 {
			cnt++;
			if(cnt==rec)
				{
						cout<<"Record Found....\n";
						found='t';
						B.output();
						cout<<"\nIs this the record to Modify ?";
						cout<<"\nEnter ur choice(y/n) :";cin>>ch;
						if(ch=='y'||ch=='Y')
							{
							 cout<<"Enter the New Name, Press ®Ù to retain old value     : ";
							 gets(name);
							 cout<<"Enter new New Employ Number,Press ®Ù to retain old value        : " ;
							 cin>>empno;
							 cout<<"Enter new Designation, Press ®Ù to retain old value                 : ";
							 gets(desg);
							 cout<<"Enter new Department, Press ®Ù to retain old value       : " ;
							 gets(dept);
							 cout<<"Enter new Salary, Press ®Ù to retain old value: " ;
							 cin>>sal;
							 cout<<"Enter new Mobile Number , Press ®Ù to retain old value         : " ;
							 gets(mobile);


							if(strlen(cnm)>0) B.set_name(cnm);
							if(strlen(bnm)>0)  B.set_empno(bnm);
							if(strlen(typ)>0)  B.set_desg(typ);
							if(strlen(av)>0) B.set_dept(atof(av));
							if(strlen(pr)>0) B.set_sal(atof(pr));
							if(strlen(f1)>0) B.set_mobile(atof(f1));
							file.seekp((cnt-1)*sizeof(emp),ios::beg);
							file.write((char*)&B,sizeof(emp));
							cout<<"Record Modified....";
							file.close();
							getch();
							return;
							}
					else
						 {
						 cout<<"\b Record found but not modified....";
						 getch();
						 }
					}
			}
		if(found=='f')
			{
			cout<<"\nRecord not found!!\n";
			getch();
			file.close();
			return;
			}
}



 void emp::input()
 {
 cout<<"\nPlease enter the details...\n";
 cout<<"\nEmployee number:";cin>>empno;
 cout<<"\nName : ";gets(name);
 cout<<"\nDepartment :";gets(dept);
 cout<<"\nDesignation :";gets(desg);
 cout<<"\nSalary :";cin>>sal;
 cout<<"\nmobile no. ";gets(mobile);
 }
 void emp::output()
 {
 cout<<"\nEmp no:"<<empno;
 cout<<"\nName :";puts(name);
 cout<<"\nDepartment :";puts(dept);
 cout<<"\nDesignation :";puts(desg);
 cout<<"\nSalary :"<<sal;
 cout<<"\nMobile no. :"<<puts(mobile);
 }
void main()
{
clrscr();
int a,b,c;
emp B;

cout<<"*********************Please Identify  Yourself************************"
		<<"1.Admin"
		<<"2.User";
		cin>>c;
		switch(c)
		{
		case 1: cout<<"\n****************Welcome To Employ Database Window*******************"
		<<"\nPlease Enter your chocie :-"
		<<"\n1. MENU"
    <<"\n2. Exit";
     cin>>a;
     if(a==1)
     {        cout<<"\n****************Employ Database*******************"

      <<"\n1. Display records "
      <<"\n2. Exit";
      cout<<"\nPlease Enter Your choice :-";cin>>b;
      switch(b)
      {

      case 1 : B.output();break;
      case 3 : getch(); break;
      default : break;
      }
    }
    else
    getch();
     case 2:  cout<<"\n****************Welcome To Employ Database Window*******************"
    <<"\nPlease Enter your chocie :-"
    <<"\n1. MENU"
    <<"\n2. Exit";
     cin>>a;
     if(a==1)
     {        cout<<"\n****************Employ Database*******************"
      <<"\n1. To input new records"
      <<"\n2. Display records "
      <<"\n3. Search records"
      <<"\n4. Alter records"
      <<"\n5. EXIT";
      cout<<"\nPlease Enter Your choice :-";cin>>b;
      switch(b)
      {
      case 1 : B.input(); break;
      case 2 : B.output();break;
      case 3 : char choice; float pr,av,fl,CC;
	       char comp[30];
	       do
	       {
	       clrscr();
	       cout<<"\n\t\t\t1.SEARCH BY EMPLOY NUMBER"<<endl;
	       cout<<"\t\t\t2.SEARCH BY NAME"<<endl;
	       cout<<"\t\t\t3.SEARCH BY SALARY "<<endl;
	       cout<<"\t\t\t4.SEARCH BY DESIGNATION"<<endl;
	       cout<<"\t\t\t5.SEARCH BY DEPARTMENT"<<endl;
	       cout<<"\t\t\t6.SEARCH BY MOBILE NUMBER"<<endl;
	       cout<<"\t\t\t7.BACK TO PREVIOUS MENU";
	       cout<<"\n\t\t\t\Enter your choice :";
	       cin>>choice;
	       switch(choice)
	       {
	       case 1:search_empno();break;
	       case 2:search_name();break;
	       case 3:search_sal();break;
	       case 4:search_desg();break;
	       case 5:search_dept();break;
	       case 6:search_mob();break;
	       case 7:break;
	       default:cout<<"WRONG CHOICE.............";break;
	       }
	       }
	       while(choice!=7);

      case 4:modify();break;
      case 5:break;
      default : break;
      }
    }

    else
    getch();
   }
   getch();
}




