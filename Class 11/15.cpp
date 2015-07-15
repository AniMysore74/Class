#include<iostream.h>
#include<conio.h>
int main()
{
    int p,r,t,i;
    cout<<"Enter the Principle Amount : ";
    cin>>p;
    cout<<"Enter the Time Period : ";
    cin>>t;
    r = (t>10)?12:8;
    i = (p*r*t/100);
    cout<<"\nInterest is : "<<i;
    getch();
    return 0;
}
