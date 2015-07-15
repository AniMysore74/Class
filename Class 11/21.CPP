//Find the area of a Triangle and find its type.
#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
   float a,b,c,area;
   cout<<"Enter the 3 sides of a Triangle   :   \n";
   cin>>a>>b>>c;
   cout<<"\n\n";
   if (a+b>c && a+c>b && b+c>a)
   {
      if(a==b && b==c)
      {
         area=sqrt(3)*a*a/4;
         cout<<"It is an Equilateral Triangle ";
      }
      else if(a==b || a==c || b==c)
      {
         float h = sqrt(a*a + b*b);
         area=(c*h)/2;
         cout<<"It is an Isosceles Triangle ";
      }
      else
      {
         cout<<"It is a Scalene Triangle ";
         float s=(a+b+c)/2;
         area=sqrt(s*(s-a)*(s-b)*(s-c));
      }
      cout<<"and its area is "<<area<<" Square Metres";
   }
   else
   {
       cout<<"The given measurements cannot form a Triangle";
   }
   getch();
   return 0;
}
