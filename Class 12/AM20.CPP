#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char word[40],c;
	int spaces=0, vowels=0, digits=0;

	fstream file("Story.txt",ios::in|ios::out);
	cout<<"Enter text to be written to the file";
	cin.getline(word,40);
	file<<word;
	file.seekg(0);
	while(!file.eof())
	{
		file.get(c);
		if(isalpha(c))
		{
			switch (tolower(c))
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					vowels++;
			}

		}
		else if(isdigit(c))
			digits++;
		else if(isspace(c))
			spaces++;
	}
	cout<<"\nVowels : "<<vowels<<"\nDigits : "<<digits<<"\nSpaces : "<<spaces;
	getch();
	return 0;
}
