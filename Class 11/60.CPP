//Declare a structure Complex to represent a complex number having a real part and imaginary part. Write C++ functions to add and subtract two complex numbers. The function add() intakes to structure arguments by value and returns another structure of Complex type with the result addition. The function subtract() intakes two structure arguments by reference and stores the difference of first and second complex number in the first one.
#include<iostream.h>
#include<conio.h>
struct complex
{
  int rl,im;
};
complex add(complex a , complex b){
  complex c;
  c.rl=a.rl+b.rl;
  c.im=a.im+b.im;
  return(c);
}
complex subtract(complex &a , complex &b){
  complex c;
  c.rl=a.rl-b.rl;
  c.im=a.im-b.im;
  return(c);
}
int main() {
  complex a,b,c;
  cout<<"Enter first complex number : ";
  cout<<"\n\tReal part = ";
  cin>>a.rl;
  cout<<"\tImaginary part = ";
  cin>>a.im;
  cout<<"\nEnter second complex number : ";
  cout<<"\n\tReal part = ";
  cin>>b.rl;
  cout<<"\tImaginary part = ";
  cin>>b.im;
  c=add(a,b);
  cout<<"\nAdding first to second, result : ";
  cout<<"\n\tComplex number = "<<c.rl<<" + "<<c.im<<"i";
  c=subtract(b,a); 
  cout<<"\n\nubtracting first from second, result : ";
  cout<<"\n\tComplex number = "<<c.rl<<" + "<<c.im<<"i";
  getch();
  return 0;
}








                                                                                
                                                                                
                                                                                
                                                                                
                                                                                








