//this program sums the digits of a number and reverse the number
#include<iostream.h>
#include<conio.h>
int newnum(long n)
{
	int N,r;
	int Big=0,Small;
	while(n!=0)
	{
	 r=n%10;
	 if(r>Big) Big=r;
	 if(r<Small)Small=r;
	 n/=10;
	}
cout<<"\nThe largest digit is="<<Big<<endl;
cout<<"\nThe smallest digit is :"<<Small;
N=Big*10+Small;
return N;
}
void main()
{
 clrscr();
 long num;
 int nnum;
 cout<<"Enter the number :";
 cin>>num;
 cout<<"The original number is :"<<num<<endl;
 nnum=newnum(num);
 cout<<"\nThe New number made by smallest and largest digits is="<<nnum;
 getch();
}
