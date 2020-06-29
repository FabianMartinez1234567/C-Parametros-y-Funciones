#include <stdio.h>
int main(){
int C,i,a=0;
printf("ingrese un numero para ver sus multiplos:\n");
scanf("%d",&a);
printf("Los multiplos son:\n");
for(i=1;i<=a;i++){
C=a*i;
printf("%d  ",C);


}
}
