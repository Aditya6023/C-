#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
 char name[20],cl;
 int Rno,m1,m2,m3;
 public:
 void input();
 void output();
};
void main()
{
clrscr();
int a;
float perc;
student s;

cout<<"                   Welcome To Student Database                    ";
cout<<"\n\nMenu";
cout<<"\n\n1. Input Records";
cout<<"\n\n2. Display Records";
cout<<"\n\n3. Exit";
cout<<"\n\nPlease Enter Your Choice :-";cin>>a;
 switch(a)
 { case 1  : s.input();break;
   case 2  : s.output();break;
   case 3  : return;break;
   default : return;break;
  }
}
     void input()
     {       cout<<"\n\nPlease Enter The Name : ";gets(s.name);break;
	     cout<<"\n\nPlease Enter The Class : ";cin>>s.cl;break;
	     cout<<"\n\nPlease Enter The RNo. : ";cin>>s.Rno;break;
	     cout<<"\n\nPlease Enter Marks of s1 : ";cin>>s.m1;break;
	     cout<<"\n\nPlease Enter Marks of s2 : ";cin>>s.m2;break;
	     cout<<"\n\nPlease Enter Marks of s3 : ";cin>>s.m3;break;
     }
     void output()
     {       cout<<"\n\nName :";puts(s.name);break;
	     cout<<"\n\nClass :"<<s.cl;break;
	     cout<<"\n\nRNo. :"<<s.Rno;break;
	     cout<<"\n\nM1   :"<<s.m1;break;
	     cout<<"\n\nM2   :"<<s.m2;break;
	     cout<<"\n\nM3   :"<<s.m3;break;
	     perc=((m1+m2+m3)/300)*100;
	     cout<<"\n\nPercentage :"<<perc;break;
      }