//////////////////////////////////////////////////////////////////
////////////////////INTELLISOFT Job Portal////////////////////////
//////////////////////////////////////////////////////////////////

/*-----------------------------------------------------------------*/
			 //Header files                           \
/*-----------------------------------------------------------------*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>

///////////////////////////////////////////////////
//		   CLASSES                 	 //
///////////////////////////////////////////////////
/*class Account
{
	private:
		void UsernameCreation();
		void PasswordCreation();
		void AssignID();
	protected:
		char *Username, *FName,*LName,*Password;
		double ID;
	public:
		void Create();
		void Display();

};*/
class Admin : public Account
{

	public:
		void Menu();
}
class Applicant : public Account
{
		char Industries[3];
	public:
		void Menu();
}
class Admin : public Account
{
		char Company[30];
	public:
		void Menu();
}
//////////////////////////////////////////////////////
// 			METHODS			    //
//////////////////////////////////////////////////////
/*void Account::create()
{
	drawFrame(1);
	UsernameCreation();
	PasswordCreation();
	AssignID();
	cout<<"\nYour new user ID is : "<<ID;

	cout<<"\nYour account has been created. Now creating your profile...";

}
void Account::UsernameCreation()
{
	cout<<"\nPlease enter your desired username : ";
	cin>>

}
void Account::PasswordCreation()
{
	int upperC(0), lowerC(0), flag(0),len;
	while(1)
	{
		cout<<"\nEnter a password (Minimum 8 characters. \nPassword must contain atleast 1 uppercase \nand 1 lowercase character.)";
		cin>>Password;
		len=strlen(Password);
		if(len<8)
		{
			cout<<"\nMinimum 8 characters";
			continue;
		}
		for(int i; i<=strlen(Password); i++)
		{
			if(isupper(Password[0]))
				upperC++;
			else if(islower(Password[0]))
				lowerC++;
			if(lowerC&&upperC)
			{
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			cout<<"Password must contain atleast 1 uppercase \nand 1 lowercase character.";
		}
}
void Account::EditProfile()
{
	cout<<"\nEnter your first name :";
	gets(this -> FName);
	cout<<"\nEnter your last name :";
	gets(this -> LName);
}
*/

/*-----------------------------------------------------------------*/
			 //Menus ( Portals )
/*-----------------------------------------------------------------*/
//-----------Admin Portal Menu------------//
int Admin::menu()
{
  char choice;
  clrscr();
  gotoxy(29,10);
  textcolor(12);
  cprintf("Please enter your option");
  textcolor(7);
  cout<<"\n\t[1] Proceed to login\n\t[2] Go Back";
  draw_border(6,8,78,15,0);
  gotoxy(29,13);
  cin>>choice;
  switch (choice)
  {
    case '1': admin();
	      break;
    case '2': break;
    default : error(1);
	      break;
  }
  return 0;
}
//-----------Applicant Portal Menu------------//
int Applicant::menu()
{
  char choice;
  clrscr();
  gotoxy(29,10);
  textcolor(12);
  cprintf("Please enter your option");
  textcolor(7);
  cout<<"\n\t[1] Proceed to login\n\t[2] Go Back";
  draw_border(6,8,78,15,0);
  gotoxy(29,13);
  cin>>choice;
  switch (choice)
  {
    case '1': clrscr();
	      applicant();
	      break;
    case '2': break;
    default : clrscr();
	      error(1);
	      break;
  }
  return 0;
}
//-----------Employer Portal Menu------------//
int Employer::menu()
{
  char choice;
  clrscr();
  gotoxy(29,10);
  textcolor(12);
  cprintf("Please enter your option");
  textcolor(7);
  cout<<"\n\t[1] Proceed to login\n\t[2] Go Back";
  draw_border(6,8,78,15,0);
  gotoxy(29,13);
  cin>>choice;
  switch (choice)
  {
    case '1': clrscr();
	      employer();
	      break;
    case '2': break;
    default : clrscr();
	      error(1);
	      break;
  }
  return 0;
}
/*-----------------------------------------------------------------*/
		       //Function protoypes
