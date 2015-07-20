#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void funct(int n)
{
    if(n==1 || n==0)
        cout<<"The number is not prime.";
    
    else if(n==2)
        cout<<"The number is prime.";
    else 
        for(int i=n-1; i>=2; i++)
        {
            if(n%i==0)
            {
                cout<<"\nThe number is not prime.";
                return;
            }
            if(i==2)
                cout<<"\nThe number is prime.";
        }
}
void funct(int x, int y)
{
    if(x%y==0)
        cout<<x<<" is divisible by "<<y;
    else 
        cout<<x<<" is not divisible by "<<y;
}

int main() 
{
    int x,y;
    char choice;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"\n\t[1] Find whether "<<x<<" is prime \n\t[2] Find whether "<<x<<" is divisible by another number \n";
    cin>>choice;
    switch (choice) 
    {
        case '1': funct(x);
                break;
        case '2': cout<<"\nEnter another number : ";
                cin>>y;
                funct(x,y);
                break;
        default: cout<<"Enter a correct choice";
                 break;         
    }
    getch();
    return 0;
}
