//Write a C++ program with function that checks whether or not two arrays (of characters) are identical,
//that is, whether they have same characters and all characters in corresponding positions are equal.
//If the two arrays are identical, the function returns 1, otherwise returns 0.
#include<iostream.h>
#include<conio.h>

void create (char a[10][10],int x,int y);
int check_equality(char a[10][10],char b[10][10],int x,int y);


int main() {
  char a[10][10],b[10][10];
  int ans,x,y;
  cout<<"Enter dimensions of matrices\n";
  cin>>x>>y;
  cout<<"Enter First matrix\n";
  create(a,x,y);
  cout<<"\nEnter Second matrix\n";
  create(b,x,y);

  ans=check_equality(a,b,x,y);  
  getch();
  return 0;
}

void create(char a[10][10],int x,int y) {
   int i,j;
   for(i=0; i<x; i++) {
     cout<<endl;
     for(j=0; j<y; j++) {
       cin>>a[i][j];
     }
   }
}
int check_equality(char a[10][10],char b[10][10],int x,int y) {
  int i,j,flag=0;

  for(i=0; i<x; i++) {
    for(j=0; j<y; j++) {
      if(a[i][j]==b[i][j])
	flag=1;
    }
  }
  if(flag==1){
    cout<<"\nReturn value = 1\nThe matrices are equal.";
    return 1;
  }  
  else{ 
    cout<<"\nReturn value = 0\nThe matrices are not equal.";
    return 0;
  }    
}
