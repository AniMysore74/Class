//Write a C++ program that gives a user an option to create list of 10 Names.
// Search for a given name in the list and Sort the names in Alphabetical order. 
//Program should run as long as the user wants. Use separate functions for create, search and sort. 
#include<iostream.h>
#include<conio.h>
#include<string.h>
void create (char a[][20],int x);
void display (char a[][20],int x);
void search (char a[][20], int x, char str[]);
void sort (char a[][20], int x);

int main() {
  int x,c,i;
  char a[10][20],str[5],v='y';
  cout<<"Enter number of names : ";
  cin>>x;
  create(a,x);
  do{
    cout<<"\n1. Search  \n2. Sort \nEnter your choice : ";
    cin>>c;
    if(c==1) {
      cout<<"\nEnter the element you wish to search for :";
      cin>>str;
      search(a,x,str);
    }
    else if(c==2)
      sort(a,x);
    cout<<"\nDo you want to continue? (Y/N)";
    cin>>v;  
  }while(v!='n' && v!='N');     
  getch();
  return 0;
}

void create(char a[][20],int x) {
   int i;
   for(i=0; i<x; i++) {
     cout<<"Enter name "<<i+1<<" : ";
     cin>>a[i];
   }
}
void display (char a[][20],int x) {
  int i;
  for(i=0;i<x;i++){
    cout<<"\n"<<a[i];
  }   
}
void search(char a[][20], int x, char str[]) {
  int i,flag=0;
  for(i=0; i<x; i++) {
    if(strcmp(a[i],str)==0) {
      cout<<"\nThe string has been found at position : "<<i+1;
      flag = 1;
    }
  }
  if (flag==0)
    cout<<"String not found";
}
void sort(char a[][20], int x) {
  int i;
  char temp[20];
  for(i=1; i<x; i++) {
       if(strcmp(a[i],a[i-1])<0) {
         strcpy(temp,a[i]);
         strcpy(a[i],a[i-1]);
         strcpy(a[i-1],temp);
        }            
  }
  cout<<"\nThe sorted names are : ";
  display(a,x);  
}
