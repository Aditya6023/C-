#include<fstream.h>
#include<stdio.h>
#include<conio.h>
class Student
	{
			int Sch_No;
			char SName[20];
			char Class[10];
			char Sec;
			float Percentage;
	 public:
		void Input();
		void Display();
		int Ret_Sch_No()
			{
				return Sch_No;
			}
		};

void Student::Input()
	{
		cout<<"Enter the Scholar No: "; cin>>Sch_No;
		cout<<"Enter the Student Name : ";gets(SName);
		cout<<"Enter the Class : "; gets(Class);
		cout<<"Enter the Section :"; cin>>Sec;
		cout<<"Enter the Percentage :"; cin>>Percentage;
	}

void Student::Display()
	{
	 cout<<endl;
	 cout<<Sch_No<<"\t"<<SName<<"\t"<<Class<<"\t"<<Sec<<"\t"<<Percentage<<endl;
	}

void Addrec()
	{
		Student S;
		ofstream fout;
		fout.open("D:\\student.dat",ios::app|ios::binary);
		 if(!fout)
				{
				cout<<"Can't open file ";;
				getch();
				return;
				}
		char ch;
		do
			{
				S.Input();
				fout.write((char*)&S,sizeof(S));
				cout<<"\nDo you want to add more records(y/n) : ";
				cin>>ch;
			}while(ch=='y'||ch=='Y');
	 fout.close();
	}


void Searchrec(int schno)
 {
		Student S;
		ifstream fin;
		fin.open("d:\\Student.dat",ios::in|ios::binary);
		 if(!fin)
				{
				cout<<"Can't open file ";;
				getch();
				return;
				}
		char ch; int flag=0;
		while(fin.read((char*)&S,sizeof(S)))
			{
				int n=S.Ret_Sch_No();
				if(schno==n)
				 {
				 flag=1;
				 S.Display();
				 }
		 }
	 if(flag==0)
		{
		cout<<"\n Record not found...";
		getch();
		}
	 fin.close();
	}


void main()
	{
	int num;
	int ch;
	do{
	clrscr();
	cout<<"\n --------Employee Menu----------\n";
	cout<<"1. Add records  "<<endl<<endl;
	cout<<"2. Search a Student"<<endl<<endl;
	cout<<"3. Exit";
	cout<<"\nEnter your choice ...";
	cin>>ch;
	switch(ch)
		{
		case 1:Addrec();  break;
		case 2:cout<<"Enter the Scholar Number to search :";
					 cin>>num ;
					 Searchrec(num); break;
		case 3: break;
		default: cout<<"Wrong choice....";
		}
	cout<<"\n Press any key to continue...";
	getch();
	}while(ch!=3);
}

