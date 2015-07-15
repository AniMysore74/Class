//Read two strings and copy the shorter string into the bigger string
#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{ 
  char str1[30],str2[30];
  cout<<"Enter string 1 : ";
  cin>>str1;
  cout<<"Enter string 2 : ";
  cin>>str2;
  if(strlen(str1)>strlen(str2)) 
     strcpy(str2,str1);
  else
     strcpy(str1,str2);
  cout<<"The value of the strings now are: \n"<<"String 1 : "<<str1<<"\nString 2 : "<<str2;      
  getch();
  return 0;
}
