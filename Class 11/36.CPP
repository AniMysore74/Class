//Calculate LCM and GCD of two numbers using functions.
#include<iostream.h>
#include<conio.h>
int lcm(int,int);
int gcd(int,int);
main()
{
  int a,b,l,g,lcim;
  cout<<"Enter the first number - ";
  cin>>a;
  cout<<"Enter the second number - ";
  cin>>b;
  if(a>0 && b>0)
  {
    l= lcm(a,b);
    g= gcd(a,b);
    cout<<"LCM="<<l<<endl;
    cout<<"GCD="<<g<<endl;
  }
  else
    cout<<"The number is zero aborting....";
  getch();
}
int lcm(int x, int y)
{
    int lcm=x;
    while(1)
    {
      if(lcm%y==0 && lcm%x==0)
        break;
      lcm++;
    }
  return lcm;
}
int gcd(int x, int y)
{
  int i;
  for(i=x; i>=1; i--)
  {
    if (x%i==0 && y%i==0)
    break;
  }
  return (i);
}
