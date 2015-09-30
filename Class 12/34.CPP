#include<iostream.h>
#include<conio.h>
#include<process.h>
void Add(int [][10], int, int,  int [][10], int, int, int [][10]);
void Multiply(int [][10], int, int,  int [][10], int, int, int [][10]);

int main()
{
    int A[10][10],B[10][10],C[10][10],M,N,P,Q;
    char ch;
    cout<<"Enter size of Matrix 1 : ";
    cin>>M>>N;
    cout<<"\nEnter Elements of Matrix 1: \n";
    for(int i=0; i<M; i++)
	    for(int j=0; j<N; j++)
		    cin>>A[i][j];
    cout<<"\nEnter size of Matrix 2 : ";
    cin>>P>>Q;
    cout<<"\nEnter Elements of Matrix 2: \n";
    for(i=0; i<P; i++)
	    for(j=0; j<Q; j++)
		    cin>>B[i][j];


    while(1)
    {
	    cout<<"\t\t**********MENU**********\n\t**********[1]Addition of Matrix**********\n\t**********[2]Multiplication of Matrix**********\n\t\t**********[3]EXIT**********";
	    cin>>ch;
	    switch(ch)
	    {
		      case '1':
			   Add(A,M,N,B,P,Q,C);
			   break;
		      case '2':
			   Multiply(A,M,N,B,P,Q,C);
			   break;
		      case '3':
			   exit(0);
		      default:
			      cout<<"\n\nEnter Correct choice.";
	    }
    }
}

void Add(int A[][10], int M, int N, int B[][10], int P, int Q, int C[][10])
{
     if((M==P)&&(N==Q))
     {
		     cout<<"\nThe Sum of the two Matrices is : ";
		     for(int i=0; i<M; i++)
		     {
			     for(int j=0; j<N; j++)
			     {
				     C[i][j]=A[i][j]+B[i][j];
				     cout<<C[i][j]<<" ";
			     }
			     cout<<endl;
		     }
     }
     else
	 cout<<"\n\nTHE MATRICES CANNOT BE ADDED";
}

void Multiply(int A[][10], int M, int N, int B[][10], int P, int Q, int C[][10])
{
     if(N==P)
     {
		     cout<<"\nThe Product of the two Matrices is : ";
		     for(int i=0; i<M; i++)
		     {
			     for(int j=0; j<Q; j++)
			     {
				     C[i][j]=0;
				     for(int k = 0; k<N; k++)
				     {
					      C[i][j] += (A[i][k]*B[k][j]);
                                              
                                     }
                                     cout<<C[i][j]<<" ";
                             }
                             cout<<endl;
                     }
     }
     else
         cout<<"\n\nTHE MATRICES CANNOT BE MULTIPLIED";
}