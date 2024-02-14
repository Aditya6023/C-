#include"header.cpp"
void maxmin1()
{ clrscr();
  int lar,sma,arr[50],n,i;
  cout<<"Enter no. of elements required(max 50):";
  cin>>n;
   for(i=0;i<n;i++)
   { cout<<"Enter the values:";cin>>arr[i];
   }
   lar=arr[0];
   sma=arr[0];
   for(i=0;i<n;i++)
  { if(lar<arr[i])
    { lar=arr[i];
    }
    if(sma>arr[i])
    { sma=arr[i];
    }
  }
  cout<<"Largest Element = "<<lar;
  cout<<"\nSmallest Element = "<<sma;
  cout<<"\n\nPress any button to go back";
}


