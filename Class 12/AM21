#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<conio.h>

struct Student {
       char Name[40],Class;
       int RollNo, Marks[5];
       float TotalPercent;     
};
fstream file("Student.dat",ios::in|ios::ate|ios::binary);
void Add()
{
     file.seekg(0,ios::end);
     Student S;
     int n,t=0;
     cout<<"\nEnter how many records do you wish to add : ";
     cin>>n;
     for(int i=0; i<n; i++)
     {
             cout<<"\n\tRecord "<<i+1;
             cout<<"\n\t\tEnter student name: ";
             cin.getline(S.Name,40);
             cout<<"\n\t\tEnter class: ";
             cin>>S.Class;
             cout<<"\n\t\tEnter student roll number: ";
             cin>>S.RollNo;
             for(int j=0; j<5; j++)
             {
                     cout<<"n\t\tEnter Marks of Subject "<<j+1<<" :  ";
                     cin>>S.Marks[j];
                     t += S.Marks[j];       
             }
             S.TotalPercent = t/5;
             file.write((char*)&S, sizeof(S));
     }
}
void Display()
{    
     file.seekg(0,ios::beg);
     Student S;
     while(!file.eof())
     {
             file.read((char*)&S, sizeof(S));
             cout<<"\n\tRecord "<<i+1;
             cout<<"\n\t\tStudent name: "<<S.Name;
             cout<<"\n\t\tClass: "<<S.Class;
             cout<<"\n\t\tStudent roll number: "<<S.RollNo;
             for(int j=0; j<5; j++)
             {
                     cout<<"Marks of Subject "<<j+1<<" :  "<<S.Marks[j];    
             }
             cout<<"\n\t\tTotal Percent: "<<S.TotalPercent;
     }
}
void Search()
{
     file.seekg(0,ios::beg);
     Student S;
     int x;
     bool flag;
     cout<<"\nEnter roll number to search for: ";
     cin>>x;
     while(!file.eof())
     {
                       file.read((char*)&S, sizeof(S));
                       if(S.RollNo==x))
                       {
                                               flag=true;
                                               cout<<"\nFound record: \n\t"<<S.Name;
                       }         
                            
     }
     if(!flag)
              cout<<"\nNo records found.";
}
void Modify()
{
     fstream temp("temp.dat",ios::out|ios::binary);
     
     int x;
     cout<<"\nEnter the roll no of the record to be modified";
     cin>>x;
     file.read((char *)&S,sizeof(S));
     while(!file.eof())
     {
      if (x==S.rollNo){
         cout<<"\n The record is";
         s.output();
         pos =file.tellg()-size(s);
         break;
      }
      file.read((char *)&s,sizeof(s));
    }
    if(pos>-1)
    {
              cout<< "\n enter new record”;
              s.input();
              file.seekp(pos,ios::beg);
              file.write((char *)&s,sizeof(s));
              cout<< "\n record modified successfully”;
    }
    else
        cout<< "\n record not exist”;
}
void delete_record()
{    
     fstream file("data.dat”, ios::in|ios::binary);
     fstream newfile("newstu.dat”,ios::out|ios::binary);
     student s;
     cout<<"\n enter the rollno no of student whom record to be deleted";
     cin>>r;
     file.read((char *)&s,sizeof(s));
     while(file)
     {
                if (r!=s.getrno())
                {
                                  newfile.write((char *)&s,sizeof(s));
                }
                file.read((char *)&s,sizeof(s));
    }
    file.close();
    newfile.close();
}
int main()
{
    char c;
    do {
        cout<<"\n\t1)Add records\n\t2)Display all records\n\t3)Search records\n\t4)Modify records\n\t5)Delete records\n\t6)Exit";
        cin>>c1,c2;
        switch(c1)
        {
                 case '1':
                      Add();
                      break;
                 case '2':
                      Display();
                      break;
                 case '3':
                      Search();
                      break;
                 case '4':
                      Modify();
                      break;
                 case '5':
                      Delete();
                      break;
                 case '6':
                      getch();
                      exit(0);
                 default: 
                          cout<<"\nPlease enter a valid choice" ;
                          continue;
        }        
        cout<<"\nDo you want to continue(Y/N)? ";
        cin>>c2;
    } while(c2=='y'||c2=='Y');    
    getch();
}


