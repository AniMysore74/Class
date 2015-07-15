//Create a structure Time with variables hh, mm and ss. Write a C++ program with function that accepts a time variable and updates time by 1 second. The main() should display both the original time and updated time. 
#include<iostream.h>
#include<conio.h>
struct time
{
  int hh,mm,ss;
};
void update_time(time &t);

void main() {
  clrscr();
  time t;
  cout<<"\n Enter time ";
  cout<<"\tHours: ";
  cin>>t.hh;
  cout<<"\t\tMinutes: ";
  cin>>t.mm;
  cout<<"\t\tSeconds: ";
  cin>>t.ss;
  t.ss--;
  cout<<"\nOriginal time: ";
  update_time(t);
  cout<<"\nUpdated time : ";
  update_time(t);
  getch();
}
void update_time(time &t) {
  t.ss++;
  for(;t.ss>=60;t.ss-=60) {
    t.mm++;
    for(;t.mm>=60;t.mm-=60) {
      t.hh++;
      if (t.hh<=24);
	t.hh=0;
    }
  }
  cout<<t.hh<<" : "<<t.mm<<" : "<<t.ss;
}











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                








