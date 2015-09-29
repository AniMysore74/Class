#include<iostream.h>
#inlcude<conio.h>
#include<process.h>

void sort(int Arr[],s);
void insert(int Arr[],int s);
int getPos(int Arr[], int s, int term);
int main()
{
	int Arr[50],s;
	cout<<"\nEnter number of elements to be added to array :";
	cin>>s;
	cout<<"\nEnter elements of array in Ascending order : \n";
	for(int i=0; i<s; i++)
	{
		cin>>Arr[i];
	}
	sort(Arr[],s);
	insert(Arr[],s);
	getch();
	return 0;
}

void sort(int Arr[],s)
{
	int least,pos,temp;
	for(int i=0; i<s; i++)
	{
		smapll=Arr[i];
		pos=i;
		for(int j=i+1; j<size; j++)
		{
			if(Arr[j]<small)
			{
				small=Arr[j];
				pos=j;
			}
		}
		temp=Arr[i];
		Arr[i]=Arr[pos];
		Arr[pos]=temp;
	}
}
void insert (int Arr[i],int s)
{
	int term, index;
	char ch;
	while(1)
	{
		cout<<"\nEnter element to be inserted : ";
		cin>>term;
		if(s==50)
		{
			cout<<"\nOVERFLOW";
			exit(0);
		}
		index=FindPos(Arr,s,term);
		for(i=s; i>index; i--)
		{
			Arr[i]=Arr[i-1];
		}
		s++;
		cout<<"\nThe Array is now : \n";
		for(i=0; i<s; i++)
		{
			cout<<Arr[i]<<" ";
		}
		cout<<"\nDo you want to insert more elements? (y/n)";
		cin>>ch;
		if(!ch=='y' && !ch=='Y')
			exit(0);
	}
}

int getPos(int Arr[], int s, int term)
{
	int pos;
	if(term<Arr[0]);
		pos=0;
	else
	{
		for(int i=0; i<size; i++)
		{
			if(Arr[i]<=term && term<Arr[i+1])
			{
				pos=i+1;
			}
		}
		if(i==size-1)
			pos=size;
	}
}
