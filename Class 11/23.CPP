//Print the First n natural numbers and their Sum
#include<iostream.h>
#include<conio.h>
int main ()
{
   int sum=0,n;
   cout<<"Enter any Natural number ";
   cin>>n;
   for (int i=1;i<=n;i++)
   {
      cout<<i<<endl;
      sum=sum+i;
   }
   cout<<"The Sum is "<<sum
   ;
   getch();
   return 0;
}
