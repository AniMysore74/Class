//Append two strings, and display it. Also print the length of the concatenated string.
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
main() {
   char x[20],a[20],b[20];
   cout<<"Enter a string : ";
   cin>>a;
   cout<<"Enter another string : ";
   cin>>b;
   strcpy(x, a);
   strcat(x, b);
   cout<<"The joined string is :"<<x;
   cout<<"\nThe length of the con-catenated string is :"<<strlen(x);
   getch();
}
