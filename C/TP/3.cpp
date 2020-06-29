#include <stdio.h>
int main(){
int G;
printf("Ingrese un numero:\n");
scanf("%d",&G);
if (G==0){
}
else if(G%2==0){
printf("Es par\n");
}
else{
printf("Es impar\n");}
while(G!=0){
printf("Ingrese un numero:\n");
scanf("%d",&G);
if (G==0){
}
else if(G%2==0){
printf("Es par\n");
}
else{
printf("Es impar\n");
}
}
}
