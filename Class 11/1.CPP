#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,sum,prod,quot,diff;
cout << "Enter Two numbers : \n";
cin>>a>>b;
sum = a + b;
prod = a*b;
diff = a-b;
quot = a/b;
cout <<"Sum =  "<< sum <<"\nDifference = " << diff <<"\nProduct = " << prod <<"\nQuotient = " << quot;
getch();
return 0;
}
