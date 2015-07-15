//Output maximum and minimum elements of an array
#include<iostream.h>
#include<conio.h>
int main()
{
  int a[50],b,i,mx=0,mm=0;
  cout<<"Input array : (press 0 to exit) \n";
  for (i=1;;i++) {
    cin>>a[i];
    if(a[i]==0)
      break;
    b=a[i];
    if(b>mx)
      mx=b;
    if(i==1) 
      mm=b; 
    if(b<mm)
      mm=b;
  }
  cout<<"\nThe maximum value is "<<mx;
  cout<<"\nThe minimum value is "<<mm;
  getch();
  return 0;
}
