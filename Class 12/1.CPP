#include<iostream.h>
#include<conio.h>

int checkPal(int n)
{
  int bak=n,r=0,d;
  while(n>0)
  {
    d=n%10;
    r = r*10 + d;
    n /= 10;
  }
  if(r==bak)
     return 0;
  return 1;
}

int main()
{
  int i,j=0,n,s,arr[30];
  cout<<"How many numbers do you want to enter?  ";
  cin>>s;
  cout<<"Enter Numbers : \n";
  for(i=0;i<s;i++)
  {
    cin>>n;
    if(!checkPal(n))
    {	arr[j]=n;
	j++;
    }
  }
  if(j)
  {
    cout<<"Palindromes are: ";
    for(i=0; i<j; i++)
      cout<<arr[i]<<"\t";
  }
  else
     cout<<"No Palindrome found";
  getch();
  return 0; 
}
