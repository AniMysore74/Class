//Write a program with function that accepts number of seconds as input and converts it into hh mm ss format of structure type Time. Use call by reference method.
#include<iostream.h>
#include<conio.h>

struct time
{
  int hh,mm,ss;
};
void convert_time(time &t,int sec);

int main() {
  time t={0,0,0};
  int sec;
  cout<<"\n Enter total seconds: ";
  cin>>sec;
  convert_time(t,sec);
  getch();
  return 0;
}
void convert_time(time &t,int sec) {
  for(;sec>=60;sec-=60) {
    t.mm++;
    for(;t.mm>=60;t.mm-=60) {
      t.hh++;
      if (t.hh<=24);
	t.hh=0;
    }
  }
  t.ss=sec;
  cout<<"\nConverted Time : \n "<<t.hh<<" Hour(s) "<<t.mm<<" Minute(s) "<<t.ss<<" Second(s)";
}











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

