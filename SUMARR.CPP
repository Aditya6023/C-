#include"header.cpp"
void main()
{ clrscr();
  int m[5],a,i;float s1=0;
  cout<<"Enter how many elements(max.5):";cin>>a;
  for(i=0;i<a;i++)
  { cout<<"Enter the value:";cin>>m[i];
    s1+=m[i];
  }
  cout<<"Displaying...";
  for(i=0;i<a;i++)
  { cout<<"\n"<<m[i];
  }
    cout<<"\nSum is:"<<s1;
    cout<<"\n\nPress any button to go back";
getch();
}
