#include<iostream.h>
#include<conio.h>
int main()
{
    char a,u,l,v;
    cout<<"Enter a character  ";
    cin>>a;
    char x=a;
    x = (a>=65 && a<97)?u:(a>=97 && a<123)?l:v;
    (x==u)?cout<<"The lowercase equivalent is "<<char(a+32):(x==l)?cout<<"The uppercase equivalent is "
    <<char(a-32):cout<<"The character is not a letter";
    getch();
    return 0;
}
