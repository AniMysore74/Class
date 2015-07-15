#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x,hostel=0,college=0;
    char sType;
    cout<<"Enter Student type  ";
    cin>>sType;
    x = (sType == 'A')?college=200:(sType == 'B')?hostel=200:0;
    cout<<"College account - Rs."<<college;
    cout<<"\nHostel account - Rs."<<hostel;
    getch();
    return 0;
}
