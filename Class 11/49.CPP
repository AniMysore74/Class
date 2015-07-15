// Write a C++ program to find the sum of elements on the diagonal, sum of upper triangle, sum of lower triangle of a square matrix n x n. 
//Also display the corresponding elements in a matrix form
#include<iostream.h>
#include<conio.h>
main()
{
  int a[5][5],i,n,j,sum=0,sum2=0;
  cout<<"Enter the dimension of square matrix : ";
  cin>>n;
  for(i=0;i<n;i++) {
    cout<<endl;
    for(j=0;j<n;j++) {
      cout<<"\tInput element : ";
      cin>>a[i][j];
    }
  }
  cout<<"\nMatrix : \n";
  for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
      cout<<a[i][j]<<"  ";
    }
    cout<<endl;
  }
  cout<<"\n1st Diagonal : \n";
  for(i=0;i<n;i++){
    for(j=0;j<n;j++) {
      if(i==j){
        cout<<a[i][j]<<"  ";
        sum=sum+a[i][j];   }
      else
        cout<<"  ";
    }
    cout<<endl;
  }
  cout<<"\nSum = "<<sum;
  sum=0;
  cout<<"\n\nLower triangle : \n";
  for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
      if(j<i) {
        cout<<a[i][j]<<"  ";
        sum=sum+a[i][j];   }
      else
        cout<<"  ";
    }
    cout<<endl;
  }  
  cout<<"\nSum = "<<sum<<endl;
  sum=0;
  cout<<"\n\nUpper triangle : \n";
  for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
      if(j>i) {
        cout<<a[i][j]<<" ";
        sum=sum+a[i][j];   }
      else
        cout<<"  ";
    }
    cout<<endl;
  }
  cout<<"\nSum ="<<sum<<endl;
  getch();
  return 0;
}
