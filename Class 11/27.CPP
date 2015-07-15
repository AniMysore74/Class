//Check whether the number entered is prime
#include<iostream.h>
#include<conio.h>
int main ()
{
   int a,b=1;
   cout<<"Enter a number ";
   cin>>a;
   for(int i=2; i<a; i++) {
      if (a%i==0)
      {b=0;}
   }
   if (a==0)
   {b=0;}
   if (a==1)
   {b=2;}
   if(b==0) {
      cout<<"The number is composite";}
   else if(b==2) {
      cout<<"It is neither prime nor composite"; }
   else {
      cout<<"The number is prime"; }
   getch();
   return 0;
}
