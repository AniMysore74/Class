#include<iostream.h>
#include<conio.h>
int main()
{
float h_Cm, h_In;
cout << "Enter your Height in cm : ";
cin>>h_Cm;
h_In = h_Cm/2.54;
cout <<"Your height in inches = " <<h_In;
getch();
return 0;
}
