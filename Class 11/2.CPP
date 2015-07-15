#include<iostream.h>
#include<conio.h>
int main()
{
float pi = 3.14, crcm, area, r;
cout << "Enter a radius : ";
cin >> r;
crcm = (pi*2*r);
area = (r*r*pi);
cout<<"Circumference = "<< crcm << "\nArea = " <<area;
getch();
return 0;
}
