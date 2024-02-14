#include"header.cpp"
void dia2d()
{ clrscr();
   int m,n,i,j,A[10][10];
   cout<<"Enter the no. of rows and columns of the matrix:";
   cin>>m>>n;
   cout<<"Enter the array elements:";
   for(i=0;i<m;i++)
     { for(j=0;j<n;j++)
     cin>>A[i][j];
     }
      cout<<"Matrix:\n";
     for(i=0;i<m;i++)
    {  for(j=0;j<n;j++)
       cout<<A[i][j]<< " ";
       cout<<"\n";
    }
  if(m==n)
  { cout<<"\nThe entered array is a square matrix.";
  }
  else
   { cout<<"\nThe entered array is not a square matrix.";
     return;
   }
cout<<"\nThe diagonal elements are :\n";
for(i=0;i<m;i++)
 { for(j=0;j<n;j++)
  {  if(i==j)
      cout<<A[i][j];
  else
cout<< " ";
  }
cout<<"\n";
 }
cout<<"\n\nPrss any button to go back";
}