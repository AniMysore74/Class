//Write a C++ program to find the sum of the following series:
//         (i)	x - x2/2! + x3/3! - x4/4! + x5/5! - x6/6!
//         (ii)  x + x2/2 + x3/3 + ……….+ xn/n
#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
  float a,b,c=1,d=0,e;
  cout<<"Enter a number : ";
  cin>>a;
  for(b=1;b<=6;b++)
  {
    c=c*b;
    d=d+(pow(-1,b+1))*(pow(a,b)/c);
  }
  cout<<"The answer is : " <<d;
  b=c=d=0; 
  cout<<"\n\nEnter another number : ";
  cin>>a;
  for (d=1;d<=a;d++)
  {
     b=(pow(a,d)/d);
     c=c+b;
  }
  cout<<"The answer is : " <<c;
  getch();
  return 0;
}
