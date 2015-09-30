#include<iostream.h>
#include<conio.h>
#iclude<process.h>
void DiagSum (int[][10], int, int);
void UppHalf (int[][10], int, int);
void LowHalf (int[][10], int, int);
void Transpose (int[][10], int, int);

int main()
{
    int A[10][10],M,N;
    char ch;
    cout<<"Enter size of Matrix : ";
    cin>>M>>N;
    cout<<"\nEnter Elements of Matrix : \n";
    for(int i=0; i<M; i++)
            for(int j=0; j<N; j++)
                    cin>>A[i][j];
    while(1)
    {
            cout<<"************************ MENU**********************************\n************************ 1. Sum of both Diagonals ******************\n************************ 2. Display Upper half of Matrix *************\n************************ 3. Display Lower Half of Matrix**************\n************************ 4. Transpose of Matrix ********************\n********************** 5. Exit ***********************************";
            cin>>ch;
            switch(ch)
            {
                      case '1':
                           DiagSum(A,M,N);
                           break;
                      case '2':
                           UppHalf(A,M,N);
                           break;
                      case '3':
                           LowHalf(A,M,N);
                           break;
                      case '4':
                           Transpose(A,M,N);
                           break;
                      case '5':
                           exit(0);
                      default:
                              cout<<"\n\nEnter Correct choice.";
            }          
    }
}

void DiagSum(int A[][10], int M, int N)
{
     int sum=0;
     for(int i=0; i<M; i++)
     {
             for(int j=0; j<N; j++)
             {
                     if(i==j)
                             sum+=A[i][j];
                     else if(j==(N-i))
                     {
                          sum+=A[i][j];
                     }
             }
     }
     cout<<"\nThe sum of both diagonals = "<<sum;
}

void UppHalf(int A[][10], int M, int N)
{
     
     cout<<"\nThe Upper half of the matrix is : \n";
     for(int i=0; i<M; i++)
     {
             for(int j=0; j<N; j++)
             {
                     if(i<j)
                             cout<<A[i][j]<<" ";
                     else
                         cout<<" ";
             }
             cout<<endl;
     }
}

void LowHalf(int A[][10], int M, int N)
{
     
     cout<<"\nThe Lower half of the matrix is : \n";
     for(int i=0; i<M; i++)
     {
             for(int j=0; j<N; j++)
             {
                     if(i>j)
                             cout<<A[i][j]<<" ";
                     else
                         cout<<" ";
             }
             cout<<endl;
     }
}

void Transpose(int A[][10], int M, int N)
{
     
     cout<<"\nThe Upper half of the matrix is : \n";
     for(int i=0; i<M; i++)
     {
             for(int j=0; j<N; j++)
             {
                     cout<<A[j][i]<<" ";
             }
             cout<<endl;
     }
}
