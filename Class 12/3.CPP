#include<iostream.h>
#include<conio.h>
#include<math.h>
int fac(int x)
{
  if(x==1)
    return 1;
  return x* fac(x-1);
}
double sum(double x, int n)
{
  double s=1;
  int sign=1;
  for(int i=1;i<n;i++)
  {
    sign*=-1;
    s+= sign*pow(x,(2*i-1))/fac(i);
  }
  return s;
}
int main()
{
  int n;
  double x,s;
  cout<<"Enter value for x : ";
  cin>>x;
  cout<<"Enter value for n : ";
  cin>>n;
  s=sum(x,n);
  cout<<s;
  getch();
  return 0;
}
