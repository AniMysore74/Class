//////////////////////////////////////////////////////////////////
////////////////////INTELLISOFT Job Portal////////////////////////
//////////////////////////////////////////////////////////////////

/*-----------------------------------------------------------------*/
			 //Header files
/*-----------------------------------------------------------------*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>

struct applicant_data
{
  char *Username,*Password,*FName,*LName;
  double ID;
  char *Industry[3];
};
struct admin_data
{
  char *Username,*Password,*FName,*LName;
  double ID;
};
struct employer_data
{
  char *Username,*Password,*FName,*LName;
  double ID;
  char *Company;
};
/*-----------------------------------------------------------------*/
			      //Data
/*-----------------------------------------------------------------*/

//------Administrator data------//

admin_data adm[1] =
{
      {"admin","pass","Aniruddha","Mysore",101}
};
//------Applicants' data------//

applicant_data apt[10] =
{
      {"applicant1","pass","Mukta","Jain",201,{"IT","software","media"}},
      {"applicant2","pass","Sanjaya","Kaur",202,{"media","advertising","PR"}},
      {"applicant3","pass","Vijay","Korrapati",203,{"IT","hardware","manufacturing"}},
      {"applicant4","pass","Pranav","Sharma",204,{"IT","software","hardware"}},
      {"applicant5","pass","Roshan","Bannerji",205,{"education","e-learning","consultancy"}},
      {"applicant6","pass","Sanjeet","Singh",206,{"telecom","testing","IT"}},
      {"applicant7","pass","Kailash","Mullur",207,{"analytics","accountancy","BPO"}},
      {"applicant8","pass","Kishori","Avninder",208,{"banking","insurance","analytics"}},
      {"applicant9","pass","Bhaskara","Nibhanupudi",209,{"testing","software","IT"}},
      {"applicant10","pass","Dipali","Chaudhary",210,{"production","manufacturing","design"}},

};

//------Employers' data------//

employer_data emp[5] =
{
     {"employer1","pass","Larry","Page",301,"Google"},
     {"employer2","pass","Mark","Zuckerburg",302,"Facebook"},
     {"employer3","pass","Bill","Gates",303,"Microsoft"},
     {"employer4","pass","Jeff","Bezos",304,"Amazon"},
     {"employer5","pass","Jack","Dorsey",305,"Twitter"}
};
/*-----------------------------------------------------------------*/
			      // Main
/*-----------------------------------------------------------------*/
main ()
{
  int i;
  fstream file;

  file.open("Admin.DAT",ios::binary|ios::app);
  for(i=0; i<1; i++)
    file.write((char *)&adm[i], sizeof(adm[i]) );
  file.close();

  file.open("Applicant.DAT",ios::binary|ios::app);
  for(i=0; i<10; i++)
    file.write((char *)&apt[i], sizeof(apt[i]) );
  file.close();

  file.open("Employer.DAT",ios::binary|ios::app);
  for(i=0; i<5; i++)
    file.write((char *)&emp[i], sizeof(emp[i]) );
  file.close();

}
