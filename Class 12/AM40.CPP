//Write a menu driven program in C++ to implement a queue as an Array
#include<iostream.h>
#include<conio.h>
#include<process.h>

//PRTOTYPES
int Insert(int Queue[], int element);
int Remove(int Queue[]);
void Display(int Queue[], int front, int rear);

//GLOBAL VARIABLES
const int size = 50;
int Queue[size],front=-1,rear=-1;
int main()
{
	int ITEM, result;
	char ch='y';
	while(ch=='Y'||ch=='y')
	{
		cout<<"\nEnter element for insertion : ";
		cin>>ITEM;
		result=Insert(Queue,ITEM);
		if (result==-1)
		{
			cout<<"\nOVERFLOW";
			getch();
			exit(0);
		}
		cout<<"\nThe Queue now (Front...to...Rear) is : \n";
		Display(Queue,front,rear);
		cout<<"\nWant to insert more elements? (y/n) : ";
		cin>>ch;
	}
	cout<<"\nNow Deletion of elements begins : \n";
	ch='y';
	while(ch=='Y'||ch=='y')
	{
		result=Remove(Queue);
		if (result==-1)
		{
			cout<<"\nUNDERFLOW";
			getch();
			exit(0);
		}
		cout<<"\nThe element deleted is : "<<result<<"\nThe Queue now (Front...to...Rear) is : \n";
		Display(Queue,front,rear);
		cout<<"\nWant to delete more elements? (y/n) : ";
		cin>>ch;
	}

	return 0;
}

int Insert(int Queue[], int element)
{
	if(rear==size-1)
		return -1;
	else if(rear==-1)
	{
		front=rear=0;
		Queue[rear]=element;
	}
	else
	{
		rear++;
		Queue[rear]=element;
	}
	return 0;
}
int Remove(int Queue[])
{
	int ret;
	if(front==-1)
		return -1;
	else
	{
		ret=Queue[front];
		if(front==rear)
			front=rear=-1;
		else
			front++;
	}
	return ret;
}
void Display(int Queue[], int front, int rear)
{
	if(front==-1)
		return;
	for(int i = front; i<rear; i++)
		cout<<Queue[i]<<" <- \t";
	cout<<Queue[rear]<<endl;
}
