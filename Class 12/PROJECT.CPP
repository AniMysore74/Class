//////////////////////////////////////////////////////////////////
//                   INTELLISOFT Job Portal                     //
//------------/////////////////////////////////-----------------//
//               Aniruddha Mysore | Class XII                   //
//////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////
//                HEADER FILES                   //
///////////////////////////////////////////////////
#include<fstream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
///////////////////////////////////////////////////
//		                CLASSES                 	 //
///////////////////////////////////////////////////
/*-----------------------------------------------*/
/*	                 Base Class                  */
/*-----------------------------------------------*/
class Account
{
	private:
		void UsernameCreation();
		void PasswordCreation();
	
  protected:
		char *Username, *Password, *FName,*LName;
		double ID;
	
  public:
    Account(){}
    Account(char *, char *, char *, char *, double);
		int Validate(char *, char *);
		void EditProfile();
		void ViewProfile();
		// Accessor Functions
		char* getFName()
		{
      return FName;
    }
    char* getLName()
    {
      return LName;
    }
    double getID()
    {
      return ID;
    }
};
/*-----------------------------------------------*/
/*	              Derived Class                  */
/*-----------------------------------------------*/
class Admin : public Account
{
	public:
    Admin():Account(){}
    Admin(char *U, char *P, char *F, char *L, double ID):Account(U,P,F,L,ID){}
		void Menu();
};
class Applicant : public Account
{
  private:
		char *Industries[3];
	
  public:
    Applicant():Account(){}
    Applicant(char *U, char *P, char *F, char *L, double ID, char **I):Account(U,P,F,L,ID)
    {
    	Industries[0]=I[0];
    	Industries[1]=I[1];
    	Industries[2]=I[2];
    }
    void Menu();
		void EditProfile();
		void ViewProfile();
		char **getIndustries()
		{
      return Industries;
    }
};
class Employer : public Account
{
  private:
		char *Company;
	public:
		Employer():Account(){;}
    Employer::Employer(char *U, char *P, char *F, char *L, double ID, char *C):Account(U,P,F,L,ID)
    {
      Company=C;
    }
    void Menu();
		void EditProfile();
		void ViewProfile();
		char *getCompany()
		{     
      return Company;
    }
};
///////////////////////////////////////////////////
//          FUNCTION PROTOTYPES                  //
///////////////////////////////////////////////////
//Initialization
void init();
//Portals
int WelcomeScreen();
int AdminPortal();
int EmployerPortal();
int ApplicantPortal();

//User functions
void AddEmployer();
void AddApplicant();
void ListEmployers(); 
void ListApplicants(); 
void SearchEmployers(); 
void SearchApplicants();
void DeleteEmployer();
void DeleteApplicant();
// Login Funcion 
long Login(int);

