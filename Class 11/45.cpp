//Sort the elements in an array
#include<iostream.h>
#include<conio.h>
int main()
{ int a[10],i,j,temp;
cout<<"Enter the elements of array:";
for(i=1;i!=0;i++)
{
cin>>a[i];
}
for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
  {
    if(a[i]<a[j])
    {
     temp = a[i];
     a[i] = a[j];
     a[j] = temp;
    }
  }
}
for(i=0;i<5;i++)
cout<<a[i]<<endl;
getch();
return 0;
}
