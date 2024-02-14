#include "header.cpp"
void sumorc()
{ clrscr();
 int A[10][10],i,j,r[10],c[10],row,col;
 cout<<"Enter no of rows and columns:";
 cin>>row>>col;
 cout<<"Enter matrix elements:";
 for(i=0;i<row;i++)
 { for(j=0;j<col;j++)
   cin>>A[i][j];
 }
    for(i=0;i<row;i++)
  {
       r[i]=0;
       for(j=0;j<col;j++)
       r[i]=r[i]+A[i][j];
  }
     for(j=0;j<col;j++)
    {
      c[j]=0;
      for (i=0;i<row;i++)
      c[j]=c[j]+A[i][j];
    }
cout<<"Sum of rows :"<<row;
cout<<"\nSum of columns :"<<col;
cout<<"\n\nPress any button to go back";
}