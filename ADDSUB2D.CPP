#include"header.cpp"
void sumof2d()
{
clrscr();
int A[10][10],B[10][10],C[10][10];
int i,j,m,n,p,q;
cout<<"Enter no. of rows and column required in MAT A:";cin>>m>>n;
cout<<"Enter no. of rows and column required in MAT B:";cin>>p>>q;
if(m!=p||n!=q)
	{
	cout<<"Matrices are not addition competable";
	getch();
	return;
	}
cout<<"Enter the elements of MAT A: ";
	for(i=0;i<m;i++)
		{
		 for(j=0;j<n;j++)
		 {
		  cin>>A[i][j];
		 }
		}
cout<<"Enter the elements of MAT B: ";
	for(i=0;i<p;i++)
	   {
	    for(j=0;j<q;j++)
	    {
	     cin>>B[i][j];
	    }
	   }
	//performing matrix addition
	for(i=0;i<m;i++)
	       {
		for(j=0;j<n;j++)
		{
		 C[i][j]=A[i][j]+B[i][j];
		}
	       }
	cout<<"\nDisplaying Matrix A\n";
	for(i=0;i<m;i++)
		{
		 for(j=0;j<n;j++)
		 {
		  cout<<A[i][j]<<" ";
		 }
		cout<<endl;
		}
	cout<<"\nDisplaying Matrix B\n";
	for(i=0;i<p;i++)
		{
		 for(j=0;j<q;j++)
		 {
		  cout<<B[i][j]<<" ";
		 }
		cout<<endl;
		}
	cout<<"\nDisplaying Matrix C\n";
	for(i=0;i<m;i++)
		{
		 for(j=0;j<n;j++)
		 {
		 cout<<C[i][j]<<" ";
		 }
		cout<<endl;
		}

}

void subof2d()
{
clrscr();
int A[10][10],B[10][10],C[10][10];
int i,j,m,n,p,q;
cout<<"Enter no. of rows and column required in MAT A:";cin>>m>>n;
cout<<"Enter no. of rows and column required in MAT B:";cin>>p>>q;
if(m!=p||n!=q)
	{
	cout<<"Matrices are not subtraction competable";
	getch();
	return;
	}
cout<<"Enter the elements of MAT A: ";
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
				cin>>A[i][j];
				}
		}
	cout<<"Enter the elements of MAT B: ";
	for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
				{
				cin>>B[i][j];
				}
		}
	//performing matrix sudstraction
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
				C[i][j]=A[i][j]-B[i][j];
				}
		}
	cout<<"\nDisplaying Matrix A\n";
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
				cout<<A[i][j]<<" ";
				}
		cout<<endl;
		}
	cout<<"\nDisplaying Matrix B\n";
	for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
				{
				cout<<B[i][j]<<" ";
				}
		cout<<endl;
		}
	cout<<"\nDisplaying Matrix C\n";
 for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
				cout<<C[i][j]<<" ";
				}
		cout<<endl;
		}

}

 void addsub2d()
 {
   int ch;
   do
   { clrscr();
     cout<<setw(56)<<"Addition and Substraction Menu";
     cout<<"\n"<<setw(48)<<"1.Addition of 2 matrices";
     cout<<"\n"<<setw(52)<<"2.Substraction of 2 matrices";
     cout<<"\n"<<setw(30)<<"3.Exit";
     cout<<"\n\n"<<setw(43)<<"Enter your choice:";cin>>ch;
     switch(ch)
     {  case 1:sumof2d();break;
	case 2:subof2d();break;
	case 3:;break;
	default:cout<<"Enter your choice again";
     } cout<<"\n\nPress any button to continue";
       getch();
    }while(ch!=3); 
}

