#include"header.cpp"
void main()
{ clrscr();
  long int a,n,re=0,r,sum=0;char ch;   do{clrscr();
  cout<<"Enter the number:";cin>>n;a=n;
  while(a>0)
  { r=a%10;
    sum+=r;
    re=re*10+r;
    a=a/10;
  }
    cout<<"Original number:"<<n<<"\nReversed number is:"<<re<<"\nSum of given number is:"<<sum;

    if(n==re)
   { cout<<"\nIt's a Palindrome";
   }
    else { cout<<"\nIt's not a Palindrome";
	 }cout<<"\nEnter ur choice:";cin>>ch;
	 if(ch=='y'||ch=='y'){}
	 else {exit(0);}}while(ch=='y'||ch=='Y');
	 getch();
}