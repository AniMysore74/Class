//Read the name of user and number of units consumed, and print out the charges with name.
#include<iostream.h>
#include<conio.h>
int main()
{
   int u;
   char *n;
   float c;
   cout<<"Enter the name of user : ";
   cin>>n;
   cout<<"Enter the number of units consumed : ";
   cin>>u;
   cout<<"The user "<<n;
   if(u<=100)
   {c=u*0.4+50;
      cout<<" is charged with Rs."<<c;}
      else if(u>100&&u<=300)
      {c=(100*0.4)+((u-100)*0.5)+50;
         cout<<" is charged with Rs."<<c;}
      else
      {c=(100*0.4)+(200*0.5)+((u-300)*0.6)+50;
         cout<<" is charged with Rs."<<c;}
    getch();
    return 0;
}
