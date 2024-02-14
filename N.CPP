//Program for multiutility
#include"header.cpp"
#include"strestru.cpp"
#include"sumorce.cpp"
#include"ab1.cpp"
#include"inot1.cpp"
#include"strrev1.cpp"
#include"sumarr.cpp"
#include"strlen.cpp"
#include"prod.cpp"
#include"avgarr.cpp"
#include"maxmin1.cpp"
#include"sumeo.cpp"
#include"de.cpp"
#include"macro.cpp"
#include"ccp.cpp"
#include"linsea.cpp"
#include"countdvs.cpp"
#include"strcom.cpp"
#include"deacc.cpp"
#include"trans.cpp"
#include"inots.cpp"
#include"addsub2d.cpp"
#include"maxmin2.cpp"
#include"rev1.cpp"
#include"strid.cpp"
#include"countwrd.cpp"
#include"inot2.cpp"
#include"mulof2d.cpp"
#include"casecvt.cpp"
#include"eqmof2d.cpp"
#include"abde.cpp"
#include"ab2.cpp"
#include"abs.cpp"
#include"abt.cpp"
#include"abstr.cpp"
#include"usty.cpp"
#include"arrostru.cpp"
#include"dia2d.cpp"
//Function prototypes
void one();
void two();
void str();
void stru();
void def();
void tyd();
//Begining of main
void main()
{ clrscr();
  int ch;
// For loop
  do
  { clrscr();
    cout<<"\n"<<setw(56)<<"WELCOME TO MULTIUTILITY PROGRAM MENU";
    cout<<"\n"<<"\n"<<setw(51)<<"1. ONE DIMENSIONAL ARRAY OPERATIONS";
    cout<<"\n"<<setw(51)<<"2. TWO DIMENSIONAL ARRAY OPERATIONS";
    cout<<"\n"<<setw(36)<<"3. STRING OPERATIONS";
    cout<<"\n"<<setw(39)<<"4. STRUCTURE OPERATIONS";
    cout<<"\n"<<setw(43)<<"5. USES OF #define FUNCTION";
    cout<<"\n"<<setw(43)<<"6. USES OF typedef FUNCTION";
    cout<<"\n"<<setw(23)<<"7. EXIT";
    cout<<"\n\n"<<setw(35)<<"Enter your choice:";cin>>ch;
    switch(ch)
    { //call of function
      case 1:one();break;
      case 2:two();break;
      case 3:str();break;
      case 4:stru();break;
      case 5:def();break;
      case 6:tyd();break;
      case 7:if((ch==7))cout<<"\nNAME:-JIMMI JAMES"<<"\nCLASS:-XI A"<<"\nROLL NO.:-19";break;
      default:cout<<"\nWrong choice!!!!"<<"\nPlease enter your choice again";break;
    } cout<<"\n\nPress any button to continue";getch();
  }   while(ch!=7);//End of loop
}  //End of main

//Function defination
void one()//Function header
{
  int ch;
  do
  { clrscr();
    cout<<"\n"<<setw(58)<<"ONE DIMENSIONAL ARRAY OPERATION MENU";
    cout<<"\n"<<"\n"<<setw(38)<<"1. ABOUT 1-D ARRAY";
    cout<<"\n"<<setw(52)<<"2. INPUT AND OUTPUT OF 1-D ARRAY";
    cout<<"\n"<<setw(51)<<"3. SUM OF ELENENTS OF 1-D ARRAY";
    cout<<"\n"<<setw(64)<<"4. SUM OF EVEN AND ODD ELEMENTS OF 1-D ARRAY";
    cout<<"\n"<<setw(55)<<"5. AVERAGE OF ELEMENTS OF 1-D ARRAY";
    cout<<"\n"<<setw(55)<<"6. PRODUCT OF ELEMENTS OF 1-D ARRAY";
    cout<<"\n"<<setw(49)<<"7. LINEAR SEARCH OF 1-D ARRAY";
    cout<<"\n"<<setw(61)<<"8. FIND MAX. AND MIN. VALUES OF 1-D ARRAY";
    cout<<"\n"<<setw(44)<<"9. REVERSE THE 1-D ARRAY";
    cout<<"\n"<<setw(43)<<"10. RETURN TO MAIN MENU";
    cout<<"\n"<<"\n"<<setw(39)<<"Enter your choice:";cin>>ch;
    switch(ch)
    { case 1:ab1();break;
      case 2:inot1();break;
      case 3:sumarr();break;
      case 4:sumeo();break;
      case 5:avgarr();break;
      case 6:prod();break;
      case 7:linsea();break;
      case 8:maxmin1();break;
      case 9:rev1();break;
      case 10:;break;
      default:cout<<"\nWrong choice!!!!"<<"\nPlease enter your choice again";break;
    }  getch();
  }   while(ch!=10);
}  //End of function defination


