#include <stdio.h>
int main()
{
int A,B=0;
printf("Ingrese un numero para el conteo:\n");
scanf("%d",&A);
printf("Ingrese un numero para terminar el conteo:\n");
scanf("%d",&B);
while(A<=B){
printf("Los numeros entre el A y el B son:%d\n",A);
A++;
}


}

