#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    cout<<"Enter three numbers:  \n";
    cin>>a>>b>>c;
    d = (a>b && a>c)?a:(b>a && b>c)?b:c;
    e = (a<b && a<c)?a:(b<a && b<c)?b:c;
    cout<<"The largest number is   "<<d;
    cout<<"\nThe smallest number is   "<<e;
    getch();
    return 0;
}
