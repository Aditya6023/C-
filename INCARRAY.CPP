#include"header.cpp"
void perc()
{ float p,s2;
  p=((s2/500)*100);
  cout<<"\nPercentage:"<<p; }
void main()
{ clrscr();
  int m[5],a,i;float s1=0,s2;
  cout<<"Enter how many elements(max.5):";cin>>a;
  cout<<"Marks per subject";
  for(i=0;i<a;i++)
  { cout<<"\nMarks of "<<i+1<<" subject:";cin>>m[i];
    s1+=m[i];}
  cout<<"Displaying...";
  for(i=0;i<a;i++)
  { cout<<"\n"<<m[i];}cout<<"\nSum is:"<<s1;s2=s1;
    perc();
    getch();}
