//Input a month number and print the number of days in the month using switch.
#include<iostream.h>
#include<conio.h>
int main ()
{
    int a;
    cout<<"Enter the number of the month : ";
    cin>>a;
    switch(a)
    { case 1 :
      case 3 :
      case 5 :
      case 7 :
      case 8 :
      case 10 :
      case 12 : cout<<"There are 31 days in the month. ";
      break;
      case 4 :
      case 6 :
      case 9 :
      case 11 : cout<<"There are 30 days in the month. ";
      break;
      case 2 : cout<<"There are 28 days in the month." ;
      break;
      default : cout<<"This is not the number of a month! ";
    }
    getch ();
    return 0;
 }
