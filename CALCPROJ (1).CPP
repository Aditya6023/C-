#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void menu1();
void menu2();
void menu3();
void menu4();
void menu5();
void menu6();

// functions for 1_d array operations

void INOUT();  // input output one dim array
// functions for 2_d array operations
// functions for string operations
void main()
{
clrscr();
int ch;
do
{
clrscr();
cout<<"\n---------WELCOME TO MULTI UTILITY CALCULATOR MENU--------"<<endl
<<"1. ONE DIM. ARRAY OPERATIONS"<<endl
<<"2. TWO DIM. ARRAY OPERATIONS"<<endl
<<"3. STRING OPERATIONS"<<endl
<<"4. STRUCTURE OPERATIONS"<<endl
<<"5. USES OF #DEFINE"<<endl
<<"6. USES OF TYPEDEF"<<endl
<<"7. EXIT"<<endl;
cout<<"Enter your choice :"; cin>>ch;
switch(ch)
	{
	case 1: menu1();   break;
	case 2: menu2();   break;
	case 3: menu3();   break;
	case 4: menu4();   break;
	case 5: menu5();   break;
	case 6: menu6();   break;
	case 7: break;
	 default: cout<<"\n Wrong choice.....";
	}// end of switch
cout<<"\n Press any key to continue.....";
getch();
}while (ch!=7);
}// end of main()

