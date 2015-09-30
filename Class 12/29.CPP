#include<iostream.h>
#include<conio.h>
#include<limits.h>

void InsertionSort(int [], int);
int main()
{
    int Arr[50],item,s,index;
    cout<<"Enter how many elements you want to create the Array with : ";
    cin>>s;
    cout<<"\nEnter Array elements : \n";
    for(int i=1; i<=s; i++)
            cin>>Arr[i];
    InsertionSort(Arr,s);
    cout<<"The Sorted Array is shown below : \n";
    for(i=1; i<=s; i++)
             cout<<Arr[i]<<" ";
    getch();
    return 0;
}

void InsertionSort(int Arr[], int s)
{
     int temp,j;
     Arr[0]=INT_MIN;
     for(int i=1;i<=s;i++)
     {
             temp=Arr[i];
             j=i-1;
             while(temp<Arr[j])
             {
                               Arr[j+1]=Arr[j];
                               j--;
             }
             Arr[j+1]=temp;
     }
}
