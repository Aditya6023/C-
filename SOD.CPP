//this program sums the digits of a number and reverse the number
#include<iostream.h>
#include<conio.h>
void reversenum(long n)
{
	int sum=0;
	int digits=0,r;
	long newnum=0;
	while(n!=0)
	{
	 r=n%10;
	 sum+=r;
	 newnum=newnum*10+r;
	 n/=10;
	}
cout<<"\nThe sum of digits of the number is="<<sum<<endl;
cout<<"\nThe new number is :"<<newnum;
}
void main()
{
 clrscr();
 long num;
 cout<<"Enter the number :";
 cin>>num;
 cout<<"The original number is :"<<num<<endl;
 reversenum(num);
 getch();
}
