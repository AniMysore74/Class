#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
    const double a = 789.1234;
    cout.setf(ios::showpos);
    cout.setf(ios::fixed);
    cout<<setprecision(1)<<a<<"\n";
    cout<<setprecision(2)<<a<<"\n";
    cout<<setprecision(3)<<a<<"\n";
    cout<<setprecision(4)<<a<<"\n";
    cout.setf(ios::showpoint);
    cout<<setprecision(5)<<a<<"\n";
    cout<<setprecision(6)<<a<<"\n";
    cout<<setprecision(7)<<a<<"\n";
    getch();
    return 0;
}
