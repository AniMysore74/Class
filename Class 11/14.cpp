#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n;
    float x;
    cout<<"Enter a number : ";
    cin>>n;
    x = (n>0&&n%2==1)? sqrt(n): pow(n,5.0);
    cout<<"\n"<<x;
    getch();
    return 0;
}
