#include<iostream.h>
#include<conio.h>
int main()
{
float t_C, t_F;
cout << "Enter Temperature in Celsius  ";
cin>> t_C;
t_F = ((t_C * 9/5) + 32);
cout <<"Temperature in Fahrenheit = " << t_F ;
getch();
return 0;
}
