//declare a structure called Emp with variables empno,
//days_worked of type int, name of type array of characters and basic,
//hra, da, cca, pt_rate and it_rate of type float.
//Write a program to store detail about an employee and calculate
//grosssalary and netsalary display it.*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct emp
 {
  int empno,days_worked;
  char name[40];
  float basic,hra,da,cca,pt_rate,it_rate;
};
main()
{
 emp emp1;
 float grosssalary,netsalary;
 cout<<"Enter the following details of employee";
 cout<<"\nEmployee Number:";
 cin>>emp1.empno;
 cout<<"\nEmployee Name:";
 cin>>emp1.name;
 cout<<"\nNumber of days employee worked:";
 cin>>emp1.days_worked;
 cout<<"\nEmployee's Basic Salary:";
 cin>>emp1.basic;
 cout<<"\nEmployee's House Rent Allowance:";
 cin>>emp1.hra;
 cout<<"\nEmployee's Dearness Allowance:";
 cin>>emp1.da;
 cout<<"\nEmployee's Convenience Allowance:";
 cin>>emp1.cca;
 cout<<"\nEmployee's Professional Tax Rate:";
 cin>>emp1.pt_rate;
 cout<<"\nEmployee's Income Tax Rate:";
 cin>>emp1.it_rate;
 grosssalary= ((emp1.basic*emp1.days_worked)/26) + ((emp1.basic*emp1.hra)/100)
	      + ((emp1.basic*emp1.da)/100) + emp1.cca;
 netsalary= grosssalary - (((emp1.basic*emp1.it_rate)/100) +
	    ((emp1.basic*emp1.pt_rate)/100));
 cout<<"Gross Salary of Employee = "<<grosssalary;
 cout<<"\nNet Salary of Employee = "<<netsalary;
 getch();
 return 0;
}
