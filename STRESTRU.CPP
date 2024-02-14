#include "header.cpp"
struct student
{ char name[50];
  int roll;
  float marks[5];
  char grade;
}; student s;
void strestru()
{ clrscr();
  cout<<"Enter information of student:"<<endl;
    { cout<<"Enter Roll no.:";cin>>s.roll;
      cout<<"Enter name:";gets(s.name);
      cout<<"Enter marks in 5 subjects:";
      cout<<endl;
      for(int i=0;i<5;i++)
       { cout<<"Subject"<<i+1<<":";
	 cin>>s.marks[i];
       }
    }
     float avg,total;
     total=(s.marks[0]+s.marks[1]+s.marks[2]+s.marks[3]+s.marks[4]);
     avg=total/5;
     if(avg<50)s.grade='F';
    else if(avg<60)s.grade='C';
    else if(avg<80)s.grade='B';
    else s.grade='A';
   cout<<"\n\nStudent result:"<<endl;
     { cout<<"\nRoll number:"<<s.roll<<endl;
       cout<<"Name:";puts(s.name);
       cout<<"\nTotal Marks:"<<total<<endl;
       cout<<"Grade:"<<s.grade<<endl;
     }
     cout<<"\n\nPress any button to go back";
}