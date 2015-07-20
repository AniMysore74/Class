#include<iostream.h>
#include<conio.h>
#include<math.h>
int fac(int x)
{
  if(x==1)
    return 1;
  return x* fac(x-1);
}

main()
{
  int n,x,sign=1;
  double s;
  cout<<"Enter value for x : ";
  cin>>x;
  s=x;
  cout<<"Enter value for n : ";
  cin>>n;
  for(int i=2;i<n;i+=2)
  {
    sign*=-1;
    s+= sign*pow(x,i)/fac(i);
  }
  cout<<"Answer: "<<s;
  getch();
}
