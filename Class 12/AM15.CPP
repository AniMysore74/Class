#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class publication {
	protected:
		char title[30];
		float price;
	public:
		void getData()
		{
			cout<<"\nEnter Title : ";
			gets(title);
			cout<<"\nEnter Price :";
			cin>>price;
		}
		void putData()
		{
			cout<<"\nTitle : ";
			puts(title);
			cout<<"\nPrice :"<<price;
		}

};
class book : public publication{
		int pageCount;
	public:
		void getData()
		{
			publication::getData();
			cout<<"\nEnter Page Count :";
			cin>>pageCount;
		}
		void putData()
		{       publication::putData();
			cout<<"\nPage Count :"<<pageCount;
		}

};
class tape : public publication
{
		float playingTime;
	public:
		void getData()
		{
			publication::getData();
			cout<<"\nEnter Playing Time :";
			cin>>playingTime;
		}
		void putData()
		{       publication::putData();
			cout<<"\nPlaying Time :"<<playingTime;
		}
};
void main()
{
	clrscr();
	book b;
	tape t;
	// Menu
	do {
		char c1, c2;
		cout<<"\nWelcome. DO you want to \n\t[1]Create a publication\n\t[2]Display a publication\n\t[3]Exit\n\t";
		cin>>c1;
		switch(c1)
		{
			case '1':
				cout<<"\n\n\t[1]Book\n\n\t[2]Tape";
				cin>>c2;
				switch(c2) {
					case '1':
						b.getData();
						break;
					case '2':
						t.getData();
						break;
					default:
						cout<<"\nIncorrect Option.";
						break;
				}
				break;
			case '2':
				cout<<"\n\n\t[1]Book\n\n\t[2]Tape";
				cin>>c2;
				switch(c2) {
					case '1':
						b.putData();
						break;
					case '2':
						t.putData();
						break;
					default:
						cout<<"\nIncorrect Option.";
						break;
				}
				break;
			case '3':
				getch();
				exit(1);
			default:
				cout<<"\nIncorrect Option.";
				break;
		}
	}while(1);
	getch();
}
