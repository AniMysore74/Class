#include<iostream.h>
#include<conio.h>
main()
{
int r,p,t,i ;
cout << "Enter Principal (In Rupees) - ";
cin >> p;
cout << "Enter Rate of Interest - " ;
cin >> r;
cout << "Enter Time - ";
cin >> t;
i = (p*r*t/100);
cout << "\nInterest amount = Rs. " << i;
getch();
return 0;
}

