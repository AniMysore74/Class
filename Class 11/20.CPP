#include<iostream.h>
#include<conio.h>
#include<math.h>
int main ()
{
  double a,b,c,x,y,d;
  cout<<"Enter the Coefficients of a Quadratic Equation  :  \n";
  cin>>a>>b>>c;
  if (a>=1)
  {
    d=sqrt(b*b - 4*a*c);
    x=(-b + d)/(2*a);
    y=(-b - d)/(2*a);
    if (d>0)
    {
       cout<<"Roots are real and unequal\n";
       cout<<"The roots are "<<x<<" and "<<y;
    }
    else if (d==0)
    {
       cout<<"Roots are real and equal\n";
       cout<<"The roots are "<<x<<" and "<<y;
    } 
    else 
    { 
       cout<<"Roots are complex and imaginary";
    }
  }  
  else
  {
       cout<<"It is not a quadratic equation";
  }
  getch();
  return 0;
}
