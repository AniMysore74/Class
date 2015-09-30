#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
	char City[30];
	node *link;
};
class Queue
{
		node *front,*rear;
	public:
        Queue()
        {
               front=NULL;
               rear=NULL;
        }   
		void Insert();
		void Remove();
		void Display();
		~Queue();
};
void Queue::Insert()
{
	node *temp = new node;
	gets(temp -> City);
	if(rear==NULL)
	{
		rear = front = temp;
	}
	else
	{
		rear -> link = temp;
		rear = temp;
	}
}
void Queue::Remove()
{
	if(front==NULL)
	{
		cout<<"\nUNDERFLOW";
		return;
	}
	node *temp = front;
	front = front -> link;
	cout<<"\nRemoved "<<temp -> City<<" from Queue";
	delete temp;
	if(front==NULL)
	{
		rear=NULL;
	}

}
void Queue::Display()
{
	node *temp = front;
	cout<<"\nThe Queue contains : \n";
	while(temp!=NULL)
	{
		cout<<temp->City<<" -> ";
		temp=temp->link;
	}
	if(temp==NULL)
	{
		cout<<"\nThe Queue is empty! ";
	}
}
Queue::~Queue()
{
	node *temp;
	while(front!=NULL)
	{
		temp = front;
		front = front->link;
		delete temp;
	}
}
int main()
{
    Queue Q;
	char ch;
	while(1)
	{
		cout<<"\n\t[1]Insert City into queue\n\t[2]Remove City fromn Queue\n\t[3]Display all Cities in Queue\n\t[4] Exit\n\t";
		cin>>ch;
		switch (ch)
        {
                   case '1':
                        Q.Insert();
                        break;
                   case '2':
                        Q.Remove();
                        break;
                   case '3':
                        Q.Display();
			            break;
                   case '4':
                        exit(0);
                   default:
                           cout<<"\nPlease enter a correct option";
        }
	}
	getch();
	return 0;
}
