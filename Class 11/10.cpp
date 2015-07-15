#include<iostream.h>
#include<conio.h>
int main()
{
    char A,B = '\b';
    int X,Y = B;
    cout<<"Enter a letter - ";
    cin>> A;
    X = A;
    cout<<"The ASCII value of "<<A<<" is : "<<X; 
    cout<<"\nThe ASCII value of Backspace is : "<<Y; 
    cout<<B; 
    getch();
    return 0;
}
