#include"header.cpp"
int cube(float);
void main()
{ clrscr();
  int a,c;
  cout<<"Enter the value:";cin>>a; c=cube(a);
  cout<<"cube is:"<<c;getch();
  }
  int cube(float h)
  { int b;
  b=h*h*h;return (b);
  }

