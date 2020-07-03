#include <stdio.h>
#include <random>
int Array(int A[100],int B);
int Eliminar(int A[100],int B);
int Compactar(int A[100]);
int main()
{
        int A[100];
        int B=53;
        int i;
        Array(A,B);
        Eliminar(A,B);
        Compactar(A);
}
int Array(int A[100],int B)
{
        int i,num;
        for(i=0;i<100;i++)
        {
                if(i<50)
                {
                        num=1+rand()%(1000);
                        A[i]=num;
                }
                else
                {
                    A[i]=-1;
                }
                if(i==3)
                {
                        A[i]=B;
                }
        }
}
int Eliminar(int A[100],int B)
{
        for(int i=0;i<100;i++)
        {
            if(A[i]==53)
            {
                    A[i]=-1;
            }
        }
}

int Compactar(int A[100])
{
        int ord;
        for(int i=0;i<100;i++)
        {
                for(int j=0;j<100;j++)
                {
                        if(A[j]==-1)
                        {
                            ord=A[j];
                            A[j]=A[j+1];
                            A[j+1]=ord;
                        }
                }
        }
}
