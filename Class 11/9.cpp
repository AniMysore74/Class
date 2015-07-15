#include<iostream.h>
#include<conio.h>
int main()
{
    char U, L;
    cout <<"Enter a lower case letter       ";
    cin>>L;  
    L = (L-32); 
    cout << "Its upper case character is  -     "<<L;
    cout <<"\nEnter an upper case letter        ";   
    cin>>U;
    U = (U+32);
    cout << "Its lower case character is  -     "<<U;
    getch();
    return 0;
}
