//Check whether a given character is an alphabet or not.
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
main() {
  char ch;
  cout<<"Enter an alpha-numeric character : ";
  cin>>ch;
  if(isalpha(ch)>0) {
    if(isupper(ch)>0) {
       cout<<"The character is in upper case";
     }
    else if(islower(ch)>0) {
       cout<<"The character is in lower case";
     }
  }
  else {
    cout<<"The character is not alpha-numeric";
  }
  getch();
}