/*-----------------------------------------------------------------*/
int admin();
int error(int);
int employer();
int applicant();
int admin_menu();
int bad_login(int);
int employer_menu();
int category_list();
int applicant_menu();
int welcome_screen();
void employer_list();
void applicant_list();
int admin_validation();
void employer_search();
void applicant_search();
void splash_screen(int);
void edit_apl_profile();
void edit_emp_profile();
int credential_input(int);
int employer_validation();
int applicant_validation();
void view_employer_profile();
void view_applicant_profile();
void draw_border(int,int,int,int,int);

/*-----------------------------------------------------------------*/
			      //Data
/*-----------------------------------------------------------------*/

//------Administrator data------//

admin_data adm[1] =
{
      {{"Aniruddha","Mysore"},"admin","pass"}
};
//------Applicants' data------//

applicant_data apt[10] =
{
      {{"Mukta","Jain"},"apl01",{"IT","software","media"},"applicant1","pass"},
      {{"Sanjaya","Kaur"},"apl02",{"media","advertising","PR"},"applicant2","pass"},
      {{"Vijay","Korrapati"},"apl03",{"IT","hardware","manufacturing"},"applicant3","pass"},
      {{"Pranav","Sharma"},"apl04",{"IT","software","hardware"},"applicant4","pass"},
      {{"Roshan","Bannerji"},"apl05",{"education","e-learning","consultancy"},"applicant5","pass"},
      {{"Sanjeet","Singh"},"apl06",{"telecom","testing","IT"},"applicant6","pass"},
      {{"Kailash","Mullur"},"apl07",{"analytics","accountancy","BPO"},"applicant7","pass"},
      {{"Kishori","Avninder"},"apl08",{"banking","insurance","analytics"},"applicant8","pass"},
      {{"Bhaskara","Nibhanupudi"},"apl09",{"testing","software","IT"},"applicant9","pass"},
      {{"Dipali","Chaudhary"},"apl10",{"production","manufacturing","design"},"applicant10","pass"},

};

//------Employers' data------//

employer_data emp[5] =
{
     {{"Larry","Page"},"emp01","Google","employer1","pass"},
     {{"Mark","Zuckerburg"},"emp02","Facebook","employer2","pass"},
     {{"Bill","Gates"},"emp03","Microsoft","employer3","pass"},
     {{"Jeff","Bezos"},"emp04","Amazon","employer4","pass"},
     {{"Jack","Dorsey"},"emp05","Twitter","employer5","pass"}
};
//------Active Account------//

int acc_no;

/*-----------------------------------------------------------------*/
			      // Main
/*-----------------------------------------------------------------*/
int main ()
{
   int i=0;
   clrscr();
   do
   {
     welcome_screen();
     i++;
     if(i==10)
     {
       clrscr();
       error(-1);
     }
   } while(i<10);
   getch();
   return 0;
}
/*-----------------------------------------------------------------*/
			 //Welcome Screen
