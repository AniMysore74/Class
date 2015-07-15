//Use Nested loops to produce design
#include<iostream.h>
#include<conio.h>
int main()
{
   int n;
   cout<<"Enter a number ";
   cin>>n; 
   for(int i=n; i>=1; i--)
   {
      for(int j=1; j<=i; j++)
      {
          cout<<"\t"<<j;
      }
      cout<<"\n";
   }
   getch();
   return 0;
}
