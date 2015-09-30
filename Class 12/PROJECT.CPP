//////////////////////////////////////////////////////////////////
//                   INTELLISOFT Job Portal                     //
//------------/////////////////////////////////-----------------//
//               Aniruddha Mysore | Class XII                   //
//////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////
//       HEADER FILES                   //
///////////////////////////////////////////////////
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>

///////////////////////////////////////////////////
//		   CLASSES                 	 //
///////////////////////////////////////////////////
/*-----------------------------------------------------------------*/
           //Base Class
/*-----------------------------------------------------------------*/
class Account
{
	private:
		void UsernameCreation();
		void PasswordCreation();
		void AssignID();
	protected:
		char *Username, *Password, *FName,*LName,;
		double ID;
	public:
    int Validate(int *, int *);
		void EditProfile();
		void ViewProfile();
		// Accessor Functions
		char* getFName()
		      return FName;
    char* getLName()
          return LName;

};
/*-----------------------------------------------------------------*/
           //Derived Class
/*-----------------------------------------------------------------*/
class Admin : public Account
{

	public:
		void Menu();
};
class Applicant : public Account
{
   private:
		char *Industries[3];
	public:
		void Menu();
		void EditProfile();
		void ViewProfile();
		char **GetIndustries()
		     return Industries;
};
class Employer : public Account
{
  private:
		char *Company;
	public:
		void Menu();
		void EditProfile();
		void ViewProfile();
		char *GetCompany()
		     return Company;
		
};
///////////////////////////////////////////////////
//       FUNCTION PROTOTYPES                  //
///////////////////////////////////////////////////
//Initialization
void init();
//Portals
int WelcomeScreen();
int AdminPortal();  
int EmployerPortal();
int ApplicantPortal();

//User functions
void ListEmployers(); 
void ListApplicants(); 
void SearchEmployers(); 
void SearchApplicants(); 

// Login Funcion 
int Login(int);

// Main Display functions
int error(int);
void SplashScreen(int,char*);
void DrawBorder(int,int,int,int,int);

///////////////////////////////////////////////////
//       GLOBAL VARIABLES AND DATA               //
///////////////////////////////////////////////////

int AdminSize(1), ApplicantSize(10), EmployerSize(5);

Admin ADM[1];
Applicant APL[10];
Employer EMP[5];

/*-----------------------------------------------------------------*/
			      // Main
