#include<iostream.h>
#include<conio.h>
double fac(double x)
{
  if(x==1)
    return 1;
  return x* fac(x-1);
}

int main()
{
  double x;
  cout<<"Enter a number : ";
  cin>>x;
  cout<<"Factorial of "<<x<<" = "<<fac(x);
  getch();
  return 0;
}
