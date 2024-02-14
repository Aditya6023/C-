#include"header.cpp"
struct Employee
{  int Id;
   char Name[25];
   int Age;
   long Salary;
};
void deacc()
{ clrscr();
 Employee E={2,"Suresh",35,35000};
 cout<<"Employee Details";
 cout<< "\nEmployee Id:"<< E.Id;
 cout<< "\nEmployee Name:"<< E.Name;
 cout << "\nEmployee Age:"<< E.Age;
 cout<< "\nEmployee Salary:"<< E.Salary;
}