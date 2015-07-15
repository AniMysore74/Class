//Use Nested loops to produce design
#include<iostream.h>
#include<conio.h>
int main()
{
    int l=1,i;
    cout<<"Enter a number : ";
    cin>>i;
    for (i; i>=1; i--)
    {
        for(int m=(i-1); m>=1; m--)
        {cout<<" ";}
        for(int j=1;j<=l;j++)
        {cout<<j;}
        for(int k=(l-1); k>=1; k--)
        {cout<<k;}
        cout<<"\n";
        l++;
    }
    getch();
    return 0;
}
