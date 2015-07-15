//Altering a string
#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
 char s[20];
 cout<<"Enter the string: ";
 cin.getline(s, 20);
 cout<<"The modified string is: ";
 int k=strlen(s);
 for(int i=0; i<k; i++)
 {
	if(s[i]>=97 && s[i]<=122)
	{
		s[i]=s[i]-32;
		cout<<s[i];
	}
	else if(s[i]>=65 && s[i]<=90)
	{
		s[i]=s[i]+1;
		cout<<s[i];
	}
	else
	{
		s[i]='*';
		cout<<s[i];
	}
 }
 getch();
 return 0;
 }
