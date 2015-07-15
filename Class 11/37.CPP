//Write a function interest( ) to calculate simple interest.
#include<iostream.h>
#include<conio.h>
float interest(int p, int t=2, float r=10);
main() {
  float p,t,r;
  cout<<"Enter the principal amount : ";
  cin>>p;
  cout<<"Enter the time period : ";
  cin>>t;
  cout<<"Enter the rate of interest : ";
  cin>>r;
  cout<<endl<<"The interest taking default values is = "<<interest(p);
  cout<<endl<< "The interest taking non-default values for all entered values is = "<<interest(p,r,t);
  cout<<endl<<"The interest taking non-default values for principal amount and time is = "<<interest(p,t);
  getch();
}
float interest(int p, int t, float r)
{
  float i = p*t*r/100;
  return i;
}
