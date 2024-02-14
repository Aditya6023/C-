#include"header.cpp"
struct Employ
{ int Id;
  char Name[25];
  int Age;
  long Salary;
};
void arrostru()
{ clrscr();
  int i;Employ Emp[3];
  for(i=0;i<3;i++)
  { cout<<"\nEnter details of "<<i+1<<" Employee";
    cout<<"\n\tEnter Employee Id:";
    cin>>Emp[i].Id;
    cout<<"\n\tEnter Employee Name:";
    gets(Emp[i].Name);
    cout<<"\n\tEnter Employee Age:";
    cin>>Emp[i].Age;
    cout<<"\n\tEnter Employee Salary:";
    cin>>Emp[i].Salary;
  }
    cout<<"\nDetails of Employees";
     for(i=0;i<3;i++)
     cout<<"\n"<<Emp[i].Id<<"\t"<<Emp[i].Name<<"\t"<<Emp[i].Age<<"\t"<<Emp[i].Salary;
     cout<<"\n\nPress any buttonto go back";
}