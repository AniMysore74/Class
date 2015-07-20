#include<iostream.h>
#include<conio.h>
#include<math.h>
int chkprime(int x)
{
  int flag=0;
  switch (x)
  {
    case 1: return 1;

    case 2: return 0;
    default: { for(int i=x-1; i>=2; i--)
		 if(x%i==0)
		   return (flag=1);
	       if(!flag)
		   return flag;
	     }
  }
  return 1;
}
void arrayprime(int arr[20], int s)
{
  int temp[20],j=0,i=0;
  for(i=0; i<s; i++)
  {
    int p=chkprime(arr[i]);
    if(!p)
      temp[j++]=arr[i];
  }
  if(j)
  {
    i=0;
	j--;
    cout<<"\nPrimes are : ";
    do  {cout<<temp[i]<<" ";}
    while((i++)<j);
  }
  else
    cout<<"\nNo primes found";
}

int main()
{
  int i=0,arr[20],s;
  cout<<"How many elements do you wish to enter? -> ";
  cin>>s;
  cout<<"Enter array : \n";

  do  cin>>arr[i];
  while((i++)<s-1);
  arrayprime(arr,s);
  getch();
  return 0;
}
