#include"header.cpp" 
void inot2() 
{ clrscr();
  int arr[10][10],row,col,i,j;
  cout<<"Enter no. of row required (max 10):";
  cin>>row;
  cout<<"Enter no. of column required (max 10):";
  cin>>col;
  cout<<"Now Enter "<<row<<"*"<<col<<" array Elements:";
      for(i=0;i<row;i++)
	{ for(j=0;j<col;j++)
	 { cin>>arr[i][j];
	 }
	} cout<<"The Array is :";
	 for(i=0;i<row;i++)
	   { for(j=0;j<col;j++)
	    { cout<<arr[i][j]<<" ";
	    } cout<<"\n";
	   }
	   cout<<"\n\nPress any button to go back";
}