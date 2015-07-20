#include<iostream.h>
#include<conio.h>
void calc(int x, int y, char op)
{
   switch (op)
   {
      case '+': cout<<x+y;
		break;
      case '-': cout<<x-y;
		break;
      case '*': cout<<x*y;
		break;
      case '/': cout<<x/y;
		break;
      default : cout<<"\n Please Enter a correct Arithmetic Operator";
   }
}

int main()
{
   int x,y;
   char op;
   cout<< "Enter two numbers:  \n";
   cin>>x>>y;
   cout<<"Enter an arithmetic operator ";
   cin>>op;
   calc(x,y,op);
   getch();
   return 0;
}