// Display functions
int error(int);
void SplashScreen(int,char*);
void DrawBorder(int,int,int,int,int);  
///////////////////////////////////////////////////
//                     MAIN                      //
///////////////////////////////////////////////////
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
   } while(1);
   return 0;
}
//////////////////////////////////////////////////////
//                METHODS OF CLASS 'ACCOUNT'        //
/////////////////////////////////////////////////////
Account::Account(char *U, char *P, char *F, char *L, double ID)
{
  Username = U;
  Password = P;
  FName = F;
  LName = L;
  ID = ID;
}
void Account::ViewProfile() {
  clrscr();
  gotoxy(29,5);
  textcolor(12);
  cprintf("Profile details : ");
  textcolor(7);
  cout<<"\n\n\n\t\t\tName : "<<this->FName<<" "<<getLName();
  cout<<"\n\t\t\tID :"<<ID;
  cout<<"\n\t\t\tUsername :"<<*Username;
}
void Account::EditProfile()
{
  clrscr();
  DrawBorder(25,8,59,16,0);
  gotoxy(24,11);
  cout<<"Please enter your first name : ";
  cin>>FName;
  cin.ignore();
  gotoxy(24,12);
  cout<<"Please enter your last name : ";
  cin>>LName;
  cin.ignore();

  clrscr();
  DrawBorder(25,8,59,16,0);
  gotoxy(24,11);
  cout<<"ID : ";
  cin>>ID;
  gotoxy(24,12);
  cout<<"Username : ";
  cin>>Username;
  gotoxy(24,13);
  cout<<"Enter new Password : ";
  cin>>Password;
  cin.ignore();
}
int Account::Validate(char *U, char *P)
{
	 if(!strcmp(U,Username) && !strcmp(P,Password))
		 return 1;
	 else
		 return 0;
}
//////////////////////////////////////////////////////
//              METHODS OF CLASS 'ADMIN'            //
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
    cout<<"\n\n\t\t[1] View applicants list\n\t\t[2] Applicant search\n\t\t[3] View employers\n\t\t[4] Employer search\n\t\t[5] Delete Applicant \n\t\t[6] Delete Employer \n\t\t[7] Logout \n\t\t[8] Exit";
    DrawBorder(15,2,59,20,0);
    gotoxy(29,15);
    cin>>choice;
    switch (choice)
    {
      case '1' : 
        clrscr();
        ListApplicants();
        break;
      case '2' : 
        clrscr();
        SearchApplicants();
        break;
      case '3' : 
        clrscr();
        ListEmployers();
        break;
      case '4' :  
        clrscr();
        SearchEmployers();
        break;
      case '5' :
        DeleteApplicant();
        break;
      case '6' :
        DeleteEmployer();
        break;
      case '7' :  
        break;
      case '8' : 
        SplashScreen(2,NULL);
      default  : 
        error(1);
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
      case '1': 
        clrscr();
        ViewProfile();
        break;
      case '2': 
        cout<<"Taking you to profle ........";
        delay(500);
        clrscr();
        ViewProfile();
      case '3': 
        clrscr();
        ListEmployers();
        break;
      case '4': 
        break;
      case '5': 
        SplashScreen(2,NULL);
      default : 
        error(1);
    }
  } while(choice!='4');
}
void Applicant::ViewProfile()
{
  char a;
  Account::ViewProfile();
  cout<<"\n\t\t\tIndustry :";
  for (int i=0;i<3;i++)
  {
    cout<<"\n\t\t\t\t-"<<Industries[i];
  }
  textcolor(12);
  cout<<"\n\n\n\t\t\t1.Edit Profile\n\t\t\t2.Go back\n\n\t\t\tPlease enter your option : ";
  DrawBorder(20,3,55,24,0);
  gotoxy(29,22);
  cin>>a;
  switch (a) {
    case '1': 
        clrscr();
        EditProfile();
        break;
    case '2': break;
  }
}
void Applicant::EditProfile() 
{
    Account::EditProfile();
    DrawBorder(25,8,59,16,0);
    for(int i=0; i<3; i++)
    {
      cout<<"Industry "<<i+1<<" : ";
      gotoxy(27,11+i);        
	    cin>>Industries[i];
      cin.ignore();
    }

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
      case '1' : 
        clrscr();
        ViewProfile();
        break;
      case '2' : 
        cout<<"Taking you to profile....";
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
      case '5' : 
        break;
      case '6' : 
        SplashScreen(2,NULL);
      default  : 
        error(1);
       break;
    }
  } while (choice!='5');
}
void Employer::ViewProfile()
{
  char a;
  Account::ViewProfile();
  cout<<"\n\t\t\tCompany :"<<Company;
  textcolor(12);
  cout<<"\n\n\n\t\t\t1.Edit Profile\n\t\t\t2.Go back\n\n\t\t\tPlease enter your option : ";
  DrawBorder(20,3,55,24,0);
  gotoxy(29,22);
  cin>>a;
  switch (a) {
    case '1': 
      clrscr();
      EditProfile();
      break;
    case '2': 
      break;
  }
}
void Employer::EditProfile()
{
  Account::EditProfile();
  DrawBorder(25,8,59,16,0);
  clrscr();
  gotoxy(24,11);
  cout<<"Company : ";
  cin>>Company;
  cin.ignore();    
}
/*-----------------------------------------------*/
/*            Initialization Function            */
/*-----------------------------------------------*/
void init()
{
  fstream file;
  file.open("Admin.DAT",ios::binary|ios::app);
  Admin ADM("admin","pass","Aniruddha","Mysore",101);
  file.write((char *)&ADM, sizeof(ADM) );
  file.close();

  file.open("Apl.DAT",ios::binary|ios::app);
  
    char **I1 = new char*("IT","software","media"),
      **I2 = new char*("IT","hardware","manufacturing"),
      **I3 = new char*("IT","software","hardware"),
      **I4 = new char*("education","e-learning","consultancy"),
      **I5 = new char*("telecom","testing","IT"),
      **I6 = new char*("analytics","accountancy","BPO"),
      **I7 = new char*("banking","insurance","analytics"),
      **I8 = new char*("testing","software","IT"),
      **I9 = new char*("media","advertising","PR"),
      **I10 = new char*("production","manufacturing","design");

    Applicant 
      APL1("applicant1","pass","Mukta","Jain",201,I1),
      APL2("applicant2","pass","Sanjaya","Kaur",202,I2),
      APL3("applicant3","pass","Vijay","Korrapati",203,I3),
      APL4("applicant4","pass","Pranav","Sharma",204,I4),
      APL5("applicant5","pass","Roshan","Bannerji",205,I5),
      APL6("applicant6","pass","Sanjeet","Singh",206,I6),
      APL7("applicant7","pass","Kailash","Mullur",207,I7),
      APL8("applicant8","pass","Kishori","Avninder",208,I8),
      APL9("applicant9","pass","Bhaskara","Nibhanupudi",209,I9),
      APL10("applicant10","pass","Dipali","Chaudhary",210,I10);
    file.write((char *)&APL1, sizeof(APL1) );
    file.write((char *)&APL2, sizeof(APL2) );
    file.write((char *)&APL3, sizeof(APL3) );
    file.write((char *)&APL4, sizeof(APL4) );
    file.write((char *)&APL5, sizeof(APL5) );
    file.write((char *)&APL6, sizeof(APL6) );
    file.write((char *)&APL7, sizeof(APL7) );
    file.write((char *)&APL8, sizeof(APL8) );
    file.write((char *)&APL9, sizeof(APL9) );
    file.write((char *)&APL10, sizeof(APL10) );

    delete I1,I2,I3,I4,I5,I6,I7,I8,I9,I10;
  file.close();

  file.open("Emp.DAT",ios::binary|ios::app);
    Employer
      EMP1("employer1","pass","Larry","Page",301,"Google"),
      EMP2("employer2","pass","Mark","Zuckerburg",302,"Facebook"),
      EMP3("employer3","pass","Bill","Gates",303,"Microsoft"),
      EMP4("employer4","pass","Jeff","Bezos",304,"Amazon"),
      EMP5("employer5","pass","Jack","Dorsey",305,"Twitter");
    file.write((char *)&EMP1, sizeof(EMP1) );
    file.write((char *)&EMP2, sizeof(EMP2) );
    file.write((char *)&EMP3, sizeof(EMP3) );
    file.write((char *)&EMP4, sizeof(EMP4) );
    file.write((char *)&EMP5, sizeof(EMP5) );
  file.close();
}
///////////////////////////////////////////////////
//                 DISPLAY FUNCTIONS             //
///////////////////////////////////////////////////
/*-----------------------------------------------*/
/*              Welcome Screen                   */
/*-----------------------------------------------*/
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
      SplashScreen(2,NULL);
      break;
  	default :  
      error(1);
      break;
  }
  return 0;
}
//-----------Splash screens------------//
void SplashScreen (int ScreenType, char *FName)
{
  switch (ScreenType)
  {
    case 1 : 
      clrscr();
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
    	cprintf("Class 12-B | Roll No. 23");
    	getch();
    	exit(0);
  }
}
/*-----------------------------------------------*/
/*  		       //Border Drawer Tool              */
/*-----------------------------------------------*/
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
///////////////////////////////////////////////////
//                  PORTAL MENUS                 //
///////////////////////////////////////////////////
//-----------Admin Portal Menu------------//
int AdminPortal()
{       
  Admin A;
  fstream file("Admin.DAT",ios::in|ios::binary);
  long Pos;
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
      Pos=Login(1);
      if(Pos!=-1)
      {
        file.seekg(Pos);
        file.read((char *) &A, sizeof(A));
        A.Menu();
        file.seekg(-Pos,ios::cur);
        file.write((char *) &A, sizeof(A));
      }
      break;
    case '2':
  	  break;
    default :
      clrscr();
      error(1);
      break;
  }
  file.close();
  return 0;
}
//-----------Applicant Portal Menu------------//
int ApplicantPortal()
{
  Applicant A;
  fstream file("Apl.DAT",ios::in|ios::app|ios::binary);
  long Pos;
  char choice;
  clrscr();
  gotoxy(29,10);
  textcolor(12);
  cprintf("Please enter your option");
  textcolor(7);
  cout<<"\n\t[1] Proceed to login\n\t[2] Create New Applicant\n\t[3] Go Back";
  DrawBorder(6,8,78,15,0);
  gotoxy(29,13);
  cin>>choice;
  switch (choice)
  {
    case '1':
  	  clrscr();
      Pos=Login(2);
  	  if(Pos!=-1)
  	  {
  	    file.seekg(Pos);
        file.read((char *) &A, sizeof(A));
        A.Menu();
        file.seekg(-Pos,ios::cur);
    	  file.write((char *) &A, sizeof(A));
  	  }
      break;
    case '2':
      AddApplicant();
      break;
    case '3':
  	  break;
    default :
  	  clrscr();
      error(1);
      break;
  }
  file.close();
  return 0;
}
//-----------Employer Portal Menu------------//
int EmployerPortal()
{
  Employer E;
  fstream file("Apl.DAT",ios::in|ios::binary);
  long Pos;
  char choice;
  clrscr();
  gotoxy(29,10);
  textcolor(12);
  cprintf("Please enter your option");
  textcolor(7);
  cout<<"\n\t[1] Proceed to login\n\t[2] Create New Employer \n\t[3] Go Back";
  DrawBorder(6,8,78,15,0);
  gotoxy(29,13);
  cin>>choice;
  switch (choice)
  {
    case '1':
  	  clrscr();
  		Pos=Login(3);
  	  if(Pos!=-1)
      {
    	  file.seekg(Pos);
        file.read((char *) &E, sizeof(E));
        E.Menu();
        file.seekg(-Pos,ios::cur);
    	  file.write((char *) &E, sizeof(E));
      }
      break;
    case 2:
      AddEmployer();
      break;
    case '3': 
      break;
    default : 
      clrscr();
      error(1);
      break;
  }
  file.close();
  return 0;
}
/*-----------------------------------------------*/
/*                Error Handling                 */
/*-----------------------------------------------*/
int error(int EVal)
{
  clrscr();
  gotoxy(10,13);
  switch (EVal)
  {
    case -1 : 
      cout<<"Session Expired. Please restart the program. ";
      delay(500);
      exit(0);
      break;
    case 0 : 
      cout<<"Unknown Error. Please restart the program. ";
      delay(500);
      exit(0);
      break;
    case 1 : 
      cout<<"Input error. Please enter an appropriate response";
      delay(500);
      break;
  }
  return 0;
}
///////////////////////////////////////////////////
//                  LOGIN SYSTEM                 //
///////////////////////////////////////////////////
long Login (int AccType)
{
  fstream file;
  Admin ADM;
  Applicant APL;
  Employer EMP;
  int attempt_count=0,i,j,k=0;
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
    switch (AccType)
    {
      case 1:
    	  file.open("Admin.DAT",ios::in|ios::binary);
        while(!file.eof())
        {
          file.read((char *) &ADM, sizeof(ADM));
          if(ADM.Validate(u,p))
          {
            file.seekg(-sizeof(ADM),ios::cur);
            return file.tellp();
          }
        }
        file.close();
        break;  
      case 2:
        file.open("Apl.DAT",ios::in|ios::binary);
        while(!file.eof())
        {
          file.read((char *) &APL, sizeof(APL));
          if(APL.Validate(u,p))
      		{
      	    file.seekg(-sizeof(APL),ios::cur);
      	    return file.tellp();
      	  }
        }
        file.close();
        break;
      case 3:
    	  file.open("Emp.DAT",ios::in|ios::binary);
    	  while(!file.eof())
    	  {
      	  file.read((char *) &EMP, sizeof(EMP));
    	    if(EMP.Validate(u,p))
    			{
      	    file.seekg(-sizeof(EMP),ios::cur);
      	    return file.tellp();
    	    }
    	  }
    	  file.close();
        break;
    }
    //-------Counter for number of password attempts-------//
    attempt_count++;
    if(attempt_count>3)
    {
      clrscr();
      textcolor(12);
      gotoxy(13,5);
      cprintf("Login limit reached. Exiting to Portal.");
      delay(200);
      break;
    }
  } while (1);
  return -1;
}
///////////////////////////////////////////////////
//            FILE HANDLING FUNCTIONS            //
///////////////////////////////////////////////////
/*-----------------------------------------------*/
/*                Add Applicant                  */
/*-----------------------------------------------*/
void AddApplicant()
{
  Applicant A;
  fstream file("Apl.DAT",ios::app|ios::binary);
  A.EditProfile();
  file.write((char*)&A,sizeof(A));
  file.close();
}
/*-----------------------------------------------*/
/*			         Applicant List                  */
/*-----------------------------------------------*/
void ListApplicants()
{
  Applicant A;
  fstream file("Apl.DAT",ios::in|ios::binary);
  char **Industries;
  int i;
  clrscr();
  gotoxy(28,3);
  textcolor(12);
  cprintf("Full list of applicants :");
  textcolor(7);
  while(!file.eof())
  {
    file.read((char *)&A, sizeof(A));
    Industries=A.getIndustries();
    delay(900);
    cout<<"\n\n\t\t_________________________________________________\n\t\t\t";
    textcolor(12);
    cprintf("Name : ");
    textcolor(7);
    cout<<A.getFName()<<" "<<A.getLName()<<"\n\t";
    textcolor(12);
    cprintf("Industries : ");
    textcolor(7);
    for(i=0; i<3; i++)
      cout<<"\t* "<<*Industries[i];
  }
  file.close();
  cout<<"\n\n\t\t_________________________________________________\n\n";
  textcolor(12);
  cprintf("Press any key to go back");
  textcolor(7);
  getch();
}
/*-----------------------------------------------*/
/*			         Applicant Search                */
/*-----------------------------------------------*/
void SearchApplicants()
{
  Applicant A;
  fstream file("Apl.DAT",ios::in|ios::binary);
  int i,j,flag=0;
  char *Term,**Industries;
  clrscr();
  DrawBorder(21,3,63,7,0);
  gotoxy(23,5);
  textcolor(12);
  cprintf("Enter Industry to be searched for : ");
  textcolor(7);
  cin>>Term;
  cin.ignore();
  while(!file.eof())
  {
    file.read((char *)&A, sizeof(A));
    Industries=A.getIndustries();
    for(i=0;i<3;i++)
    {
    	if(!strcmp(Term,Industries[i]))
    	{
    	  delay(900);
    	  cout<<"\n\n\t\t_________________________________________________\n\t\t\t";
    	  textcolor(12);
    	  cprintf("Name : ");
    	  textcolor(7);
    	  cout<<A.getFName()<<" "<<A.getLName()<<"\n\t";
    	  textcolor(12);
    	  cprintf("Industries : ");
    	  textcolor(7);
    	  for(j=0; j<3; j++)
    		  cout<<"\t* "<<*Industries[j];
    	  flag++;
    	}
    }
  }
  file.close();
  if(!flag)
    cout<<"\n\n\tNo Matches";
  cout<<"\n\n\t\t_________________________________________________\n\n";
  textcolor(12);
  cprintf("Press any key to go back");
  textcolor(7);
  getch();
}
/*-----------------------------------------------*/
/*      	       Delete Applicant                */
/*-----------------------------------------------*/
void DeleteApplicant()
{
  int flag=0;
  long Pos;
  char choice;
  double ID;
  Applicant A;
  fstream file("Apl.DAT",ios::in|ios::app|ios::binary);
  clrscr();
  cout<<"Enter the ID \nof the applicant you wish to delete : ";
  cin>>ID;

  file.seekg(0,ios::beg);
  while(!file.eof())
  {
    cout<<"Searching through Records . . .";
    file.read((char*)&A,sizeof(A));
    if(A.getID()==ID)
    {
      delay(1000);
      clrscr();
      cout<<"\n\n\t\t";
      textcolor(12);
      cprintf("Name : ");
      textcolor(7);
      cout<<A.getFName()<<" "<<A.getLName()<<"\n\t";
      cout<<"\n\n\t\t=============================\n\n\t\tDelete?(Y/N)";
      cin>>choice;
      if(choice=='y'|choice=='Y')
      {
      	file.seekg(-sizeof(A),ios::cur);
      	Pos=file.tellg();
      	flag=1;
      	break;
      }
    }
  }
  if(flag)
  {
    file.seekg(0,ios::beg);
    fstream temp("Temp.DAT",ios::app|ios::binary);
    while(!file.eof())
    {
      if(Pos==file.tellg())
	      continue;
      file.read((char*)&A,sizeof(A));
      temp.write((char*)&A,sizeof(A));
    }
    file.close();
    temp.close();
    remove("Apl.DAT");
    rename("Temp.DAT","Apl.DAT");
  }
}
/*-----------------------------------------------*/
/*	               Add Employer                  */
/*-----------------------------------------------*/
void AddEmployer()
{
  Employer E;
  fstream file("Emp.DAT",ios::app|ios::binary);
  E.EditProfile();
  file.write((char*)&E,sizeof(E));
  file.close();
}
/*-----------------------------------------------*/
/*  			         Employer List                 */
/*-----------------------------------------------*/
void ListEmployers()
{
  Employer E;
  fstream file("Emp.DAT",ios::in|ios::binary);
  clrscr();
  gotoxy(28,8);
  textcolor(12);
  cprintf("Full list of employers :");
  textcolor(7);
  while(!file.eof())
  {
    file.read((char *)&E, sizeof(E));
    delay(900);
    cout<<"\n\n\t\t_________________________________________________\n\n\t\t\t";
    textcolor(12);
    cprintf("Name : ");
    textcolor(7);
    cout<<E.getFName()<<" "<<E.getLName()<<"\n\t\t\t\t";
    textcolor(12);
    cprintf("Company : ");
    textcolor(7);
    cout<<E.getCompany();
  }
  file.close();
  cout<<"\n\n\t\t_________________________________________________\n\n";
  textcolor(12);
  cprintf("Press any key to go back");
  textcolor(7);
  getch();
}
/*-----------------------------------------------*/
/*			          Employer Search                */
/*-----------------------------------------------*/
void SearchEmployers()
{
  Employer E;
  fstream file("Emp.DAT",ios::in|ios::binary);
  int flag=0;
  char choice,*Term;
  clrscr();
  DrawBorder(21,3,63,7,0);
  gotoxy(23,5);
  textcolor(12);
  cprintf("Enter Company to be searched for : ");
  textcolor(7);
  cin>>Term;
  cin.ignore();
  while(!file.eof())
  {
    file.read((char *)&E, sizeof(E));
    if(!strcmp(Term,E.getCompany()))
    {
      delay(900);
      cout<<"\n\n\t\t_________________________________________________\n\t\t\t";
      textcolor(12);
      cprintf("Name : ");
      textcolor(7);
      cout<<E.getFName()<<" "<<E.getLName()<<"\n\t\t\t\t";
      textcolor(12);
      cprintf("Company : ");
      textcolor(7);
      cout<<E.getCompany();
      flag++;
    }
  }
  file.close();
  if(!flag)
    cout<<"\n\n\No Matches";
  cout<<"\n\n\t\t_________________________________________________\n\n";
  textcolor(12);
  cprintf("Press any key to go back");
  textcolor(7);
  getch();
}
/*-----------------------------------------------*/
/*	             Delete Employer                 */
/*-----------------------------------------------*/
void DeleteEmployer()
{
  int flag=0;
  long Pos;
  char choice;
  double ID;
  Employer E;
  fstream file("Emp.DAT",ios::in|ios::app|ios::binary);
  clrscr();
  cout<<"Enter the ID \nof the employer you wish to delete : ";
  cin>>ID;

  file.seekg(0,ios::beg);
  while(!file.eof())
  {
    cout<<"Searching through Records . . .";
    file.read((char*)&E,sizeof(E));
    if(E.getID()==ID)
    {
      delay(1000);
      clrscr();
      cout<<"\n\n\t\t";
      textcolor(12);
      cprintf("Name : ");
      textcolor(7);
      cout<<E.getFName()<<" "<<E.getLName()<<"\n\t";
      cout<<"\n\n\t\t=============================\n\n\t\tDelete?(Y/N)";
      cin>>choice;
      if(choice=='y'|choice=='Y')
      {
        file.seekg(-sizeof(E),ios::cur);
        Pos=file.tellg();
        flag=1;
        break;
      }
    }
  }
  if(flag)
  {
    file.seekg(0,ios::beg);
    fstream temp("Temp.DAT",ios::app|ios::binary);
    while(!file.eof())
    {
      if(Pos==file.tellg())
    	continue;
      file.read((char*)&E,sizeof(E));
      temp.write((char*)&E,sizeof(E));
    }
    file.close();
    temp.close();
    remove("Emp.DAT");
    rename("Temp.DAT","Emp.DAT");
  }
}