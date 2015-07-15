//Reverse the digits of a given integer
#include<iostream.h>
#include<conio.h>
int main()
{
   int n,N,d,r=0;
   cout<<"Input a number ";
   cin>>N;
   n=N;
   do
   {
       d=N%10;
       r=(r*10)+d;
       N=N/10;
   }while(N!=0);
   cout<<"The reverse is : "<<r;
   getch();
   return 0;
}
