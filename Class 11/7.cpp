#include<iostream.h>
#include<conio.h>
int main()
{
    int days,weeks,years;
    cout<<"Enter Days: ";
    cin>>days;
    years=(days/365);
    cout<<"Years: " <<years;
    days = (days%365);
    weeks = (days/7);
    cout << "  Weeks: " << weeks;
    days = (days%7); 
    cout << "  Days: " <<days; 
    getch();
    return 0;
}
           
