#include"header.cpp"
void main()
{
clrscr();
int A[10][10],B[10][10],C[10][10];
int i,j,m,n,p,q,status=0;
cout<<"Enter no. of rows and column required in MAT A:";cin>>m>>n;
cout<<"Enter no. of rows and column required in MAT B:";cin>>p>>q;
if(m!=p||n!=q)
	{
	cout<<"Matricx dimensions are not the same";
	cout<<"\n\nPress any button to go back";
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
	//performing matrix comparision
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
				 if(A[i][j]!=B[i][j])
					{
						 status=1; break;
					};
				if(status==1) break;
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

if(status==1)
cout<<"\nThe matrices are not identical";
else
cout<<"\nThe matrices are identical";
cout<<"\n\nPress any button to go back";
getch();
}
