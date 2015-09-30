#include<iostream.h>
#include<conio.h>

void SelectionSort(int [], int);
int main()
{
    int Arr[50],item,s,index;
    cout<<"Enter how many elements you want to create the Array with : ";
    cin>>s;
    cout<<"\nEnter Array elements : \n";
    for(int i=0; i<s; i++)
            cin>>Arr[i];
    SelectionSort(Arr,s);
    cout<<"The Sorted Array is shown below : \n";
    for(i=0; i<s; i++)
             cout<<Arr[i]<<" ";
    getch();
    return 0;
}

void SelectionSort(int Arr[], int s)
{
     int small, pos, temp;
     for(int i=0;i<s-1;i++)
     {
             small=Arr[i];
             pos=i;
             for(int j=i+1; j<s; j++)
             {
                     if(Arr[j]<small)
                     {
                                     small=Arr[j];
                                     pos=j;
                     }
             }
             temp=Arr[i];
             Arr[i]=Arr[pos];
             Arr[pos]=temp;
     }
}
