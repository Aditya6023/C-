//question no. 1 sum of series
#include<iostream.h>
#include<conio.h>
#include<math.h>
double sum(void)
{
long fact;
int i,j,n,k;
double x,sm=0;
int sign=-1;
cout<<"Enter the value of x:"; cin>>x;
cout<<"ENter the no. of terms:";cin>>n;
for(i=1,j=1;i<=n;i++,j=j+2)
{
	 fact=1;
	 k=j;
	 while(k>1)
	 {
	 fact*=k;
	 k--;
	 }

	 sm+=(-1)*sign*fact/pow(x,j);
	 sign*=-1;
}
return sm;
}
void main()
{
 clrscr();
 cout<<"The sum of series  is="<<sum();
 getch();
}