//Write a function satis( ) to find whether four integers a, b, c and d sent to satis( ) satisfy the equation a3 + b3 + c3 = d3
#include<iostream.h>
#include<conio.h>
#include<math.h>
int satis(int a,int b,int c, int d);
main() {
  int a,b,c,d;
  cout<<"Enter values to satisfy the equation (a^3 + b^3 + c^3 = d^3)\n";
  cout<<"\nLHS(a,b & c) : \n";
  cin>>a>>b>>c;
  cout<<"RHS(d) : ";
  cin>>d;
  satis(a,b,c,d);
  getch();
  return 0;
}
int satis(int a,int b,int c, int d) {
  if( (pow(a,3) + pow(b,3) + pow(c,3) )==(pow(d,3)) )
     { cout<<"\nEquation satisfied";
       return 0; }
  else
     {  cout<<"\nThe values you entered DO NOT satisy the equation";
       return -1; }
}
