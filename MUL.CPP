#include"header.cpp"
void fact()
{ int w,b,fact=1;
  cout<<"Enter the number:";cin>>w;b=w;
  while(w!=0)
  {fact*=w;
   --w;}
  cout<<"The factorial of "<<b<<" is "<<fact;
 }
void rev()
{
  long a,b,c=0;
  int sum=0,r;
  cout<<"Enter the number:";cin>>a;
  b=a;
  while(b!=0)
  { int r=b%10;
    //cout<<r;
    sum+=r;
    c=c*10+r;
    b=b/10;
    }
    cout<<"The original number is:"<<a;
    cout<<"\nThe reversed number is:"<<c;
    cout<<"\nTheir sum is:"<<sum;

    }
void sici()
{
  float p,r,t,si,ci;int ch;cout<<"1.Simple Interest"<<"\n2.Compound Interest";
  cout<<"\nEnter your choice(1-2):";cin>>ch;
  cout<<"Enter principal,rate,time:";cin>>p>>r>>t;
  if(ch==1)
  { si=(p*r*t)/100;
    cout<<"The simple interest is:"<<si;
    }
  else if(ch==2)
  { ci=p*pow((1+r/100),t)-p;
    cout<<"The compound interest is:"<<ci;
    }
    else cout<<"Wrong choice";
   }
   void ao()
{
  int a,b,res;char ch;
  cout<<"Enter two numbers:";cin>>a>>b;
  cout<<"Enter the operands (+,-,*,/):";cin>>ch;
  if(ch=='+')
  res=a+b;
  else if(ch=='-')
  res=a-b;
  else if(ch=='*')
  res=a*b;
  else if(ch=='/')
  res=a/b;
  else if(ch=='%')
  res=a%b;
  else
  cout<<"Wrong choice!!!";
  cout<<"The result is="<<res;

  }
void quo()
{
  int a,b,q,r;
  cout<<"Enter two numbers:";cin>>a>>b;
  q=a/b;
  r=a%b;
  cout<<"Quotient is:"<<q<<"\nRemainder is:"<<r;

  }
void tri()
{
  float h,b,ar;
  cout<<"Enter the base:";cin>>b;
  cout<<"Enter the height:";cin>>h;
  ar=(b*h)/2;
  cout<<"Area of a triangle is:"<<ar;
  }
void avg()
      {
  float Eng,Hin,Soc,Sci,Math,cat,com,Marks,Avg,perc;
  cout<<"The marks of 5 subjects = ";
  cin>>Eng>>Hin>>Soc>>Sci>>Math;
  Marks=Eng+Hin+Soc+Sci+Math;
  Avg=Marks/5;
  cout<<"The total average marks = "<<Avg;
  perc=(Marks/500)*100;
  cout<<"\nOverall percentage is: "<<perc<<"%";
	}
 void arp()
{
  float r,a,p;
  cout<<"\nEnter the radius:";cin>>r;
  a=3.14*r*r;
  cout<<"Area of a circle is:"<<a;
  p=2*3.14*r;
  cout<<"\nPerimeter of a circle:"<<p;
}
  void evod()
 {
  int a;
  cout<<"\nEnter the number:";cin>>a;
  if(a%2==0)
  cout<<"The value entered is even";
  else
  cout<<"The value entered is odd";

 }
  void sq()
  {
  int s,a;
  cout<<"\nEnter a value:";cin>>a;
  s=a*a;
  cout<<"The square of a given value is:"<<s;
  cout<<"\nThe square root of a given value is:"<<sqrt(a);

  }
  void tab()
   {
  long int a=1,i;
  cout<<"Enter the number:";cin>>i;
  do
    { cout<<i<<"*"<<a<<"="<<i*a<<"\n";
       a++;
    }while(a<=10);
    }
   void temp()
     {
  float t,c,f,ch;
  cout<<"Temperature conversion";
  cout<<"\n1.Celsius to Fahrenheit"<<"\n2.Fahrenheit to Celsius"<<"\nEnter your choice:";cin>>ch;
  if(ch==1)
	{ cout<<"\nEnter the temperature in celsius:";cin>>t;
  f=1.8*t+32;
  cout<<"The temperature in Fahrenheit is:";cout<<f;
	 }
   else if(ch==2)
       { cout<<"\nEnter the temperature in fahrenheit:";cin>>t;
  c=5/9*(t-32);
  cout<<"The temperature in celsius is:";cout<<c;
       }
 else
 cout<<"Wrong chioce";}
 void evodd()
{
  int i,a,b,sum=0;
  cout<<"Caution:-if you want the sum of even or odd numbers 'start from'must be even or odd number.If you enter 0 it will take sum of even numbers.";
  cout<<"\nStart from:";cin>>a;
  cout<<"finish at:";cin>>b;
  for(i=a;i<=b;i+=2)
 { cout<<i<<"\n";
  sum=sum+i;
} cout<<"the sum is:"<<sum;
   }
   void fb()
{
  int i,n,first=1,second=2,third;
   cout<<"Enter the no. of terms:";cin>>n;
   cout<<first<<","<<second<<",";
   for(i=1;i<=n-2;i++)
   { third=first*second;
     cout<<third<<",";
     first=second;
     second=third;
     }

     }
void main()
{ clrscr();
  int ch;
  do
 {   clrscr();
     cout<<"\n"<<setw(54)<<"WELCOME TO MULTICALUCATION PROGRAM";
     cout<<"\n1.Area and Perimeter of a circle";
     cout<<"\n2.Square and square root";
     cout<<"\n3.Even/Odd";
     cout<<"\n4.Multiplicaton tables";
     cout<<"\n5.Even/odd nos.sum b/w any number";
     cout<<"\n6.Area of a triangle";
     cout<<"\n7.Temperature conversion";
     cout<<"\n8.Average marks and its percentage";
     cout<<"\n9.Quotient and remainder";
     cout<<"\n10.Simple & compound interest";
     cout<<"\n11.Arithematic opreations";
     cout<<"\n12.Fibonacci series";
     cout<<"\n13.Reversing the digit and printing its sum";
     cout<<"\n14.Factorial";
     cout<<"\n0.Exit(0)";
     cout<<"\nPlease enter your choice(0-14):-";cin>>ch;
     switch(ch)
     { case 1:arp();break;
       case 2:sq();break;
       case 3:evod();break;
       case 4:tab();break;
       case 5:evodd();break;
       case 6:tri();break;
       case 7:temp();break;
       case 8:avg();break;
       case 9:quo();break;
       case 10:sici();break;
       case 11:ao();break;
       case 12:fb();break;
       case 13:rev();break;
       case 14:fact();break;
       case 0:if((ch==0))cout<<"\nNAME:-JIMMI JAMES"<<"\nCLASS:-XI A"<<"\nROLL NO.:-19";break;
       default:break;
     }
      cout<<"\nPress any button to continue...";
       getch();
  }  while(ch!=0);
}
