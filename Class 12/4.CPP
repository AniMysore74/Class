#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main()
{
  char s[100];
  int spaces=0, characters, words=0;
  cout<<"Enter a string : ";
  gets(s);
  
  for(int i=0; i<strlen(s); i++)
  {
    if(i==0)  //Checks if first letter is a space
    {  if(!isspace(s[i]))
         words++;
       continue;
    }     
    if(isspace(s[i]))
    {
      spaces++;
        if(!isspace(s[i+1]) && s[i+1]!='\0')
          words++;
    }
  }
  characters=strlen(s);
  cout<<"\nSpaces : "<<spaces<<"\nCharacters : "<<characters<<"\nWords :"<<words;
  getch();
  return 0;
}
