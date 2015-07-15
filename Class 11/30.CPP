//Use Nested loops to produce design
#include<iostream.h>
#include<conio.h>
int main()
{
   for(int i=1; i<=5; i++)
   {
      for(int j=1; j<=i; j++) {
          cout<<"\t"<<char(j+64);
      }
      cout<<"\n";
   }
   getch();
   return 0;
}
