//Check whether the given character is alphanumeric or a digit.
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
main() {
  char ch;
  cout<<"Enter a character : ";
  cin>>ch;
  if(isalpha(ch)>0) {
    cout<<"The character is alphanumeric";
  }
  else if(isdigit(ch)>0) {
    cout<<"The character is a digit";
  }
  else {
    cout<<"The character is not a character";
  }
  getch();
}
