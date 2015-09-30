#include<iostream.h>
#include<conio.h>

int binarySearch(int Arr[], int s, int term);

int main()
{
    int Arr[10],s,term,result;
    cout<<"\nEnter size of array : ";
    cin>>s;
    cout<<"\nEnter elements (sorted in Ascending order) :\n";
    for(int i=0; i<s; i++)
    {
            cin>>Arr[i];
    }
    cout<<"\nEnter element to be searched for : ";
    cin>>term;
    result=binarySearch(Arr);
    if(result<0)
                cout<<"\nElement not found";
    else
                cout<<"Term ' "<<term<<" '  found at position  "<<result+1;
    getch()
    return 0;
                
}

int binarySearch(int Arr[], int s, int term)
{
     int beg=0,end=s,mid;
     
     while(beg<=end)
     {
            mid=(beg+end)/2;
            if(term==Arr[mid])
            {
                            return mid;
            }
            else if(term>Arr[mid])
                 beg=mid+1;
            else
                end=mid+1;        
     }
     return -1;
}    
