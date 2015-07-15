//Write a menu driven program to perform arithmetic calculation using the switch statement.
#include<iostream.h>
#include<conio.h>
int main ()
{
    int a,b;
    char c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the following as per requirement : \n\nA for Addition \nS for Subtraction \nD for Division \nM for Multiplication. \n Enter your choice : ";
    cin>>c;
    switch(c)
    {
     case 'A' : cout<<"The result is :  "<<a+b;
     break;
     case 'S' : cout<<"The result is :  "<<a-b;
     break;
     case 'M' : cout<<"The result is : "<<a*b;
     break;
     case 'D' : cout<<"The result is : "<<a/b;
     break;
     default : cout<<"\nThe operator is incorrect ";
      }
      getch ();
     return 0;
}
