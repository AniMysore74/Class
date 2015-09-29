#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<fstream.h>
class Student{
	int r_no;
	char name[20];
	int grade;
	int choice;
	public:
		void display()
		{
			cout<<"\n\nName: "<<name
			    <<"\nRoll no.: "<<r_no
			    <<"\nClass: "<<grade;
		}
		int send()
		{
			return r_no;
		}
		void modify()
		{
			cout<<"\nEnter (1) to modify roll number"
			      "\n\t(2) to modify name"
			      "\n\t(30 to change the class";
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"\nEnter the new roll number: ";
					cin>>r_no;
					break;
				case 2:
					cout<<"\nEnter the new name: ";
					cin.geline(name, 20);
					break;
				case 3:
					cout<<"\nEnter the new class: ";
					cin<<class;
					break;
			}
		}
		void add()
		{
			cout<<"\nEnter the roll number: ";
			cin>>r_no;
			cout<<"\nEnter the name: ";
			cin.geline(name, 20);
			cout<<"\nEnter the class: ";
			cin<<class;
		}
};
void main()
{
	clrscr();
	fstream file;
	file.open("Data.DAT", ios::binary|ios::out|ios::in);
	Student s;
	fstream temp("temp.DAT", ios::binary| ios::out);
	for(;;)
	{
		cout<<"Select from one of the options below:\n"
		      "(1) To add a record"
		      "\n(2) To display all records"
		      "\n(3) To search for a record"
		      "\n(4) To modify a record"
		      "\n(5) To delete a record"
		      "\N(6) tO exit";
		cin>>choice;
		switch(choice)
		{
			case 1:
				s.add();
				file.write((char*)&s, sizeof(s));
				cout<<"\nAdded successfully!";
				break;
			case 2:
				while(file.read((char*)&s, sizeof(s))
				{
					s.display()
				}
				cout<<"\All records displayed successfully!"
				break;
			case 6:
				exit(1);
				break;
		}
	}
	getch();
}
