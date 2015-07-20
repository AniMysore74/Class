#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	clrscr();
	int c1, c2;
	ofstream ofile;
	ifstream ifile;
	char choice='y', string[20];
	ofile.open("Article.txt",ios::app);
	while(choice=='y' || choice=='Y')
	{
		cin.getline(string, 20);
		ofile<<string;
		cout<<"Do you want to enter more text: ?";
		cin>>choice;
	}
	ofile.close();
	ifile.open("Article.txt");
	while(ifile)
	{
		ifile>>string;
		if(strcmpi(string, "These"))
			c1++;
		if(strcmpi(string, "This"))
			c2++;
	}
	cout<<"The number of ""These"" = "<<c1<<"and ""This"" = "<<c2;
	getch();
}
