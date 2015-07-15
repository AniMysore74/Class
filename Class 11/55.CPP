//Create a structure called Volume that uses three variables (Length, Width, Height) of type distance (feet and inches) to model the volume of a room. Read the three dimensions of the room and calculate the volume it represents and print out the result. The volume should be in (feet)3 form.
#include<iostream.h>
#include<conio.h>

struct distance {
  float ft,in;
};
struct volume {
  distance l,w,h;
};

int main() {
  volume v;
  cout<<"Enter Length : \n";
  cout<<"\tFeet : ";
  cin>>v.l.ft;
  cout<<"\tInches : ";
  cin>>v.l.in;
  cout<<"\nEnter Width : \n";
  cout<<"\tFeet : ";
  cin>>v.w.ft;
  cout<<"\tInches : ";
  cin>>v.w.in;
  cout<<"\nEnter Height : \n";
  cout<<"\tFeet : ";
  cin>>v.h.ft;
  cout<<"\tInches : ";
  cin>>v.h.in;
  v.l.ft=v.l.ft+(v.l.in/12);
  v.w.ft=v.w.ft+(v.w.in/12);
  v.h.ft=v.h.ft+(v.h.in/12);
  cout<<"Volume = "<<v.l.ft*v.w.ft*v.h.ft;
  getch();
  return 0;
}