/*-----------------------------------------------------------------*/
int welcome_screen ()
{
  int i,j;
  char choice,animation_array[14]="Login Portals";
  clrscr();
  textbackground(0);
  textcolor(7);
  for(i=20,j=58;i<59;i++,j--)
  {
    delay(50);
    gotoxy(i,3);
    cprintf(".");
    gotoxy(j,7);
    cprintf(".");
  }
  for(i=3,j=6;i<7;i++,j--)
  {
    delay(50);
    gotoxy(20,i);
    cprintf(".");
    gotoxy(58,j);
    cprintf(".");
  }
  delay(200);
  gotoxy(23,5);
  cout<<"Welcome to Intellisoft Job Portal";
  delay(500);
  gotoxy(33,13);
  for(i=0;i<14;i++)
  {
    delay(100);
    cout<<animation_array[i];
  }
  delay(200);
  textbackground(3);
  for (i=4;i<24;i++)
  {
    for(j=15;j<20;j++)
    {
      gotoxy(i,j);
      cprintf(" ");
    }
  }
  textcolor(0);
  gotoxy(10,17);
  cprintf("[1] Admin");
  delay(200);
  textbackground(4);
  for (i=29;i<49;i++)
  {
    for(j=15;j<20;j++)
    {
      gotoxy(i,j);
      cprintf(" ");
    }
  }
  gotoxy(33,17);
  cprintf("[2] Applicant");
  delay(200);
  textbackground(6);
  for (i=54;i<74;i++)
  {
    for(j=15;j<20;j++)
    {
      gotoxy(i,j);
      cprintf(" ");
    }
  }
  gotoxy(59,17);
  cprintf("[3] Employer");
  delay(200);
  textbackground(7);
  for (i=35;i<45;i++)
  {
    gotoxy(i,21);
    cprintf(" ");
  }
  gotoxy(35,21);
  cprintf("[4] Exit");
  delay(200);
  textattr(8<<0);
  gotoxy(20,23);
  cprintf("Enter choice : ");
  cin>>choice;
  cin.ignore();
  switch (choice)
     {
	case '1' : admin_menu();
		   break;
	case '2' : applicant_menu();
		   break;
	case '3' : employer_menu();
		   break;
	case '4' : splash_screen(4);
		   break;
	default :  error(0);
		   break;
     }
  return 0;
}
//-----------Splash screens------------//
void splash_screen (int screen_type)
{
   switch (screen_type)
   {
     case 1 : draw_border(26,3,53,7,1);
	      gotoxy(31,5);
	      textcolor(12);
	      cprintf("Welcome ");
	      textcolor(7);
	      cout<<adm[1].adm_name.first_name;
	      break;
     case 2 : draw_border(26,3,53,7,1);
	      gotoxy(31,5);
	      textcolor(12);
	      cprintf("Welcome ");
	      textcolor(7);
	      cout<<apt[acc_no].apt_name.first_name;
	      break;
     case 3 : draw_border(26,3,53,7,1);
	      gotoxy(31,5);
	      textcolor(12);
	      cprintf("Welcome ");
	      textcolor(7);
	      cout<<emp[acc_no].emp_name.first_name;
	      break;
     case 4 : { clrscr();
		draw_border(16,7,63,16,1);
		gotoxy(19,10);
		textcolor(12);
		cprintf("Thank you for using Intellisoft Job Portal");
		gotoxy(24,12);
		textcolor(7);
		cprintf("Developed by Aniruddha Mysore");
		gotoxy(26,13);
		cprintf("Class 11-B | Roll No. 28");
		delay(2000);
		exit(0);
	      }
   }
}
/*-----------------------------------------------------------------*/
		       //Border Drawer Tool
/*-----------------------------------------------------------------*/
void draw_border(int tl_x, int tl_y, int br_x, int br_y,int animate)
{
  int i,j;
  textbackground(0);
  textcolor(7);
  for(i=tl_x,j=br_x;i<=br_x;i++,j--)
  {
    if(animate) delay(50);
    gotoxy(i,tl_y);
    cprintf(".");
    gotoxy(j,br_y);
    cprintf(".");
  }
  for(i=tl_y,j=br_y;i<=br_y;i++,j--)
  {
    if(animate) delay(50);
    gotoxy(tl_x,i);
    cprintf(".");
    gotoxy(br_x,j);
    cprintf(".");
  }
}

/*-----------------------------------------------------------------*/
			  //Login System
