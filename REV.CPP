#include"header.cpp"
void main()
{ clrscr();
  long n,m,rev=0,rem;int s=0;cout<<"Enterr the number:";cin>>n;
  cout<<"Original number:"<<n;m=n;
  while(n!=0)
  { rem=n%10;
    s+=rem;
    rev=rev*10+rem;
    n=n/10;}cout<<"\nReversed number:"<<rev<<"\nSum is:"<<s;

    if(rev!=m) {cout<<"\nIt's not palindrome";}
    else {cout<<"\nIt is Palingdrome";}
    getch(); }
