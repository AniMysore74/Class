#include<iostream.h>
#include<conio.h>

int main()
{
	int *m,rsize,csize,i,j,rsum,csum;
	cout<<"\nEnter number of rows: ";
	cin>>rsize;
	cout<<"\nEnter number of columns:  ";
	cin>>csize;
	m = new int[rsize*csize];
	cout<<"\nNew Matrix created. \nEnter Elements : \n";
	for(i=0; i<rsize; i++)
		for(j=0; j<csize; j++)
			cin>>m[i*csize+j];

	cout<<"\n\nThe Matrix you created is : \n";
	for(i=0; i<rsize; i++)
		for(j=0; j<csize; j++)
			cout<<m[i*csize+j];

	for(i=0; i<rsize; i++)
	{
		rsum=0;
		for(j=0; j<csize; j++)
			rsum+=m[i*csize+j];
		cout<<"\nSum of elements in Row "<<i+1<<" = "<<rsum;
	}
	for(j=0; j<csize; j++)
	{
		csum=0;
		for(i=0; i<rsize; i++)
			csum+=m[i*csize+j];
		cout<<"\nSum of elements in Columm "<<j+1<<" = "<<csum;
	}
	return 0;
}
