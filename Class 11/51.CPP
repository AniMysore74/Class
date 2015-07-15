//Write a C++ program to read two strings firstname and lastname.
//Concatenate them without using built-in function.
#include<iostream.h>
#include<conio.h>

int main() {
  int i,j,k,l;
  char a[40],b[20];
  cout<<"Enter string 1 : ";
  cin.getline(a,20);
  cout<<"Enter string 2 : ";
  cin.getline(b,20);
  for(i=0; a[i]!='\0'; i++);
  for(j=0; a[j]!='\0'; j++);
  for(k=0,l=i; k<=j; k++,l++) {
    a[l]=b[k];
  }
  for(k=0; k<i+j; k++){
    cout<<a[k];
  }
  getch();
  return 0;
}
