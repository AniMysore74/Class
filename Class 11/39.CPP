//Printing the smaller odd number
#include<iostream.h>
#include<conio.h>
int &check(int&,int&);
int main()
{
  int a,b;
  cout<<"Enter first number: ";
  cin>>a;
  cout<<"Enter second number: ";
  cin>>b;
  int z=check(a,b);
  getch();
  return 0;
}
int &check(int &c, int &d)
{  if (c%2!=0 && d%2!=0)
   {
     if (c<d)
       cout<<"Both the numbers are odd and the smaller number is : "<<c;
     else
       cout<<"Both the numbers are odd and the smaller number is : "<<d; 
   }
   else if(c%2!=0)
       cout<<"Only one number is odd and it is : "<<c;
   else if(d%2!=0)
       cout<<"Only one number is odd and it is : "<<d;
   else
       cout<<"Both numbers are even";
}
