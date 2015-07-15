//Write a program to calculate average score & grade for n students from m subject scores.

#include<iostream.h>
#include<conio.h>
#include<process.h>
main()
{
  int n,m,mks[10][10],i,j,total;
  cout<<"Enter number of students : ";
  cin>>n;
  cout<<"Enter number of subjects : ";
  cin>>m;
  float avg[10];
  for(i=0;i<n;i++) {
    total=0;
    cout<<"Student "<<i+1<<" : \n";
    for(j=0; j<m;j++) {                
      cout<<"\tSubject "<<j+1<<" : ";
      cin>>mks[i][j];
      if(mks[i][j]>100) {
        cout<<"Error!!";
        getch();
        exit(0);
      }
      total=total + mks[i][j];
    }
    avg[i]=total/m;
  }
  for(i=0;i<n;i++) {
     cout<<"Average marks for student"<<i+1<<"is: "<<avg[i]<<endl;
     if(avg[i]>75)
       cout<<"Grade A";
     else if(avg[i]>60)
       cout<<"Grade B";
     else if(avg[i]>45)
       cout<<"Grade C";
     else
       cout<<"Grade D";
     cout<<endl;
  }
  getch();
  return 0;
}
