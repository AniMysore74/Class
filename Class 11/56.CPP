#include<iostream.h>
#include<conio.h>

int create(country_list c, int n);
int search(country_list c);
int sort(country_list c);

struct country_list {
  char name[40],capital[40];
  int pci;
};

int main() {
  int i,n,option;
  char f;
  country_list c[20];
  cout<<"Enter number of countries : ";
  cin>>n;
  cout<<"Enter details of countries\n";
  create(c,n);
  do {
    cout<<"\n1)Search for a country\n2) Sort Countries by name\n\t (1/2) : ";
    cin>>option;
    switch option {
      case 1: search(c);
	      break;
      case 2: sort(c);
	      break
      default: cout<<"Error in input!";
    }

    cout<<"Do you wish to continue? (Y/N)";
    cin>>f;
  } while(f!='n'&& f!='N');
  getch();
  return 0;
}

int create(country_list c[],int n) {
  int i;
  for(i=0;i<n;i++) {
    cout<<"\nCountry "<<i+1<<" : ";
    cout<<"\n\tName : ";
    cin>>c[i].name;
    cout<<"\tCapital; : ";
    cin>>c[i].capital;
    cout<<"\tPer-capita Income(in million dollars) : ";
    cin>>c[i].pci;
  }
  return 0;
}