/*-----------------------------------------------------------------*/
int main ()
{
   int i=0;
   init();
   clrscr();
   do
   {
     WelcomeScreen();
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
//////////////////////////////////////////////////////
//      METHODS OF CLASS 'ACCOUNT'        //
//////////////////////////////////////////////////////
void ViewProfile {
  clrscr();
  gotoxy(29,5);
  textcolor(12);
  cprintf("Profile details : ");
  textcolor(7);
  cout<<"\n\n\n\t\t\tName : "<<FName<<" "<<LName;
  cout<<"\n\t\t\tID :"<<ID;
  cout<<"\n\t\t\tUsername :"<<Username;
}
void EditProfile()
{
            //cprintf("What would you like to edit? ");
            //textcolor(7);
            //cout<<"\n\n\t\t\t\t[1] Name\n\t\t\t\t[2] Company\n\t\t\t\t[3] Username";
            
            //UsernameCreation();
            //PasswordCreation();
            //AssignID();
            //cout<<"\nYour new user ID is : "<<ID;           
            //cout<<"\nYour account has been created. Now creating your profile...";
            
            DrawBorder(25,8,59,16,0);
            clrscr();
            gotoxy(24,11);
            cout<<"Please enter your first name : ";
            cin>>Fname;
            cin.ignore();
            gotoxy(24,12);
            cout<<"Please enter your last name : ";
            cin>>LName;
            cin.ignore();
            
            DrawBorder(25,8,59,16,0);
            clrscr();
            gotoxy(24,12);
            cout<<"Username : ";
            cin>>Username;
            cin.ignore();

}
void Validate(int *U, int *P)
{
             if(!strmp(U,Username) && !strcmp(P,Password))
                 return 1;
             else 
                 return 0;
}
/*
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
//////////////////////////////////////////////////////
//      METHODS OF CLASS 'ADMIN'        //
//////////////////////////////////////////////////////
void Admin::Menu()
{
  char choice;
  SplashScreen(1,FName);
  delay(4000);
  do {
    clrscr();
    gotoxy(29,4);
    textcolor(12);
    cprintf("Please enter your option : ");
    textcolor(7);
    cout<<"\n\n\t\t[1] View applicants list\n\t\t[2] Applicant search\n\t\t[3] View employers\n\t\t[4] Employer search\n\t\t[5] Logout \n\t\t[6] Exit";
    DrawBorder(15,2,59,20,0);
    gotoxy(29,15);
    cin>>choice;
    switch (choice)
    {
      case '1' : clrscr();
     ListApplicants();
     break;
      case '2' : clrscr();
         SearchApplicants();
     break;
      case '3' : clrscr();
     ListEmployers();
     break;
      case '4' :  clrscr();
      SearchEmployers();
     break;
      case '5' :  break;
      case '6' : SplashScreen(4);
      default  : error(1);
     break;
    }
  } while (choice!='5');
}
//////////////////////////////////////////////////////
//      METHODS OF CLASS 'APPLICANT'        //
//////////////////////////////////////////////////////
void Applicant::Menu()
{
  char choice;
  SplashScreen(1,FName);
  delay(4000);
  do {
    clrscr();
    gotoxy(29,4);
    textcolor(12);
    cprintf("Please enter your option : ");
    textcolor(7);
    cout<<"\n\n\t[1] View Profile \n\n\t[2] Edit Profile \n\n\t[3] View Employers \n\n\t[4] Logout\n\n\t[5] Exit\n";
    DrawBorder(6,2,73,18,0);
    gotoxy(29,17);
    cin>>choice;
    cin.ignore();
    switch (choice)
    {
      case '1': clrscr();
    ViewProfile();
    break;
      case '2': cout<<"Taking you to profle ........";
    delay(500);
    clrscr();
    ViewProfile();
      case '3': clrscr();
    ListEmployers();
    break;
      case '4': break;
      case '5': SplashScreen(4);
      default : error(1);
    }

  } while(choice!='4');
}
void Applicant::ViewProfile()
{
  char a;
  ::ViewProfile();
  cout<<"\n\t\t\tIndustry :";
  for (int i=0;i<3;i++)
  {
    cout<<"\n\t\t\t\t-"<<Industry[j];
  }
  textcolor(12);
  cout<<"\n\n\n\t\t\t1.Edit Profile\n\t\t\t2.Go back\n\n\t\t\tPlease enter your option : ";
  DrawBorder(20,3,55,24,0);
  gotoxy(29,22);
  cin>>a;
  switch (a) {
    case '1': clrscr();
        EditProfile();
        break;
    case '2': break;
  }
}
void Applicant::EditProfile() 
{
     ::EditProfile();
      DrawBorder(25,8,59,16,0);
    for(int i=0; i<3; i++)
    {
          cout<<"Industry "<<i+1<<" : ";
          gotoxy(27,11+i);        
          cin>>Industry[i];
        cin.ignore();
      }
    break;
     
}
//////////////////////////////////////////////////////
//      METHODS OF CLASS 'EMPLOYER'       //
//////////////////////////////////////////////////////
void Employer::Menu()
{
  char choice;
  SplashScreen(1,FName);
  delay(2000);
  do {
    clrscr();
    gotoxy(29,5);
    textcolor(12);
    cprintf("Please enter your option : ");
    textcolor(7);
    cout<<"\n\n\t\t\t[1] View employer profile\n\n\t\t\t[2] Edit profile\n\n\t\t\t[3] View applicant list \n\n\t\t\t[4] Applicant search\n\n\t\t\t[5] Logout\n\n\t\t\t[6] Exit";
    DrawBorder(23,3,55,19,0);
    gotoxy(29,21);
    cin>>choice;
    cin.ignore();
    switch (choice)
    {
      case '1' : clrscr();
     ViewProfile();
     break;
      case '2' : cout<<"Taking you to profile....";
     delay(500);
     clrscr();
     ViewProfile();
     break;
      case '3' : clrscr();
     ListApplicants();
     break;
      case '4' :  clrscr();
      SearchApplicants();
     break;
      case '5' : break;
      case '6' : SplashScreen(4);
      default  : error(1);
     break;
    }
  } while (choice!='5');
}
void Employer::ViewProfile()
{
  char a;
  ::ViewProfile();
  cout<<"\n\t\t\tCompany :"<<Company;
  textcolor(12);
  cout<<"\n\n\n\t\t\t1.Edit Profile\n\t\t\t2.Go back\n\n\t\t\tPlease enter your option : ";
  DrawBorder(20,3,55,24,0);
  gotoxy(29,22);
  cin>>a;
  switch (a) {
    case '1': clrscr();
        EditProfile();
        break;
    case '2': break;
  }
}
void Employer::EditProfile() 
{
     ::EditProfile();
      DrawBorder(25,8,59,16,0);
      clrscr();
      gotoxy(24,11);
      cout<<"Company : ";
      cin>>Company;
      cin.ignore();
     
}
/*-----------------------------------------------------------------*/
       //Initialization Function
/*-----------------------------------------------------------------*/
void init()
{
  fstream file;

  file.open("Admin.DAT",ios::binary|ios::out);
  for(i=0; i<AdminSize; i++)
    file.read((char *) adm[i], sizeof(adm[i]) );
  file.close();

  file.open("Applicant.DAT",ios::binary|ios::out);
  for(i=0; i<ApplicantSize; i++)
    file.read((char *) apt[i], sizeof(apt[i]) );
  file.close();
  
  file.open("Employer.DAT",ios::binary|ios::out);
  for(i=0; i<EmployerSize; i++)
    file.read((char *) emp[i], sizeof(emp[i]) );
  file.close();
}
/*-----------------------------------------------------------------*/
			 //Welcome Screen
/*-----------------------------------------------------------------*/
int WelcomeScreen()
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
	case '1' : 
           AdminPortal();
		   break;
	case '2' : 
           ApplicantPortal();
		   break;
	case '3' : 
           EmployerPortal();
		   break;
	case '4' : 
           SplashScreen(4);
		   break;
	default :  error(0);
		   break;
     }
  return 0;
}
//-----------Splash screens------------//
void SplashScreen (int ScreenType, char* FName = NULL)
{
   switch (ScreenType)
   {
     case 1 : 
        DrawBorder(26,3,53,7,1);
	      gotoxy(31,5);
	      textcolor(12);
	      cprintf("Welcome ");
	      textcolor(7);
	      cout<<FName;
	      break;
     case 2 : 
        clrscr();
    		DrawBorder(16,7,63,16,1);
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
/*-----------------------------------------------------------------*/
		       //Border Drawer Tool
/*-----------------------------------------------------------------*/
/* Uses x-y co-ordinates of top-left(tl_x and tl_y) and bottom-right
   (br_x and br_y) to draw a white border. Border drawing can be
   static (by passing 0 to animate parameter), or be animated
   (by passing 1 to animate parameter).
*/
void DrawBorder(int tl_x, int tl_y, int br_x, int br_y,int animate)
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
			 //Menus ( Portals )
/*-----------------------------------------------------------------*/
//-----------Admin Portal Menu------------//
int AdminPortal()
{
  int AccNo;
  char choice;
  clrscr();
  gotoxy(29,10);
  textcolor(12);
  cprintf("Please enter your option");
  textcolor(7);
  cout<<"\n\t[1] Proceed to login\n\t[2] Go Back";
  DrawBorder(6,8,78,15,0);
  gotoxy(29,13);
  cin>>choice;
  switch (choice)
  {
    case '1': 
          clrscr();
	      AccNo=Login(1);
	      ADM[AccNo].Menu();
	      break;
    case '2': 
          break;
    default : 
          clrscr();
	      error(1);
	      break;
  }
  return 0;
}
//-----------Applicant Portal Menu------------//
int ApplicantPortal()
{
  int AccNo;
  char choice;
  clrscr();
  gotoxy(29,10);
  textcolor(12);
  cprintf("Please enter your option");
  textcolor(7);
  cout<<"\n\t[1] Proceed to login\n\t[2] Go Back";
  DrawBorder(6,8,78,15,0);
  gotoxy(29,13);
  cin>>choice;
  switch (choice)
  {
    case '1': 
          clrscr();
	      AccNo=Login(2);
	      APL[AccNo].Menu();
	      break;
    case '2': 
          break;
    default : 
          clrscr();
	      error(1);
	      break;
  }
  return 0;
}
//-----------Employer Portal Menu------------//
int EmployerPortal()
{
  int AccNo;
  char choice;
  clrscr();
  gotoxy(29,10);
  textcolor(12);
  cprintf("Please enter your option");
  textcolor(7);
  cout<<"\n\t[1] Proceed to login\n\t[2] Go Back";
  DrawBorder(6,8,78,15,0);
  gotoxy(29,13);
  cin>>choice;
  switch (choice)
  {
    case '1': 
          clrscr();
	      AccNo=Login(3);
	      EMP[AccNo].Menu();
	      break;
    case '2': 
          break;
    default : 
          clrscr();
	      error(1);
	      break;
  }
  return 0;
}

/*-----------------------------------------------------------------*/
			  //Login System
/*-----------------------------------------------------------------*/
int Login (int AccType)
{
   int attempt_count=0,login_state=0,i,j;
   char *u,*p;
  
   do
   {
      delay(800);
      clrscr();   
      DrawBorder(23,8,59,14,0);
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
      if (AccType ==1)
        for(i=0;i<AdminSize;i++)
        {
          if(ADM[i].Validate(u,p))
                          return i;
        }
      else if (AccType==2)
         for(i=0; i<ApplicantSize ; i++)
         {
           if(APL[i].Validate(u,p))
                          return i;
         }
      else if (AccType==3)
         for(i=0; i<EmployerSize ; i++)
         {
           if(EMP[i].Validate(u,p))
                          return i;
         }     
      attempt_count++;
      //-------Too many tries-------//
      if(attempt_count>3)
      {
	    delay(200);
	    clrscr();
	    textcolor(12);
        gotoxy(13,5);
        cprintf("Login limit reached. Exiting to Portal.");
      }
   } while (login_state==0);
    
  
  return 0;
}

/*-----------------------------------------------------------------*/
			      //Applicant List
/*-----------------------------------------------------------------*/
void ListApplicants()
{
  char *Industries[3];
  int i,j;
  clrscr();
  gotoxy(28,3);
  textcolor(12);
  cprintf("Full list of applicants :");
  textcolor(7);
  for(i=0;i<10;i++)
  {
     Industries=getIndustries();
     delay(900);
     cout<<"\n\n\t\t_________________________________________________\n\t\t\t";
      textcolor(12);
      cprintf("Name : ");
      textcolor(7);
      cout<<APL[i].getFName()<<" "<<APL[i].getLName()<<"\n\t";
      textcolor(12);
      cprintf("Industries : ");
      textcolor(7);
	  for(j=0; j<3; j++)
        	  cout<<"\t* "<<Industries[j];
  }
  cout<<"\n\n\t\t_________________________________________________\n\n";
  textcolor(12);
  cprintf("Press any key to go back");
  textcolor(7);
  getch();
}
/*-----------------------------------------------------------------*/
			      //Applicant Search
/*-----------------------------------------------------------------*/
void SearchApplicants()
{
  int i,j,k,flag=0;
  char *Term,*Industries[3];
  clrscr();
  DrawBorder(21,3,63,7,0);
  gotoxy(23,5);
  textcolor(12);
  cprintf("Enter Industry to be searched for : ");
  textcolor(7);
  cin>>Term;
  cin.ignore();
  for(i=0;i<ApplicantSize;i++)
  {
    Industries=APL[i].getIndustries();
    for(j=0;j<3;j++)
    {
       if(!strcmp(Term,Industries[j]))
       {
    	  delay(900);
    	  cout<<"\n\n\t\t_________________________________________________\n\t\t\t";
    	  textcolor(12);
    	  cprintf("Name : ");
    	  textcolor(7);
    	  cout<<APL[i].getFName()<<" "<<APL[i].getLName()<<"\n\t";
    	  textcolor(12);
    	  cprintf("Industries : ");
    	  textcolor(7);
    	  for(k=0; k<3; k++)
        	  cout<<"\t* "<<Industries[k];
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
			      //Employer List
/*-----------------------------------------------------------------*/
void ListEmployers()
{
  int i;
  clrscr();
  gotoxy(28,8);
  textcolor(12);
  cprintf("Full list of employers :");
  textcolor(7);
  for(i=0;i<EmployerSize;i++)
  {
     delay(900);
     cout<<"\n\n\t\t_________________________________________________\n\n\t\t\t";
     textcolor(12);
     cprintf("Name : ");
     textcolor(7);
     cout<<EMP[i].getFName()<<" "<<EMP[i].getLName()<<"\n\t\t\t\t";
     textcolor(12);
     cprintf("Company : ");
     textcolor(7);
     cout<<EMP[i].getCompany();
  }
  cout<<"\n\n\t\t_________________________________________________\n\n";
  textcolor(12);
  cprintf("Press any key to go back");
  textcolor(7);
  getch();
}
/*-----------------------------------------------------------------*/
			      //Employer Search
/*-----------------------------------------------------------------*/
void SearchEmployers()
{
  int i,flag=0;
  char choice,*Term;
  clrscr();
  DrawBorder(21,3,63,7,0);
  gotoxy(23,5);
  textcolor(12);
  cprintf("Enter Company to be searched for : ");
  textcolor(7);
  cin>>Term;
  cin.ignore();
  for(i=0;i<EmployerSize;i++)
  {
    if(!strcmp(Term,EMP[i].getCompany()))
    {
      delay(900);
      cout<<"\n\n\t\t_________________________________________________\n\t\t\t";
      textcolor(12);
      cprintf("Name : ");
      textcolor(7);
      cout<<EMP[i].getFName()<<" "<<EMP[i].getLName()<<"\n\t\t\t\t";
      textcolor(12);
      cprintf("Company : ");
      textcolor(7);
      cout<<EMP[i].getCompany();
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
int error(int EVal)
{
  clrscr();
  gotoxy(10,13);
  switch (EVal)
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
