#include<iostream.h>
#include<conio.h>
struct Employee
{
       int Eno;
       char Name[20];
       float salary;
};
void BubbleSort(Employee [], int);
int main()
{
    int item,s,index;
    Employee E[10];
    cout<<"Enter how many elements you want to create the Array of objects of structure Employee with : ";
    cin>>s;
    cout<<"\nEnter Array elements : \n";
    for(int i=0; i<s; i++)
    {
            cout<<"\n\tName : ";
            cin>>E[i].Name;
            cout<<"\n\tEno : ";
            cin>>E[i].Eno;
            cout<<"\n\tSalary : ";
            cin>>E[i].Salary;
            
    }
    BubbleSort(Arr,s);
    cout<<"The Sorted Array is shown below : \n";
    for(int i=0; i<s; i++)
    {
            cout<<"\n\tName : "<<E[i].Name;
            cout<<"\n\tEno : "<<E[i].Eno;
            cout<<"\n\tSalary : "<<E[i].Salary;
            
    }
    getch();
    return 0;
}

void BubbleSort(Employee E[], int s)
{
     Employee temp;
     for(int i=0;i<s;i++)
     {
             for(int j=0; j<s-1-i; j++)
             {
                     if(E[j].Eno>E[j+1].Eno)
                     {
                                    temp=E[j];
                                    E[j]=E[j+1];
                                    E[j+1]=temp;
                     }
             }
     }
}
