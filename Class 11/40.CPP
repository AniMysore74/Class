//Compare two given numbers and print the sum of digits of the square of the larger number.
#include<iostream.h>
#include<conio.h>
void sqlarge(int&,int&);
int sum(int);

main() {
  int a,b;
  cout<<"Enter the 1st number : ";
  cin>>a;
  cout<<"Enter the 2nd number : ";
  cin>>b;
  sqlarge(a,b);
  if (a>b)
    sum(a);
  else
    sum(b);
  getch();
}

void sqlarge(int&a,int&b) {
  if(a>b) {
    a=a*a;
  }
  else {
    b=b*b;
  }
}

int sum(int m){
  int x,y=0,z=0;
  for( ;m>0;) {
    x=m%10;
    z=z+x;
    y=(y*10)+x;
    m=m/10;
  }
  cout<<"The sum of the digits of the Square of the larger number is  "<<z;
}
