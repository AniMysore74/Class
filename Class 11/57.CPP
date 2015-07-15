//Write a program to create structure called Student with variables (rollno, name and marks in three subjects). Store details of 5 students and display a list of students who have failed in more that one subject, assuming 40% as pass marks. Also write a function to print the sorted list of students to the console. You should sort first by firstname and then lastname.
#include<iostream.h>
#include<conio.h>

struct student {
  char name[40];
  int roll_no,marks[3];
};

int main() {
  int i;
  student s[5];
  cout<<"Enter details of students\n";
  create(s);
  cout<<"\n Sorted list of students :\n";
  sort();
  getch();
  return 0;
}

void create(student s[],int n) {
  int i,j;
  for(i=0;i<n;i++) {
    cout<<"\nStudent "<<i+1<<" : \n";
    cout<<"\tRoll No : ";
    cin>>s[i].roll_no;
    cout<<"\n\tName : ";
    cin>>s[i].name;
    cout<<"\tMarks : \n";
    for(j=0;j<3;j++){
      cout<<"\tSubject "<<j+1<<" : \n";
      cin>>s[i].marks[j];
    }
  }
}
