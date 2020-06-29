#include <stdio.h>
int suma(int A,int B);
int X=0;
int A,B=0;
int main(){
printf("Ingrese un numero A\n");
scanf("%d",&A);
printf("Ingrese un numero B\n");
scanf("%d",&B);
X=suma(A,B);
printf("La suma de A+B es:%d\n",X);
}
int suma(int A,int B){
X=A+B;
return X;
}

