//Print the multiplication table of a given number
#include<iostream.h>
#include<conio.h>
int main()
{
   int n,m;
   cout<<"Enter a Number ";
   cin>>n;
   for (int i=1;i<=10;i++)
   {
      m=n*i;
      cout<<n<<" X "<<i<<" = "<<m<<endl;
   }
   getch();
   return 0;
}
