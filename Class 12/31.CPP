#include<iostream.h>
#include<conio.h>

void Merge(int [], int, int[], int, int[]);
int main()
{
    int A[50],B[50],C[50],MN=0,M,N;
    cout<<"Enter how many elements you want to create Array 1 with : ";
    cin>>M;
    cout<<"\nEnter Elements of Array 1: \n";
    for(int i=0; i<M; i++)
            cin>>A[i];
    cout<<"\nEnter how many elements you want to create Array 2 with : ";
    cin>>N;
    cout<<"\nEnter Elements of Array 2: \n";
    for(i=0; i<N; i++)
            cin>>B[i];
    MN=M+N;
    Merge(A,M,B,N,C);
    cout<<"\nThe Merged array is shown below : \n";
    for(i=0; i<MN; i++)
            cout<<C[i]<<" ";
    getch();
    return 0;
}

void Merge(int A[], int M, int B[], int N, int C[])
{
          int a,b,c;
          for(a=0, b=N-1, c=0; a<M && b>=0; )
          {
                   if(A[a] <= B[b])
                           C[c++] = A[a++];
                   else
                           C[c++] = B[b--];
          }
          if(a<M)
                 while(a<M)
                           C[c++] = A[a++];
          else
                 while(b>=0)
                           C[c++] = B[b--];
          
}
