#include"header.cpp"
# define PI 3.14159
#define SPS "This is how we use #define function"
void de()
{
clrscr();
float rad, area;
cout<<"Pl. enter the radius:";
cin>>rad;
area=PI*rad*rad;
cout<<"\nThe Area of the circle with radius "<<rad <<" is="<<area;
cout<<"\n\n"<<SPS<<"\n\nPress any button to go back";

}
