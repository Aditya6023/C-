#include"header.cpp"
#define PI 3.14159
#define AREA(X) PI*X*X
void macro()
{ clrscr();
  int X;
cout<<"Enter the value:";cin>>X;
cout<<"The Area of the circle is="<<AREA(X)<<"\n\nPress any button to go back";
}