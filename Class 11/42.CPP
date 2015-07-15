//Seperating and making even and odd arrays
#include<iostream.h>
#include<conio.h>
int main(){
int original[20]={3,5,2,12,53,23,54,42,54,23,87,44,22,82,14,13,29,66,65,43}, odd[20], even[20];
int i=0, j=0, k=0, odd_length, even_length;
cout<<"The original array is ";
 for (i=0; i<20; i++)
 {cout<<" "<<original[i];
  if(original[i]%2==0)
	{
	even[j]=original[i];
	j++;
	}
  else
	{
	odd[k]=original[i];
	k++;
	}
 }
 cout<<"\nEven array is ";
 for(i=0; i<j; i++)
 {cout<<" "<<even[i];}

 cout<<"\nOdd array is ";
  for(i=0; i<k; i++)
 {cout<<" "<<odd[i];}

 getch();
 return 0;
}
