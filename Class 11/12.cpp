//Use manipulators to format the given output.
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
   cout<<"$$$$$HELLO"<<endl;
   cout.setf(ios::right);
   cout<<setw(10)<<"$$$$$HELL"<<endl;
   cout<<setw(10)<<"$$$$$$HEL"<<endl;
   cout<<setw(11)<<"########HE"<<endl;
   cout<<setw(11)<<"#########H";
   getch();
   return 0;
}
