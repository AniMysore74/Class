#include<iostream.h>
#include<conio.h>
main()
{
int m1,m2,m3,m4,m5,m_A;

cout << "Enter marks of subject 1 : ";
cin >> m1 ;
cout << "Enter marks of subject 2 : ";
cin >> m2  ;
cout << "Enter marks of subject 3 : ";
cin >> m3 ;
cout << "Enter marks of subject 4 : ";
cin >> m4 ;
cout << "Enter marks of subject 5 : ";
cin >> m5 ;
m_A = (m1 + m2 + m3 + m4 + m5)/5;
cout << "\nAverage marks =  " << m_A;
getch();
return 0;
}

