#include"header.cpp"
void maxmin2()
{ clrscr();
  int mat[10][10];
  int i,j,row,col,small,big;
  cout<<"Enter the no. of rows and column the matrix:";
  cin>>row>>col;
  cout<<"Enter the elements of the matrix:";
  for(i=0;i<row;i++)
   { for(j=0;j<col;j++)
     cin>>mat[i][j];
   }
  big=mat[0][0];
  small=mat[0][0];
  for(i=0;i<row;i++)
  { for(j=0;j<col;j++)
    { if(mat[i][j]<small)
      small=mat[i][j];
      if(mat[i][j]>big)
      big=mat[i][j];
    }
  } cout<<"The smallest element in the matrix is:"<<small;
    cout<<"\nThe biggest element in the matrix is:"<<big;
    cout<<"\n\nPress any button to go back";
}