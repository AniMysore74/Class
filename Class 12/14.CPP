#include<iostream.h>
#include<conio.h>
#include<process.h>
class videoCassettes {
    private:
			char name[40], movieType[40];
 			double serialNo, price, copies;
    public:
		   void acceptData();
		   double inline getCopies();
		   void getName();
};
void videoCassettes::acceptData()
{
    cout<<"\n\tEnter name : ";
    cin>>name;
    cout<<"\n\tEnter serial number : ";
    cin>>serialNo;
    cout<<"\n\tEnter movie type : ";
    cin>>movieType;
    cout<<"\n\tEnter copies available : ";
    cin>>copies;
	cout<<"\n\tEnter price per day (INR) : ";
	cin>>price;
}
double inline videoCassettes::getCopies()
{
   return copies;
}
void videoCassettes::getName()
{
 	 cout<<name;
}
int main()
{
 	videoCassettes vc[10];
 	int i,j,s,pos,posArr[10];
 	cout<<"Enter number of movies";
 	cin>>s;
	double max,order[10];
	//========== Getting Data ==========//
	for(i=0; i<s; i++) 
	{
       cout<<"\nEnter movie "<<i+1<<" details : ";
       vc[i].acceptData();
	}	
	//========== Finding Movie with max copies ==========// 
	for(i=0; i<s; i++)
	{
	   if(vc[i].getCopies()>=max)
	   {
	       max+=vc[i].getCopies();
		   pos=i;
		
	   }
	   order[i]=vc[i].getCopies(); 
	   posArr[i]=i;		  
 	}
	//========== Displaying Movie with max copies ==========// 
	cout<<"\nMovie with maximum copies available is : ";
	vc[pos].getName();
	//========= Sorting list of no of copies available =========//
	for(i=0; i<s; i++)
	{
       for(j=0; j<s; j++)
	   {
	   	   if(order[j]>order[j+1])
	   	   {
              double temp = order[j];
              order[j] = order[j+1];
              order[j+1] = temp;
              
              int tempPos = posArr[j];
              posArr[j] = posArr[j+1];
              posArr[j+1] = tempPos;
		   }
	   }
    }
    //======== Displaying list of no of copies available ========//
    cout<<"\n\nAscending order of number of copies available : ";
    for(i=0; i<s; i++)
    {
       cout<<"\n\n\tMovie : ";
       vc[posArr[i]].getName();
       cout<<"\n\tNo of copies : "<<order[i];
    }
    getch();
    return 0;
}
