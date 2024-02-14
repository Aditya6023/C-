#include"header.cpp"
void rev1()
{ clrscr();
  int arr[50],n,i,j,temp;
  cout<<"Enter the no. of elements required:";
  cin>>n;
  cout<<"Enter the values: ";
   for(i=0;i<n;i++)
    { cin>>arr[i];
    }
    j=i-1;
    i=0;
    while(i<j)
     { temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       i++;
       j--;
     }
 cout<<"Now the Reverse of the Array is :";
	for(i=0; i<n; i++)
	 { cout<<arr[i]<<",";
	 }
cout<<"\n\nPress any button to go back";
}