void menu1()
{
	int ch;
	do
	{
		clrscr();
		cout<<"\n---------WELCOME TO 1-D ARRAY OPERATION  MENU--------"<<endl
		<<"1. ABOUT ONE DIM. ARRAY "<<endl
		<<"2. INPUT/DISPLAY 1-D ARRAY ELEMENTS"<<endl
		<<"3. SUM OF ELELENTS"<<endl
		<<"4. SUM OF EVEN/ODD ELEMENTS"<<endl
		<<"5. AVERAGE OF ELEMENTS"<<endl
		<<"6. PRODUCT OF ELEMENTS"<<endl
		<<"7. LINEAR SEARCH"<<endl
		<<"8. FIND MAX./MIN VALUES "<<endl
		<<"9. REVERSE THE 1-D ARRAY"<<endl
		<<"10 . RETURN TO MAIN()"<<endl;
		cout<<"Enter your choice :"; cin>>ch;
		switch(ch)
			{
			case 1:cout<<"\nThe simplest form of an array is a single dimensional array"<<endl
			<<"The array is given a name and its elements are refered to by subscripts "<<endl
			<<"or indices.\n The general form of an array declaration is as folloes:"<<endl
			<<" type array_name[sze];"<<"\n int marks[50];";break;
			case 2:   INOUT();break;
			case 3:   break;
			case 4:   break;
			case 5:   break;
			case 6:   break;
			case 7:   break;
			case 8:   break;
			case 9:   break;
			case 10: break;
			default: cout<<"\n Wrong choice.....";
			}// end of switch
	getch();
	}while (ch!=10);
}// end of menu1()
void menu2()
{
	int ch;
	do
	{
		clrscr();
		cout<<"\n---------WELCOME TO 2-D ARRAY OPERATION  MENU--------"<<endl
		<<"1. ABOUT 2-D ARRAY "<<endl
		<<"2. INPUT/DISPLAY 2-D ARRAY ELEMENTS"<<endl
		<<"3. SUM OF ROW/COL ELELENTS"<<endl
		<<"4. DIAGONAL ELEMENTS"<<endl
		<<"5. ADDITION/SUBTRACTION OF TWO MATRICES"<<endl
		<<"6. MULTIPLICATION OF TWO MATRICES"<<endl
		<<"7. TRANSPOSE OF A MATRIX"<<endl
		<<"8. CHECK EQUALITY OF TWO MATRICES "<<endl
		<<"9. FIND MAX/MIN VALUES"<<endl
		<<"10. RETURN TO MAIN()"<<endl;
		cout<<"Enter your choice :"; cin>>ch;
		switch(ch)
			{
			case 1:   break;
			case 2:   break;
			case 3:   break;
			case 4:   break;
			case 5:   break;
			case 6:   break;
			case 7:   break;
			case 8:   break;
			case 9:   break;
			case 10: break;
			default: cout<<"\n Wrong choice.....";
			}// end of switch
	}while (ch!=10);
}// end of menu2()
void menu3()
{
	int ch;
	do
	{
		clrscr();
		cout<<"\n---------WELCOME TO STRING OPERATION  MENU--------"<<endl
		<<"1. DECLARATION AND INITIALIZATION OF A STRING "<<endl
		<<"2. INPUT/DISPLAY A STRING"<<endl
		<<"3. COUNT WORDS/VOWELS/CONSONANTS/DIGITS/SP. CHARACTERS"<<endl
		<<"4. COPY A STRING "<<endl
		<<"5. REVERSING A STRING"<<endl
		<<"6. CASE CONVERSION OF A STRING"<<endl
		<<"7. TRANSPOSE OF A MATRIX"<<endl
		<<"8. COMPARING TWO STRINGS "<<endl
		<<"9. CONCATENATE TWO STRINGS"<<endl
		<<"10. RETURN TO MAIN()"<<endl;
		cout<<"Enter your choice :"; cin>>ch;
		switch(ch)
			{
			case 1:   break;
			case 2:   break;
			case 3:   break;
			case 4:   break;
			case 5:   break;
			case 6:   break;
			case 7:   break;
			case 8:   break;
			case 9:   break;
			case 10: break;
			default: cout<<"\n Wrong choice.....";
			}// end of switch
	}while (ch!=10);
}// end of menu3()
void menu4()
{
	int ch;
	do
	{
		clrscr();
		cout<<"\n---------WELCOME TO STRUCTURE OPERATION  MENU--------"<<endl
		<<"1. ABOUT A STRUCTURE "<<endl
		<<"2. DECLARING AND ACCESSING A STRUCTURE"<<endl
		<<"3. COUNTRY CAPITAL PROGRAM"<<endl
		<<"4. STUDENT RESULT PROGRAM "<<endl
		<<"6. RETURN TO MAIN()"<<endl;
		cout<<"Enter your choice :"; cin>>ch;
		switch(ch)
			{
			case 1:   break;
			case 2:   break;
			case 3:   break;
			case 4:   break;
			case 5:   break;
			case 6:   break;
			default: cout<<"\n Wrong choice.....";
			}// end of switch
	}while (ch!=6);
}// end of menu4()
void menu5()
{
	int ch;
	do
	{
		clrscr();
		cout<<"\n---------WELCOME TO # DEFINE INFORMATION MENU--------"<<endl
		<<"1. ABOUT # DEFINE "<<endl
		<<"2. USING # DEFINE IN A PROGRAM"<<endl
		<<"3. # DEFINE MACRO"<<endl
		<<"4. RETURN TO MAIN()"<<endl;
		cout<<"Enter your choice :"; cin>>ch;
		switch(ch)
			{
			case 1:   break;
			case 2:   break;
			case 3:   break;
			case 4:   break;
			default: cout<<"\n Wrong choice.....";
			}// end of switch
	}while (ch!=4);
}// end of menu5()
void menu6()
{
	int ch;
	do
	{
		clrscr();
		cout<<"\n---------WELCOME TO TYPEDEF INFORMATION MENU--------"<<endl
		<<"1. ABOUT TYPEDEF "<<endl
		<<"2. USING TYPEDEF IN A PROGRAM"<<endl
		<<"3. RETURN TO MAIN()"<<endl;
		cout<<"Enter your choice :"; cin>>ch;
		switch(ch)
			{
			case 1:
						cout<<"\n This command defines a new name or an aias name for an \n"
						<<endl<<"existing type."
						<<endl<<endl<<"For e.g. typedef double amount"
						<<endl<<endl<<" amount loan, balance,installment,interest;";
						break;
			case 2:   break;
			case 3:   break;
			default: cout<<"\n Wrong choice.....";
			}// end of switch
	getch();
	}while (ch!=3);
}// end of menu6()

void INOUT()
{
	 int A[20];
	 int n;
	 cout<<"Hpw many numbers to input (max 20):"; cin>>n;
	 for(int i=0;i<n;i++)
	 {
	 cout<<"Enter the value of A["<<i<<"]:";
	 cin>>A[i];
	 }
	 cout<<"\n The values entered are :"<<endl;
	 for(i=0;i<n;i++)
	 {
	 cout<<A[i]<<", ";
	 }
}