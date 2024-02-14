#include"header.cpp"
void main()
{  clrscr();
  int a[3][3];
  int i,j,s=0;
  cout<<"Enter 9 elements of Matrix:";
  for(i=0;i<3;i++)
   { for(j=0;j<3;j++)
     cin>>a[i][j];
   } cout<<"Matrix:\n";
  for(i=0;i<3;i++)
   { for(j=0;j<3;j++)
     cout<<a[i][j]<<" ";
     cout<<endl;
   }
  for(i=0;i<3;i++)
   { for(j=0;j<3;j++)
     s=s+a[i][j];
    cout<<"Sum of"<<i+1<<" row is"<<s;
     s=0;
    cout<<endl;
   }
 cout<<endl;
  for(i=0;i<3;i++)
   { for(j=0;j<3;j++)
     s=s+a[j][i];
    cout<<"Sum of"<<i+1<<" column is"<<s;
    s=0;
    cout<<endl;
   }
 cout<<endl;
 cout<<"\nPrss any button to go back";
getch();
}