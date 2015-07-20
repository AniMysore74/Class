#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void area(int a)
{
    cout<<"\nArea = "<<a*a;
}
void area(int l, int b)
{
    cout<<"\nArea = "<<l*b;
}
void area(int a, int b, int c)
{
    int s = (a+b+c)/2;
    cout<<"\nArea = "<<sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() 
{
    int s1,s2,s3;
    char choice;
    cout<<"Calculate area of \n\t[1]Square \n\t[2]Rectangle \n\t[3]Triangle\n";
    cin>>choice;
    switch (choice) 
    {
        case '1': cout<<"\nEnter length of side : ";
                cin>>s1;
                area(s1);
                break;
        case '2': cout<<"\nEnter length : ";
                cin>>s1;
                cout<<"\nEnter breadth : ";
                cin>>s2;
                area(s1,s2);
                break;
        case '3': cout<<"\nEnter length of sides\n";
                cin>>s1>>s2>>s3;
                area(s1,s2,s3);
                break;
        default: cout<<"Enter a correct choice";
                 break; 
                
    }
    getch();
    return 0;
}
