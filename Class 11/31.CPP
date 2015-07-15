//Use Nested loops to produce design
#include<iostream.h>
#include<conio.h>
int main()
{
   int l=1,n;
   cout<<"Enter a number : ";
   cin>>n;
   int i=n;
   for(i; i>=1; i=i-2)
   {
      for(int j=i; j>=1; j--)
      {  cout<<"\t&";}
      cout<<"\n";
      for (int k=1; k<=l; k++)
      {  cout<<" \t"; }
      l++;
   }
   getch();
   return 0;
}