/*-----------------------------------------------------------------*/
//---------Password Check----------//
int credential_input (int acc)
{
  int i,j;
  char u[20],p[20];
  draw_border(23,8,59,14,0);
  gotoxy(26,10);
  cout<<"Enter username : ";
  textcolor(7);
  gotoxy(45,10);
  cin>>u;
  cin.ignore();
  gotoxy(26,12);
  textcolor(8);
  cout<<"Enter password : ";
  textcolor(7);
  for(j=0;p[j-1]!='\r'&&j!=18;j++)
  {
    p[j]=getch();
    cout<<"*";
  }p[j-1]='\0';
  if (acc ==1)
    for(i=0;i<5;i++)
    {
      if(strcmp(u,adm[0].username)==0 && strcmp(p,adm[0].password)==0)
      {
	  clrscr();
	  return 1;
      }
    }
  else if (acc==2)
     for(i=0; i<20 ; i++)
     {
       if(strcmp(u,apt[i].username)==0 && strcmp(p,apt[i].password)==0)
       {
	 clrscr();
	 acc_no=i;
	 return 2;
       }
     }
  else if (acc==3)
     for(i=0; i<10 ; i++)
     {
       if(strcmp(u,emp[i].username)==0 && strcmp(p,emp[i].password)==0)
       {
	 clrscr();
	 acc_no=i;
	 return 3;
       }
     }
  return 0;
}
//---------Admin login----------//
int admin_validation()
{
   int attempt_count=0,login_state=0;
   do
   {
      delay(800);
      clrscr();
      login_state=credential_input(1);
      attempt_count++;
      //-------Too many tries-------//
      if(attempt_count>3)
      {
	    delay(200);
	    clrscr();
	    login_state=bad_login(1);
      }
   } while (login_state==0);
   return 0;
}
//---------Applicant login----------//
int applicant_validation ()
{
   int attempt_count=0,login_state=0;
   do
   {
      delay(800);
      clrscr();
      login_state=credential_input(2);
      attempt_count++;
      //-------Too many tries-------//
      if(attempt_count>3)
      {
	    delay(200);
	    clrscr();
	    login_state=bad_login(2);
      }
   } while (login_state==0);
   return 0;
}
//---------Employer login----------//
int employer_validation ()
{
   int attempt_count=0,login_state=0;
   do
   {
      delay(800);
      clrscr();
      login_state=credential_input(3);
      attempt_count++;
      //-------Too many tries-------//
      if(attempt_count>3)
      {
	    delay(200);
	    clrscr();
	    login_state=bad_login(3);
      }
   } while (login_state==0);
   return 0;
}
//---------Attempt count overshot----------//
int bad_login(int acc)
{
  int login_state;
  char choice;
  textcolor(12);
  gotoxy(13,5);
  cprintf("Multiple login failures. Please enter an option:");
  textcolor(7);
  cout<<"\n\n\t[1]Try Again(Last chance)\n\t[2]Exit";
  draw_border(5,2,70,11,1);
  gotoxy(15,9);
  cin>>choice;
  switch (choice)
  {
    case '1': clrscr();
	      login_state=credential_input(acc);
	      if(login_state==0)
		 exit(0);
	      else
		 break;
    case '2': clrscr();
	      splash_screen(4);
    default : error(0);
  }
  return 0;
}
/*-----------------------------------------------------------------*/
			      //Admin
/*-----------------------------------------------------------------*/
int admin()
{
  admin_validation();
  char choice;
  splash_screen(1);
  delay(4000);
  do {
    clrscr();
    gotoxy(29,4);
    textcolor(12);
    cprintf("Please enter your option : ");
    textcolor(7);
    cout<<"\n\n\t\t[1] View applicants list\n\t\t[2] Applicant search\n\t\t[3] View employers\n\t\t[4] Employer search\n\t\t[5] Logout \n\t\t[6] Exit";
    draw_border(15,2,59,20,0);
    gotoxy(29,15);
    cin>>choice;
    switch (choice)
    {
      case '1' : clrscr();
		 applicant_list();
		 break;
      case '2' : clrscr();
	       applicant_search();
		 break;
      case '3' : clrscr();
		 employer_list();
		 break;
      case '4' :  clrscr();
		  employer_search();
		 break;
      case '5' :  break;
      case '6' : splash_screen(4);
      default  : error(1);
		 break;
    }
  } while (choice!='5');
  return 0;
}
/*-----------------------------------------------------------------*/
			  //Applicant
