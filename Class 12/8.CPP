#include<iostream.h>
#include<conio.h>

int main () {
   int a[10][10],i,j,n=3,m=3,Sum=0;
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
      Sum=0;
      for(j=0; j<m; j++)
      {
	 Sum += a[i][j];
      }
      cout<<"\nSum of Row "<<i+1<<" = "<<Sum;
   }
   for(i=0; i<n; i++)
   {
      Sum=0;
      for(j=0; j<m; j++)
      {
	 Sum += a[j][i];
      }
      cout<<"\nSum of  Column "<<i+1<<" = "<<Sum;
   }

   getch();
   return 0;
}
