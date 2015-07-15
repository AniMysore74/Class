#include<iostream.h>
#include<conio.h>
int main()
{
    int tot,rem,Rs_500,Rs_100,Rs_50,Rs_20,Rs_10,Rs_5,Rs_1;
    cout<<"Enter total amount: ";
    cin>>tot;
    Rs_500=(tot/500);
    rem=(tot%500);
    Rs_100=(rem/100);
    rem=(rem%100);
    Rs_50=(rem/50);
    rem=(rem%50);
    Rs_20=(rem/20);
    rem=(rem%20);
    Rs_10=(rem/10);
    rem=(rem%10);
    Rs_5=(rem/5);
    rem=(rem%5);
    Rs_1=(rem/1);
    cout<<"Number of notes -";
    cout<<"   500: " <<Rs_500;
    cout<<"   100: " <<Rs_100;
    cout<<"   50: " <<Rs_50;
    cout<<"   20: " <<Rs_20;
    cout<<"   10: " <<Rs_10;
    cout<<"   5: " <<Rs_5; 
    cout<<"   1: " <<Rs_1;
    getch();
    return 0;
}
           
