//Write a menu driven program in C++ to implement a stack as an Array
#include<iostream.h>
#include<conio.h>
#include<process.h>

//PROTOTYPES
int Push(int Stack[], int &top, int element);
int Pop(int Stack[], int &top);
void Display(int Stack[], int top);

//GLOBAL VARIABLES
const int size = 50;

int main()
{
	int Stack[size],ITEM, result, top=-1;
	char ch='y';
	while(ch=='Y'||ch=='y')
	{
		cout<<"\nEnter element for insertion : ";
		cin>>ITEM;
		result=Push(Stack,top,ITEM);
		if (result==-1)
		{
			cout<<"\nOVERFLOW";
			getch();
			exit(0);
		}
		cout<<"\nThe Stack now contains : \n";
		Display(Stack,top);
		cout<<"\nWant to insert more elements? (y/n) : ";
		cin>>ch;
	}
	cout<<"\nNow Deletion of elements begins : \n";
	ch='y';
	while(ch=='Y'||ch=='y')
	{
		result=Pop(Stack,top);
		if (result==-1)
		{
			cout<<"\nUNDERFLOW";
			getch();
			exit(0);
		}
		cout<<"\nThe element deleted is : "<<result<<"\nThe Stack now contains : \n";
		Display(Stack,top);
		cout<<"\nWant to delete more elements? (y/n) : ";
		cin>>ch;
	}

	return 0;
}

int Push(int Stack[], int &top, int element)
{
	if(top==size-1)
		return -1;
	else
	{
		top++;
		Stack[top]=element;
	}
	return 0;
}
int Pop(int Stack[],int &top)
{
	int ret;
	if(top==-1)
		return -1;
	else
	{
		ret=Stack[top];
		top--;
	}
	return ret;
}
void Display(int Stack[], int top)
{
	if(top==-1)
		return;
	cout<<Stack[top]<<" <-- "<<endl;
	for(int i = top-1; i>=0; i--)
		cout<<Stack[i]<<endl;
}
