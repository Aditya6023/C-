#include"header.cpp"
void linsea()
{ clrscr();
  int arr[10],i,num,n,c=0,pos;
  cout<<"Enter the no. of elements required(max.10):";
  cin>>n;
   for(i=0; i<n; i++)
    { cout<<"Enter the values:";cin>>arr[i];
    }
    cout<<"Enter the value to be searched:";
     cin>>num;
     for(i=0; i<n; i++)
     { if(arr[i]==num)
       { c=1; pos=i+1;
       }
     }
    if(c==0)
    { cout<<"Number not found..!!";
    }
    else
    { cout<<num<<" found at position "<<pos;
    }
     cout<<"\n\nPress any button to go back";
}