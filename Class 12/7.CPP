#include<iostream.h>
#include<conio.h>

int main () {
   int a[10][10],i,j,n=3,m=3,topSum=0,lowSum=0;
   cout<<"Enter number of rows and columns\n";
   cin>>n>>m;
   cout<<"Enter elements of matrix\n";
   for(i=0; i<n; i++)
   {
      for(j=0; j<n; j++)
      {
	 cin>>a[i][j];
      }
   }
   cout<<endl;
   for(i=0; i<n; i++)
   {
      for(j=0; j<n; j++)
      {
	 cout<<a[i][j]<<" ";
      }
      cout<<endl;
   }
   for(i=0; i<n; i++)
   {
      for(j=0; j<m; j++)
      {
	 if(i>j)
	 {

	   lowSum += a[i][j];
	 }
	 else if (i<j)
	 {
	   topSum += a[i][j];
	 }
      }
   }
   cout<<"\nSum of Upper triangle : "<<topSum<<"\nSum of Lower triangle : "<<lowSum;
   getch();
   return 0;
}
