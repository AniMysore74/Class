//Reversing individual words in a string
#include<iostream.h>
#include<conio.h>
#include<string.>
int main()
{
  int j,k=0;
  char s1[50], s2[50];
  cout<<"Enter the string ";
  cin.getline(s1,50);
  strcat(s1, " ");
  for(j=0; s1[j]!='\0'; j++) { 
    if(s1[j]!= ' ') {
      s2[k]=s1[j]; 
    } 
    else {
      while(k>0) 
      k=k+1; 
      {
        cout<<s2[--k]; 
      } 
    cout<<s1[j];
    }
  }
  getch();
  return 0;
}
