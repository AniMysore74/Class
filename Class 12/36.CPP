#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
struct node 
{
       char Country[30];
       node *link;
};
class Stack
{
	      node *top;
      public:
         Stack()
         {
                top=NULL
         }
	     void Push();
	     void Pop();
	     void Display();
	     ~Stack();
};
void Stack::Push()
{
	     node *temp = new node;
	     cout<<"\n Enter name of new country to be inserted into Stack : ";
	     gets(temp -> Country);
	     temp -> link = top;
	     top = temp;
}
void Stack::Pop()
{
	    if(top == NULL)
		   cout<<"\nUnderflow";
	    else
	    {
		node *temp = top;
		top = top -> link;
		cout<<"\nPopped "<<temp->Country<<" from Stack";
		delete temp;
	    }
}
void Stack::Display()
{
		 if(top!=NULL)
		 {
		     node *temp = top;
		     cout<<"\nStack contains : \n";
		     while(temp!=NULL)
		     {
			       cout<<temp -> Country<<" -> ";
			       temp = temp -> link;
		     }
		 }
		 else
		     cout<<"\n The Stack is empty";
}
Stack::~Stack()
{
	       node *temp;
	       while(top!=NULL)
	       {
			       temp=top;
			       top=top->link;
			       delete temp;
               }
}
int main()
{
    clrscr();
    Stack S;
    char ch;
    while(1)
    {
        cout<<"\n\t[1] Push a new Country into Stack\n\t[2] Pop Country from Stack\n\t[3] Display Stack\n\t[4] Exit\n\t";
	    cin>>ch;
	    switch (ch)
            {
                   case '1':
                        S.Push();
                        break;
                   case '2':
                        S.Pop();
                        break;
                   case '3':
                        S.Display();
			break;
                   case '4':
                        exit(0);
                   default:
                           cout<<"\nPlease enter a correct option";
            }
    }
}
