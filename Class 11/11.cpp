#include<iostream.h>
#include<conio.h>
int main()
{
    int x,y,a,b;
    cout<<"Enter value for X : ";
    cin>>x;
    cout<<"Enter value for Y : ";
    cin>>y;
    a=x;
    x=y;
    y=a;
    cout<<"X = "<<x<<" Y = "<<y<<"\n\nEnter value for A : ";
    cin>>a;
    cout<<"Enter value for B : ";
    cin>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"A = "<<a<<" B = "<<b;
    getch();
    return 0;
}

