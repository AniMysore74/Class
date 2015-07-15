//Write a C++ program initialize a  two dimensional integer array of 4 rows and 3 columns
// at the time of declaration and display sum of each row and each column.
#include<iostream.h>
#include<conio.h>

int main() {
  int a[3][4],i=0,j=0,s=0;
  //Array Initialization
  a[0][0] = 1, a[0][1] = 2, a[0][2] = 3, 
  a[1][0] = 2, a[1][1] = 3, a[1][2] = 4, 
  a[2][0] = 3, a[2][1] = 4, a[2][2] = 5, 
  a[3][0] = 4, a[3][1] = 5, a[3][2] = 6;
  cout<<"Matrix : \n\n";
  for( i = 0; i<4 ; i++) {
     for( j = 0; j<3 ; j++) {
       cout<<a[i][j]<<" ";
     }
     cout<<endl;
  }
  cout<<endl;
  for(j = 0; j<3; j++) {
     cout<<"Sum of column "<<j+1<<" = ";
     s=0;
     for(i=0; i<4; i++) {
	   s = s + a[i][j];
     }
     cout<<s<<endl;
  }
  cout<<endl;
  for(i = 0; i<4; i++) {
     cout<<"Sum of row "<<i+1<<" = ";
     s=0;
     for(j=0; j<3; j++) {
     	s = s + a[i][j];
     }
     cout<<s<<endl;
  }
  getch();
  return 0;
}
