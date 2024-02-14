#include"header.cpp"
void sumof2d()
{
clrscr();
int A[10][10],B[10][10],C[10][10];
int i,j,m,n,p,q;
cout<<"Enter no. of rows and column requird in MAT A:";cin>>m>>n;
cout<<"Enter no. of rows and column required in MAT B:";cin>>p>>q;
if(m!=p||n!=q)
	{
	cout<<"Matrices are not addition competable:";
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

