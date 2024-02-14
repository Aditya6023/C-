#include"header.cpp"
void sumeo()
{ clrscr();
  int m[5],a,i;float e1=0,o1=0,s1=0,s2=0;
  cout<<"Enter how many elements(max.5):";cin>>a;
  for(i=0;i<a;i++)
  { cout<<"Enter the value:";cin>>m[i];
  }
  cout<<"Displaying...";
  for(i=0;i<a;i++)
 { cout<<"\n"<<m[i];
  if(m[i]%2==0)
   { e1++;s1+=m[i];
   }
  else
   { o1++;s2+=m[i];
   }
  }
   cout<<"\nSum of even:"<<s1;cout<<"\nSum of odd:"<<s2;
   cout<<"\n\nPress any button to go back";
}