/*-----------------------------------------------------------------*/
int applicant()
{
  applicant_validation();
  char choice;
  splash_screen(2);
  delay(4000);
  do {
    clrscr();
    gotoxy(29,4);
    textcolor(12);
    cprintf("Please enter your option : ");
    textcolor(7);
    cout<<"\n\n\t[1] View Profile \n\n\t[2] Edit Profile \n\n\t[3] View Employers \n\n\t[4] Logout\n\n\t[5] Exit\n";
    draw_border(6,2,73,18,0);
    gotoxy(29,17);
    cin>>choice;
    cin.ignore();
    switch (choice)
    {
      case '1': clrscr();
		view_applicant_profile();
		break;
      case '2': cout<<"Taking you to profle ........";
		delay(500);
		clrscr();
		view_applicant_profile();
      case '3': clrscr();
		employer_list();
		break;
      case '4': break;
      case '5': splash_screen(4);
      default : error(1);
    }

  } while(choice!='4');
  return 0;
}
//---------View Applicant Profile----------//
void view_applicant_profile ()
{
  int i = acc_no,j;
  char a;
  clrscr();
  gotoxy(29,5);
  textcolor(12);
  cprintf("Profile details : ");
  textcolor(7);
  cout<<"\n\n\n\t\t\tName : "<<apt[i].apt_name.first_name<<" "<<apt[i].apt_name.last_name;
  cout<<"\n\t\t\tIndustry :";
  for (j=0;j<3;j++)
  {
    cout<<"\n\t\t\t\t-"<<apt[i].industry[j];
  }
  cout<<"\n\t\t\tID :"<<apt[i].id;
  cout<<"\n\t\t\tUsername :"<<apt[i].username;
  textcolor(12);
  cout<<"\n\n\n\t\t\t1.Edit Profile\n\t\t\t2.Go back\n\n\t\t\tPlease enter your option : ";
  draw_border(20,3,55,24,0);
  gotoxy(29,22);
  cin>>a;
  switch (a) {
    case '1': clrscr();
	      edit_apl_profile();
	      break;
    case '2': break;
  }
}

//---------Edit Applicant Profile----------//
void edit_apl_profile()
{
  int i = acc_no;
  char choice;
  clrscr;
  gotoxy(28,10);
  textcolor(12);
  cprintf("What would you like to edit? ");
  textcolor(7);
  cout<<"\n\t\t\t\t[1] Name\n\t\t\t\t[2] Industry\n\t\t\t\t[3] Username";
  draw_border(25,8,59,16,0);
  gotoxy(28,15);
  cin>>choice;
  clrscr();
  switch (choice)
  {
     case '1' : {
		  gotoxy(24,11);
		  cout<<"Please enter your first name : ";
		  cin>>apt[i].apt_name.first_name;
		  cin.ignore();
		  gotoxy(24,12);
		  cout<<"Please enter your last name : ";
		  cin>>apt[i].apt_name.last_name;
		  cin.ignore();
		  break;
		}
     case '2' : {
		  gotoxy(27,11);
		  cout<<"Industry 1 : ";
		  cin>>apt[i].industry[1];
		  cin.ignore();
		  gotoxy(27,12);
		  cout<<"Industry 2 : ";
		  cin>>apt[i].industry[2];
		  gotoxy(27,13);
		  cin.ignore();
		  cout<<"Industry 3 : ";
		  cin>>apt[i].industry[3];
		  cin.ignore();
		  break;
		}
     case '3' : {
		  gotoxy(28,12);
		  cout<<"Username : ";
		  cin>>apt[i].username;
		  cin.ignore();
		  break;
		}
     default : error(1);
  }
}
/*-----------------------------------------------------------------*/
			      //Employer
