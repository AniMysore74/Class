//Write a C++ menu driven program to add and multiply two matrices depending upon user's choice. 
//Use separate functions to create, display, add and multiply two matrices.
#include<iostream.h>
#include<conio.h>
void create (int a[3][3]);
void display (int a[3][3]);
void add(int a[3][3],int b[3][3],int c[3][3]);
void multiply(int a[3][3] ,int b[3][3],int c[3][3]);

main() {
  int a[3][3], b[3][3], c[3][3], i;
  cout<<"Enter First matrix\n";
  create(a);
  cout<<"\nEnter Second matrix\n";
  create(b);
  cout<<"\n The matrices you entered are : ";
  display(a);
  display(b)
  ;
  cout<<"\n Choose whether you want to : \n\t 1 - Add \n\t 2 - Multiply \n (1/2): ";
  cin>>i;
  if(i == 1)
    add(a,b,c);
  else if (i == 2)
    multiply(a,b,c);
  getch();
}
void create(int a[3][3]) {
   int i,j;
   for(i=0; i<3; i++) {
     cout<<endl;
     for(j=0; j<3; j++) {
       cin>>a[i][j];
     }
   }
}
void display(int a[3][3]) {
   int i,j;
   for(i=0; i<3; i++) {
     cout<<endl;
     for(j=0; j<3; j++) {
       cout<<a[i][j]<<"\t";
     }
   }
}
void add(int a[3][3],int b[3][3],int c[3][3]) {
  int i,j;
  cout<<"\n The added matrix is :";
  for(i=0; i<3; i++) {
     cout<<endl;
     for(j=0; j<3; j++) {
       c[i][j]=a[i][j]+b[i][j];
       cout<<c[i][j]<<"\t";
     }
   }
}
void multiply(int a[3][3],int b[3][3],int c[3][3]) {
  int i,j,k;
  cout<<"\n The multiplied matrix is :";
  for(i=0; i<3; i++) {
     cout<<endl;
      for(j=0; j<3; j++) {
       c[i][j]=0;
       for(k=0; k<3; k++) 
      	 c[i][j]= c[i][j] + a[i][k]*b[k][j];
       
     }
     cout<<c[i][j];
  }
}
