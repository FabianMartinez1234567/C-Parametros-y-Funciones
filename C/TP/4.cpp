#include <stdio.h>
int main(){
int A,B,C,D=0;
int i=1;
int j=1;
printf("Elija un numero A\n");
scanf("%d",&A);
printf("Elija un numero B\n");
scanf("%d",&B);
printf("#####MENU#####\n");
printf("1.SUMA A y B\n");
printf("2.Indica cual de los dos es MAYOR\n");
printf("3.Resultado de la POTENCIA de B^A \n");
printf("4.Salida\n");
printf("Elija uno...\n");
scanf("%d",&C);
switch(C){
case 1:
D=A+B;
printf("La suma es:%d\n",D);
break;

case 2:
if(A>B){
        printf("A es major que B\n");
}
else if(A<B)
{
        printf("B es major que A\n");
}
else{
        printf("A y B son iguales\n");
}

break;

case 3:
 for(i=0;i<A;i++){
j = j * B;
    }
printf("La potencia de es:%d\n",j);
break;

default:{
break;
}

}

}