/*-----------------------------------------------------------------*/
int employer()
{
  employer_validation();
  char choice;
  splash_screen(3);
  delay(2000);
  do {
    clrscr();
    gotoxy(29,5);
    textcolor(12);
    cprintf("Please enter your option : ");
    textcolor(7);
    cout<<"\n\n\t\t\t[1] View employer profile\n\n\t\t\t[2] Edit profile\n\n\t\t\t[3] View applicant list \n\n\t\t\t[4] Applicant search\n\n\t\t\t[5] Logout\n\n\t\t\t[6] Exit";
    draw_border(23,3,55,19,0);
    gotoxy(29,21);
    cin>>choice;
    cin.ignore();
    switch (choice)
    {
      case '1' : clrscr();
		 view_employer_profile();
		 break;
      case '2' : cout<<"Taking you to profile....";
		 delay(500);
		 clrscr();
		 view_employer_profile();
		 break;
      case '3' : clrscr();
		 applicant_list();
		 break;
      case '4' :  clrscr();
		  applicant_search();
		 break;
      case '5' : break;
      case '6' : splash_screen(4);
      default  : error(1);
		 break;
    }
  } while (choice!='5');
  return 0;
}
//---------View Employer Profile----------//
void view_employer_profile ()
{
  int i = acc_no,j;
  char a;
  clrscr();
  gotoxy(29,5);
  textcolor(12);
  cprintf("Profile details : ");
  textcolor(7);
  cout<<"\n\n\n\t\t\tName : "<<Name.first_name<<" "<<emp[i].emp_name.last_name;
  cout<<"\n\t\t\tCompany :"<<Company;
  cout<<"\n\t\t\tID :"<<Id;
  cout<<"\n\t\t\tUsername :"<<Username;
  textcolor(12);
  cout<<"\n\n\n\t\t\t1.Edit Profile\n\t\t\t2.Go back\n\n\t\t\tPlease enter your option : ";
  draw_border(21,3,53,20,0);
  gotoxy(29,18);
  cin>>a;
  switch (a) {
    case '1': clrscr();
	      edit_emp_profile();
	      break;
    case '2': break;
  }
}
//---------Edit Employer Profile----------//
void edit_emp_profile()
{
  int i = acc_no;
  char choice;
  clrscr;
  gotoxy(29,10);
  textcolor(12);
  cprintf("What would you like to edit? ");
  textcolor(7);
  cout<<"\n\n\t\t\t\t[1] Name\n\t\t\t\t[2] Company\n\t\t\t\t[3] Username";
  draw_border(25,8,59,16,0);
  gotoxy(29,15);
  cin>>choice;
  clrscr();
  switch (choice)
  {
     case '1' : {
		  gotoxy(24,11);
		  cout<<"Please enter your first name : ";
		  cin>>Name.first_name;
		  cin.ignore();
		  gotoxy(24,12);
		  cout<<"Please enter your last name : ";
		  cin>>Name.last_name;
		  cin.ignore();
		  break;
		}
     case '2' : {
		  gotoxy(24,11);
		  cout<<"Company : ";
		  cin>>Company;
		  cin.ignore();
	  break;
		}
     case '3' : {
		  gotoxy(24,12);
		  cout<<"Username : ";
		  cin>>Username;
		  cin.ignore();
		  break;
		}
     default : error(1);
  }
}
/*-----------------------------------------------------------------*/
			      //Applicants List
/*-----------------------------------------------------------------*/
void applicant_list()
{
  int i;
  clrscr();
  gotoxy(28,3);
  textcolor(12);
  cprintf("Full list of applicants :");
  textcolor(7);
  for(i=0;i<10;i++)
  {
     delay(900);
     cout<<"\n\n\t\t_________________________________________________\n\t\t\t";
      textcolor(12);
      cprintf("Name : ");
      textcolor(7);
      cout<<Name.first_name<<" "<<Name.last_name<<"\n\t";
      textcolor(12);
      cprintf("Industries : ");
      textcolor(7);
	  cout<<"\t* "<<Industry[0]<<"\t* "<<Industry[1]<<"\t* "<<Industry[2];
  }
  cout<<"\n\n\t\t_________________________________________________\n\n";
  textcolor(12);
  cprintf("Press any key to go back");
  textcolor(7);
  getch();
}
/*-----------------------------------------------------------------*/
			      //Applicants Search
