#include<iostream.h>
#include<conio.h>
#include<process.h>
class bankAccounts {
    private:
            char name[40], accType;
 			double accNumber, balance;
    public:
		   void readData();
		   double getAccNo();
		   void depositMoney();
		   void withdrawMoney();
		   void displayData();
};
void bankAccounts::readData()
{
    cout<<"\nEnter member details :";
    cout<<"\n\tEnter name : ";
    cin>>name;
    cout<<"\tEnter account number : ";
    cin>>accNumber;
    cout<<"\tEnter account type : ";
    cin>>accType;
    cout<<"\tEnter account balance : ";
    cin>>balance;
}
double bankAccounts::getAccNo()
{
 	   return accNumber;
}
void bankAccounts::depositMoney()
{
   int amount;
   cout<<"\nEnter amount : ";
   cin>>amount;
   balance += amount;
   cout<<"\nYour bank balance is now "<<balance;
}
void bankAccounts::withdrawMoney()
{
   int amount;
   cout<<"\nEnter amount : ";
   cin>>amount;
   if(balance - amount > 1000)
       balance -= amount;
   else
       cout<<"\nMinimum balance is 1000";
   cout<<"\nYour bank balance is now "<<balance;
}
void bankAccounts::displayData()
{
    cout<<"\n\n\tName "<<name;
    cout<<"\n\tAccount number "<<accNumber;
    cout<<"\n\tAccount type "<<accType;
    cout<<"\n\tAccount balance "<<balance;
}
int searchAcc(bankAccounts b[10],double &accNo,int s)
{

 	for (int i=0; i<s; i++)
        if(b[i].getAccNo()==accNo)
		{
            accNo=i;
            return 1;
        }

  	return 0; 
}
int main()
{
    int s;
    cout<<"Enter the number of accounts : ";
    cin>>s;
    bankAccounts b[10];
        for(int i=0; i<s; i++)
	b[i].readData();
    char choice;
    double accNo;
    do
    {
	cout<<"\nDo you want to: \n\t[1]Deposit money to Account\n\t[2]Withdraw Money from account\n\t[3]Display all accounts\n\t[4]Exit\n";
	cin>>choice;
	switch (choice)
	{
	   case '1':
		cout<<"\nWhich account? Enter Account Number : ";
		cin>>accNo;
		if(searchAcc(b,accNo,s))
          b[(int)accNo].depositMoney();
        else
          cout<<"\nWrong account number";
        break;
	   case '2':
		cout<<"Which account? Enter Account Number : ";
		cin>>accNo;
		if(searchAcc(b,accNo,s))
          b[(int)accNo].withdrawMoney();
        else
          cout<<"\nWrong account number";
		break;
	   case '3':
		for(int i=0; i<s; i++)
		   b[i].displayData();
		break;
	   case '4':
		exit(1);
	   default:
		cout<<"\nEnter a correct choice.";
	}

    }while(1);
    getch();
    return 0;
}