void two()
{
  int ch;
  do
  { clrscr();
    cout<<"\n"<<setw(58)<<"TWO DIMENSIONAL ARRAY OPERATION MENU";
    cout<<"\n"<<"\n"<<setw(38)<<"1. ABOUT 2-D ARRAY";
    cout<<"\n"<<setw(52)<<"2. INPUT AND OUTPUT OF 2-D ARRAY";
    cout<<"\n"<<setw(66)<<"3. SUM OF ROW AND COLUMN ELEMENTS OF 2-D ARRAY";
    cout<<"\n"<<setw(53)<<"4. DIAGONAL ELEMENTS OF 2-D ARRAY";
    cout<<"\n"<<setw(77)<<"5. ADDITION AND SUBSTRACTION OF TWO MATRICES OF 2-D ARRAY";
    cout<<"\n"<<setw(59)<<"6. TRANSPOSE OF A MATRICES OF 2-D ARRAY";
    cout<<"\n"<<setw(70)<<"7. CHECK FOR EQUALITY OF TWO MATRICES OF 2-D ARRAY";
    cout<<"\n"<<setw(61)<<"8. FIND MAX. AND MIN. VALUES OF 2-D ARRAY";
    cout<<"\n"<<setw(66)<<"9. MULTIPLICATION OF TWO MATRICES OF 2-D ARRAY";
    cout<<"\n"<<setw(43)<<"10. RETURN TO MAIN MENU";
    cout<<"\n"<<"\n"<<setw(39)<<"Enter your choice:";cin>>ch;
    switch(ch)
    { case 1:ab2();break;
      case 2:inot2();break;
      case 3:sumorce();break;
      case 4:dia2d();break;
      case 5:addsub2d();break;
      case 6:trans();break;
      case 7:eqmof2d();break;
      case 8:maxmin2();break;
      case 9:mulof2d();break;
      case 10:;break;
      default:cout<<"\nWrong choice!!!!"<<"\nPlease enter your choice again";break;
    }  getch();
  }   while(ch!=10);
}


void str()
{
  int ch;
  do
  { clrscr();
    cout<<"\n"<<setw(50)<<"STRING OPERATION MENU";
    cout<<"\n"<<"\n"<<setw(43)<<"1. ABOUT A STRING";
    cout<<"\n"<<setw(52)<<"2. INPUT AND OUTPUT STRING";
    cout<<"\n"<<setw(67)<<"3. COUNT VOWELS,DIGITS,SPECIAL CHARACTERS";
    cout<<"\n"<<setw(40)<<"4. COUNT WORDS";
    cout<<"\n"<<setw(45)<<"5. REVERSE A STRING";
    cout<<"\n"<<setw(56)<<"6. CASE CONVERSION OF A STRING";
    cout<<"\n"<<setw(55)<<"7. FINDING LENGTH OF A STRING";
    cout<<"\n"<<setw(50)<<"8. COMPARING TWO STRINGS";
    cout<<"\n"<<setw(71)<<"9. DECLARATION AND INITIALISATION OF A STRING";
    cout<<"\n"<<setw(49)<<"10. RETURN TO MAIN MENU";
    cout<<"\n"<<"\n"<<setw(45)<<"Enter your choice:";cin>>ch;
    switch(ch)
    { case 1:abstr();break;
      case 2:inots();break;
      case 3:countdvs();break;
      case 4:countwrd();break;
      case 5:strrev1();break;
      case 6:casecvt();break;
      case 7:strlen();break;
      case 8:strcom();break;
      case 9:strid();break;
      case 10:;break;
      default:cout<<"\nWrong choice!!!!"<<"\nPlease enter your choice again";break;
    }  getch();
  }   while(ch!=10);
}


void stru()
{
  int ch;
  do
  { clrscr();
    cout<<"\n"<<setw(52)<<"STRUCTURE OPERATION MENU";
    cout<<"\n"<<"\n"<<setw(45)<<"1. ABOUT A STRUCTURE";
    cout<<"\n"<<setw(61)<<"2. DECLARING AND ACCESSING STRUCTURE";
    cout<<"\n"<<setw(48)<<"3. ARRAY OF A STRUCTURE";
    cout<<"\n"<<setw(51)<<"4. COUNTRY CAPITAL PROGRAM";
    cout<<"\n"<<setw(50)<<"5. STUDENT RESULT PROGRAM";
    cout<<"\n"<<setw(47)<<"6. RETURN TO MAIN MENU";
    cout<<"\n"<<"\n"<<setw(44)<<"Enter your choice:";cin>>ch;
    switch(ch)
    { case 1:abs();break;
      case 2:deacc();break;
      case 3:arrostru();;break;
      case 4:ccp();break;
      case 5:strestru();break;
      case 6:;break;
      default:cout<<"\nWrong choice!!!!"<<"\nPlease enter your choice again";break;
    }  getch();
  }   while(ch!=6);
}


void def()
{
  int ch;
  do
  { clrscr();
    cout<<"\n"<<setw(51)<<"#define OPERATION MENU";
    cout<<"\n"<<"\n"<<setw(44)<<"1. ABOUT #define";
    cout<<"\n"<<setw(57)<<"2. USING #define IN A PROGRAM";
    cout<<"\n"<<setw(44)<<"3. #define MACRO";
    cout<<"\n"<<setw(50)<<"4. RETURN TO MAIN MENU";
    cout<<"\n"<<"\n"<<setw(48)<<"Enter your choice:";cin>>ch;
    switch(ch)
    { case 1:abde();break;
      case 2:de();break;
      case 3:macro();break;
      case 4:;break;
      default:cout<<"\nWrong choice!!!!"<<"\nPlease enter your choice again";break;
    }  getch();
  }   while(ch!=4);
}


void tyd()
{
  int ch;
  do
  { clrscr();
    cout<<"\n"<<setw(52)<<"typedef OPERATION MENU";
    cout<<"\n"<<"\n"<<setw(38)<<"1. ABOUT TYPEDEF";
    cout<<"\n"<<setw(51)<<"2. USING TYPEDEF IN A PROGRAM";
    cout<<"\n"<<setw(44)<<"3. RETURN TO MAIN MENU";
    cout<<"\n"<<"\n"<<setw(41)<<"Enter your choice:";cin>>ch;
    switch(ch)
    { case 1:abt();break;
      case 2:usty();break;
      case 3:;break;
      default:cout<<"\nWrong choice!!!!"<<"\nPlease enter your choice again";break;
    }  getch();
  }   while(ch!=3);
}

//End of program