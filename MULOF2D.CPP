#include"header.cpp"
void mulof2d()
{
clrscr();
int A[10][10],B[10][10],C[10][10];
int i,j,m,n,p,q,k;
cout<<"Enter the no. of rows and column required in MAT A:";cin>>m>>n;
cout<<"Enter the no. of rows and column required in MAT B:";cin>>p>>q;
if(n!=p)
	{
	cout<<"Matrices are not multiplication competable";
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
	//performing matrix multiplication
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
				 C[i][j]=0;
				 for(k=0;k<n;k++)
				 {
				 C[i][j]+=A[i][k]*B[k][j];
				 }
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
			for(j=0;j<q;j++)
				{
				cout<<C[i][j]<<" ";
				}
		cout<<endl;
		}
	 cout<<"\nPress any botton to go back";
}