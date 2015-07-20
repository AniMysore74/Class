#include<iostream.h>
#include<conio.h>
void pattern1 (int n)
{
  for(int i=0; i<n; i++)
  {
    for(int j =0; j<=i; j++)
    {
      cout<<char(j+65);
    }
    cout<<endl;
  }
}
void pattern2 (int n)
{
  for(int i=0; i<n; i++)
  {
    for(int k=i; k<n; k++)
    {
      cout<<" ";
    }
    for(int j =0; j<=i; j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}

int main()
{
  int n;
  cout<<"Pattern 1 : ";
  cin>>n;
  pattern1(n);
  cout<<"\n\nPattern 2 : ";
  cin>>n;
  pattern2(n);
  getch();
  return 0;
}