/*-----------------------------------------------------------------*/
void applicant_search()
{
  int i,j,flag=0;
  char search_term[10];
  clrscr();
  draw_border(21,3,63,7,0);
  gotoxy(23,5);
  textcolor(12);
  cprintf("Enter Industry to be searched for : ");
  textcolor(7);
  cin>>search_term;
  cin.ignore();
  for(i=0;i<5;i++)
  {
    for(j=0;j<3;j++)
    {
       if(strstr(search_term,apt[i].industry[j])!='\0')
       {
	  delay(900);
	  cout<<"\n\n\t\t_________________________________________________\n\t\t\t";
	  textcolor(12);
	  cprintf("Name : ");
	  textcolor(7);
	  cout<<apt[i].apt_name.first_name<<" "<<apt[i].apt_name.last_name<<"\n\t";
	  textcolor(12);
	  cprintf("Industries : ");
	  textcolor(7);
	  cout<<"\t* "<<apt[i].industry[0]<<"\t* "<<apt[i].industry[1]<<"\t* "<<apt[i].industry[2];
	  flag++;
       }
    }
  }
  if(!flag)
    cout<<"\n\n\No Matches";
  cout<<"\n\n\t\t_________________________________________________\n\n";
  textcolor(12);
  cprintf("Press any key to go back");
  textcolor(7);
  getch();
}
/*-----------------------------------------------------------------*/
			      //Employers List
/*-----------------------------------------------------------------*/
void employer_list()
{
  int i;
  clrscr();
  gotoxy(28,8);
  textcolor(12);
  cprintf("Full list of employers :");
  textcolor(7);
  for(i=0;i<5;i++)
  {
     delay(900);
     cout<<"\n\n\t\t_________________________________________________\n\n\t\t\t";
     textcolor(12);
     cprintf("Name : ");
     textcolor(7);
     cout<<emp[i].emp_name.first_name<<" "<<emp[i].emp_name.last_name<<"\n\t\t\t\t";
     textcolor(12);
     cprintf("Company : ");
     textcolor(7);
     cout<<emp[i].company;
  }
  cout<<"\n\n\t\t_________________________________________________\n\n";
  textcolor(12);
  cprintf("Press any key to go back");
  textcolor(7);
  getch();
}
/*-----------------------------------------------------------------*/
			      //Employers Search
/*-----------------------------------------------------------------*/
void employer_search()
{
  int i,flag=0;
  char choice,search_term[10];
  clrscr();
  draw_border(21,3,63,7,0);
  gotoxy(23,5);
  textcolor(12);
  cprintf("Enter Company to be searched for : ");
  textcolor(7);
  cin>>search_term;
  cin.ignore();
  for(i=0;i<5;i++)
  {
    if(strstr(search_term,emp[i].company)!='\0')
    {
      delay(900);
      cout<<"\n\n\t\t_________________________________________________\n\t\t\t";
      textcolor(12);
      cprintf("Name : ");
      textcolor(7);
      cout<<emp[i].emp_name.first_name<<" "<<emp[i].emp_name.last_name<<"\n\t\t\t\t";
      textcolor(12);
      cprintf("Company : ");
      textcolor(7);
      cout<<emp[i].company;
      flag++;
    }
  }
  if(!flag)
    cout<<"\n\n\No Matches";
  cout<<"\n\n\t\t_________________________________________________\n\n";
  textcolor(12);
  cprintf("Press any key to go back");
  textcolor(7);
  getch();
}
/*-----------------------------------------------------------------*/
			  //Error Handling
/*-----------------------------------------------------------------*/
int error(int e_val)
{
  clrscr();
  gotoxy(10,13);
  switch (e_val)
  {
    case -1 : cout<<"Session Expired. Please restart the program. ";
	      delay(500);
	      exit(0);
	      break;
    case 0 : cout<<"Unknown Error. Please restart the program. ";
	     delay(500);
	     exit(0);
	     break;
    case 1 : cout<<"Input error. Please enter an appropriate response";
	     delay(500);
	     break;
  }
  return 0;
}
