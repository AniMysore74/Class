#include<iostream.h>
#include<conio.h>

void Function(int Array[20], int s)
{
     int NewArray[20][20];
     for(int i=0; i<s; i++)
     {
             for(int j=0; j<s; j++)
             {
                     if((i+j)>=s)
                                NewArray[i][j]=0;
                     else
                         NewArray[i][j]=Array[j];
                     cout<<NewArray[i][j]<<"\t";
             }
             cout<<endl;
     }
}

int main()
{
    int Array[20], s;
    cout<<"Enter size : ";
    cin>>s;
    cout<<"\n\nEnter elements of array : \n";
    for(int i=0; i<s; i++)
            cin>>Array[i];
    Function(Array,s);
    getch();
    return 0;
}
