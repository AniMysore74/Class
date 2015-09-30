#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void mix(int A[], int B[],  int m, int n);
int main()
{ 	int A[50], B[50], m,n;
	clrscr();
	cout<<"\n Enter size of the Array 1 : "<<endl;
	cin>>m;
	cout<<"\n Enter the elements of Array 1 : "<<endl;
	for(int i=0;i<m;i++)
	{	cin>>A[i];
	}
	cout<<"\n Enter size of the Array 2 : "<<endl;
	cin>>n;
	cout<<"\n Enter the elements of Array 2 : "<<endl;
	for(int j=0;j<n;j++)
	{	cin>>B[j];
	}
	mix(A, B, m, n);
	getch();
	return 0;
	}
void mix(int A[], int B[], int n, int m)
{
	int C[20];
	int i=0,j=0,k=0,l;
	l=m+n-1;
	while(i<n&&k<20)

	{ if(A[i]%2==0)
	{	C[k]=A[i];
		k++;
		l++;
	}
	else
	{	C[l]=A[i];
		l--;
		i++;
	}
	}
	while(j<m&&k<20)

	{ if(B[i]%2==0)
	{	C[k]=B[i];
		l--;
		j++;
	}
	else
	{	C[l]=B[i];
		l--;
		j++;
	}
	}

       cout<<"\n The new merged array is : ";
       for(i=0;i<n+m;i++)
	cout<<"\n"<<C[i];
}
